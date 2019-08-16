// Fill out your copyright notice in the Description page of Project Settings.

#include "HeroWeapon.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "TimerManager.h"
#include "Sound/SoundCue.h"
#include "EngineGlobals.h"
#include "SJLynch1_BA_Project.h"

static int32 DebugWeaponDrawing = 0;
FAutoConsoleVariableRef CVARDebugWeaponDrawing(
	TEXT("BA.DebugWeapons"), 
	DebugWeaponDrawing, 
	TEXT("Draw Debug Lines for Weapons"), 
	ECVF_Cheat);

// Sets default values
AHeroWeapon::AHeroWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

	MuzzleSocketName = "MuzzleSocket";
	TracerTargetName = "Target";

	damageModifier = baseDamage;

	criticalChance = 60;

	RoundsPerMinute = 100;

	BulletSpread = 2;

	ClipSize = 30;

	Ammo = ClipSize;

	MaxAmmo = 120;
}

// Called when the game starts or when spawned
void AHeroWeapon::BeginPlay()
{
	Super::BeginPlay();
	
	TimeBetweenShots = 60 / RoundsPerMinute;
}

void AHeroWeapon::Fire()
{
	if (MaxAmmo >= 0 && Ammo > 0)
	{
		Ammo--;

		AActor* MyOwner = GetOwner();

		if (MyOwner)
		{
			FVector EyeLocation;
			FRotator EyeRotation;
			MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

			FVector ShotDirection = EyeRotation.Vector();

			float HalfRad = FMath::DegreesToRadians(BulletSpread);
			ShotDirection = FMath::VRandCone(ShotDirection, HalfRad, HalfRad);

			FVector TraceEnd = EyeLocation + (ShotDirection * 10000);

			/*Particle "Target" parameter*/
			FVector TracerEndPoint = TraceEnd;

			FCollisionQueryParams QueryParams;
			QueryParams.AddIgnoredActor(MyOwner);
			QueryParams.AddIgnoredActor(this);
			QueryParams.bTraceComplex = true;
			QueryParams.bReturnPhysicalMaterial = true;


			FHitResult Hit;
			if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, COLLISION_WEAPON, QueryParams))
			{
				AActor* HitActor = Hit.GetActor();

				damageModifier = baseDamage;

				if (rand() % 100 + 1 > criticalChance/*Random is > 5*/)
				{
					damageModifier *= damageModifierValue;
				}



				UGameplayStatics::ApplyPointDamage(HitActor, damageModifier, ShotDirection, Hit, MyOwner->GetInstigatorController(), MyOwner, DamageType);


				EPhysicalSurface SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());

				UParticleSystem* SelectedEffect = nullptr;

				switch (SurfaceType)
				{
				case SURFACE_FLESHDEFAULT:
					SelectedEffect = FleshImpactEffect;
					break;
				case SURFACE_FLESHVULNERABLE:
					SelectedEffect = FleshImpactEffect;
					break;
				default:
					SelectedEffect = DefaultImpactEffect;
					break;
				}

				if (SelectedEffect)
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedEffect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
				}


				TracerEndPoint = Hit.ImpactPoint;
			}

			if (DebugWeaponDrawing > 0)
			{
				DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::Emerald, false, 1.0f, 0, 1.0f);
			}

			PlayFireEffects(TracerEndPoint);

			LastFireTime = GetWorld()->TimeSeconds;
		}
	}
}

void AHeroWeapon::PlayFireEffects(FVector TraceEndPoint)
{
	if (MuzzleEffect)
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
	}

	FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);

	if (TracerEffect)
	{
		UParticleSystemComponent* TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TracerEffect, MuzzleLocation);
		if (TracerComp)
		{
			TracerComp->SetVectorParameter(TracerTargetName, TraceEndPoint);
		}
	}

	APawn* MyOwner = Cast<APawn>(GetOwner());
	if (MyOwner)
	{
		APlayerController* PC = Cast<APlayerController>(MyOwner->GetController());
		if (PC)
		{
			PC->ClientPlayCameraShake(FireCamShake);
		}
	}

	if (GunSound)
	{
		FVector SoundLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), GunSound, SoundLocation);
	}
}

// Called every frame
void AHeroWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHeroWeapon::StartFire()
{
	float FirstDelay = FMath::Max(LastFireTime + TimeBetweenShots - GetWorld()->TimeSeconds, 0.0f);
	GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenShots, this, &AHeroWeapon::Fire, TimeBetweenShots, true, FirstDelay);
}

void AHeroWeapon::StopFire()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_TimeBetweenShots);
}

void AHeroWeapon::Reload()
{
	if (Ammo < ClipSize)
	{
		AmmoDifference = ClipSize - Ammo;

		if (MaxAmmo > AmmoDifference)
		{
			Ammo += AmmoDifference;
			MaxAmmo -= AmmoDifference;
		}
		else
		{
			Ammo += MaxAmmo;
		}
	}
	else
	{
		if (GEngine)
		{
			
		}
	}
}

