// Fill out your copyright notice in the Description page of Project Settings.

#include "HeroCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SJLynch1_BA_Project.h"
#include "HealthComponent.h"
#include "Sound/SoundCue.h"
#include "EngineGlobals.h"
#include "TimerManager.h"
#include "HeroWeapon.h"


// Sets default values
AHeroCharacter::AHeroCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);
	//CameraComp->bUsePawnControlRotation = true;

	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComp"));

	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;

	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Ignore);

	WeaponAttackSocketName = "WeaponSocket";

	Self = this;

	ZoomedFOV = 65.0f;
	ZoomInterpSpeed = 20.0f;

	ThrowingMultiplier = 50.0f;
}

// Called when the game starts or when spawned
void AHeroCharacter::BeginPlay()
{
	Super::BeginPlay();

	DefaultFOV = CameraComp->FieldOfView;

	/*Spawn Default Weapon and Attach to the Component (Actor)*/
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	CurrentWeapon = GetWorld()->SpawnActor<AHeroWeapon>(StarterWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	if (CurrentWeapon)
	{
		CurrentWeapon->SetOwner(this);
		CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttackSocketName);
	}

	//HealthComp->OnArmourChanged.AddDynamic(this, &AHeroCharacter::OnArmourChanged);
	HealthComp->OnHealthChanged.AddDynamic(this, &AHeroCharacter::OnHealthChanged);
}

void AHeroCharacter::MoveForward(float DirectionValue)
{
	AddMovementInput(GetActorForwardVector() * DirectionValue);
	if (FootSteps)
	{
		FVector SoundLocation = Self->GetActorLocation();
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), FootSteps, SoundLocation);
	}
}

void AHeroCharacter::MoveRight(float DirectionValue)
{
	AddMovementInput(GetActorRightVector() * DirectionValue);
	if (FootSteps)
	{
		FVector SoundLocation = Self->GetActorLocation();
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), FootSteps, SoundLocation);
	}
}

void AHeroCharacter::BeginCrouch()
{
	Crouch();
}

void AHeroCharacter::EndCrouch()
{
	UnCrouch();
}

//void AHeroCharacter::Fire()
//{
//	if (CurrentWeapon)
//	{
//		CurrentWeapon->Fire();
//	}
//}

void AHeroCharacter::StartFire()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->StartFire();
	}
}

void AHeroCharacter::StopFire()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->StopFire();
	}
}

void AHeroCharacter::Reload()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->Reload();
	}
}

void AHeroCharacter::OnHealthChanged(UHealthComponent* HealthComponent, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Health <= 0.0f && !bDied)
	{
		bDied = true;
		GetMovementComponent()->StopMovementImmediately();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		DetachFromControllerPendingDestroy();
		SetLifeSpan(10.0f);
	}
}

void AHeroCharacter::OnArmourChanged(UHealthComponent * HealthComponent, float Armour, float ArmourDelta, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser, float Health, float HealthDelta)
{
	if (Armour <= 0.0f)
	{
		OnHealthChanged(HealthComponent, Health, HealthDelta, DamageType, InstigatedBy, DamageCauser);
	}
}

void AHeroCharacter::BeginZoom()
{
	bIsZoomed = true;


}

void AHeroCharacter::EndZoom()
{
	bIsZoomed = false;


}

// Called every frame
void AHeroCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float TargetFOV = bIsZoomed ? ZoomedFOV : DefaultFOV;

	float NewFOV = FMath::FInterpTo(CameraComp->FieldOfView, TargetFOV, DeltaTime, ZoomInterpSpeed);

	CameraComp->SetFieldOfView(NewFOV);
}

// Called to bind functionality to input
void AHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AHeroCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHeroCharacter::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &AHeroCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &AHeroCharacter::AddControllerYawInput);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AHeroCharacter::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AHeroCharacter::EndCrouch);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AHeroCharacter::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AHeroCharacter::StopFire);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	PlayerInputComponent->BindAction("Zoom", IE_Pressed, this, &AHeroCharacter::BeginZoom);
	PlayerInputComponent->BindAction("Zoom", IE_Released, this, &AHeroCharacter::EndZoom);
}

FVector AHeroCharacter::GetPawnViewLocation() const
{
	if (CameraComp)
	{
		return CameraComp->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}

