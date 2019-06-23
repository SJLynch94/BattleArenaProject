// Fill out your copyright notice in the Description page of Project Settings.

#include "BAGameMode.h"
#include "HealthComponent.h"
#include "BAPlayerState.h"
#include "TimerManager.h"

ABAGameMode::ABAGameMode()
{
	PlayerStateClass = ABAPlayerState::StaticClass();

	RespawnDelayTimer = 3.0f;
}


void ABAGameMode::CheckAnyPlayerAlive()
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
	{
		APlayerController* PC = It->Get();
		if (PC && PC->GetPawn())
		{
			APawn* MyPawn = PC->GetPawn();
			UHealthComponent* HealthComp = Cast<UHealthComponent>(MyPawn->GetComponentByClass(UHealthComponent::StaticClass()));

			if (ensure(HealthComp) && HealthComp->GetHealth() > 0.0f)	/* Ensure is a assertion to break the code if this it not correct */
			{
				/* Player is still alive so return */
				return;
			}
			else if (ensure(HealthComp) && HealthComp->GetHealth() <= 0.0f)
			{
				APlayerController* PC = It->Get();
				if (PC && PC->GetPawn() == nullptr)
				{
					TimerDelegate_RespawnPlayer.BindUFunction(this, FName("RespawnPlayer"), PC);
					GetWorldTimerManager().SetTimer(TimerHandle_RespawnPlayer, TimerDelegate_RespawnPlayer, RespawnDelayTimer, false);
				}
				RespawnPlayer(PC);
			}
		}
	}
	//GameOver();
}

void ABAGameMode::GameOver()
{
	//Open Game Over Widget/Map
}

void ABAGameMode::RestartDeadPlayers()
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
	{
		APlayerController* PC = It->Get();
		if (PC && PC->GetPawn() == nullptr)
		{
			TimerDelegate_RespawnPlayer.BindUFunction(this, FName("RespawnPlayer"), PC);
			GetWorldTimerManager().SetTimer(TimerHandle_RespawnPlayer, TimerDelegate_RespawnPlayer, RespawnDelayTimer, false);
		}
	}
}

void ABAGameMode::RespawnPlayer(APlayerController * PC)
{
	UE_LOG(LogTemp, Warning, TEXT("RespawnPlayer"));
	RestartPlayer(PC);
}

void ABAGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	CheckAnyPlayerAlive();
	//RestartDeadPlayers();
}

void ABAGameMode::UpdateRound()
{
	if (CurrentRound < MaxRoundLimit)
	{
		CurrentRound++;
	}
	GameOver();
}
