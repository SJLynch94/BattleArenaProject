// Fill out your copyright notice in the Description page of Project Settings.

#include "BAExplosiveBarrel.h"
#include "HeroCharacter.h"
#include "HealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "EngineUtils.h"


// Sets default values
ABAExplosiveBarrel::ABAExplosiveBarrel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ABAExplosiveBarrel::OnHealthChanged);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetSimulatePhysics(true);
	MeshComp->SetCollisionObjectType(ECC_PhysicsBody);
	RootComponent = MeshComp;

	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForceComp"));
	RadialForceComp->SetupAttachment(MeshComp);
	RadialForceComp->Radius = 200;
	RadialForceComp->bImpulseVelChange = true;
	RadialForceComp->bAutoActivate = false;
	RadialForceComp->bIgnoreOwningActor = true;

	ExplosionImpulse = 500;

	ExplosiveDamage = 0.0f;
}

// Called when the game starts or when spawned
void ABAExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABAExplosiveBarrel::OnHealthChanged(UHealthComponent * OwningHealthComp, float Health, float HealthDelta, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser)
{
	if (bExploded)
	{
		return;
	}

	if (Health <= 0.0f)
	{
		bExploded = true;

		FVector BoostIntensity = FVector::UpVector * ExplosionImpulse;
		MeshComp->AddImpulse(BoostIntensity, NAME_None, true);

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());
		MeshComp->SetMaterial(0, ExplodedMaterial);

		RadialForceComp->FireImpulse();

		//UGameplayStatics::ApplyRadialDamage(GetWorld(), 30.0f, GetActorLocation(), 200.0f, UD_Invisibility::StaticClass(), TArray<AActor*>(), this, InstigatedBy, true, ECC_Visibility);
		
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplodeSound, GetActorLocation());

		for (TActorIterator<AHeroCharacter> ActorIt(GetWorld()); ActorIt; ++ActorIt)
		{
			float Distance = GetDistanceTo(*ActorIt);

			if (Distance <= 200.0f)
			{
				UGameplayStatics::ApplyDamage(*ActorIt, ExplosiveDamage, InstigatedBy, this, UDamageType::StaticClass());
			}
		}
	}

}

// Called every frame
void ABAExplosiveBarrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

