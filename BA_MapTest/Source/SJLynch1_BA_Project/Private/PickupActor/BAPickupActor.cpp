// Fill out your copyright notice in the Description page of Project Settings.

#include "BAPickupActor.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "BAPowerupActor.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "TimerManager.h"

// Sets default values
ABAPickupActor::ABAPickupActor()
{
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetSphereRadius(75.0f);
	RootComponent = SphereComp;

	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	DecalComp->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
	DecalComp->DecalSize = FVector(64.0f, 75.0f, 75.0f);
	DecalComp->SetupAttachment(RootComponent);

	CooldownDuration = 5.0f;
}

// Called when the game starts or when spawned
void ABAPickupActor::BeginPlay()
{
	Super::BeginPlay();
	
	Respawn();
}

void ABAPickupActor::Respawn()
{

	if (PowerUpClass == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("PowerUpClass is nullptr in %s. Please update your Blueprint"), *GetName());
		return;
	}
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	PowerUpInstance = GetWorld()->SpawnActor<ABAPowerupActor>(PowerUpClass, GetTransform(), SpawnParams);

	FVector SoundLocation = SphereComp->GetComponentLocation();
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), RespawnSound, SoundLocation);
}

// Called every frame
void ABAPickupActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ABAPickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (PowerUpInstance)
	{
		PowerUpInstance->ActivatePowerup(OtherActor);
		PowerUpInstance = nullptr;

		GetWorldTimerManager().SetTimer(TimerHandle_RespawnTimer, this, &ABAPickupActor::Respawn, CooldownDuration);
	}
}
