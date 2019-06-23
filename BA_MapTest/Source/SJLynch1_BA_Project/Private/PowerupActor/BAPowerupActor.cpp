// Fill out your copyright notice in the Description page of Project Settings.

#include "BAPowerupActor.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"


// Sets default values
ABAPowerupActor::ABAPowerupActor()
{
	PowerupInterval = 0.0f;
	TotalNoTicks = 0;

	bIsPowerupActive = false;

}

// Called when the game starts or when spawned
void ABAPowerupActor::BeginPlay()
{
	Super::BeginPlay();
	
}


void ABAPowerupActor::OnTickPowerup()
{
	TicksProcessed++;
	OnPowerupTicked();

	if (TicksProcessed >= TotalNoTicks)
	{
		OnExpired();

		bIsPowerupActive = false;

		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTick);
	}
}

// Called every frame
void ABAPowerupActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ABAPowerupActor::ActivatePowerup(AActor* ActivateFor)
{
	OnActivated(ActivateFor);

	FVector PowerupSoundLocation = ActivateFor->GetActorLocation();
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), PowerupSound, PowerupSoundLocation);

	bIsPowerupActive = true;

	if (PowerupInterval > 0.0f)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick, this, &ABAPowerupActor::OnTickPowerup, PowerupInterval, true);
	}
	else
	{
		OnTickPowerup();
	}
}

