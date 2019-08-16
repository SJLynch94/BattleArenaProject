// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BAGameMode.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled, AActor*, VictimActor, AActor*, KillerActor, AController*, KillerController);

/**
 * 
 */
UCLASS()
class SJLYNCH1_BA_PROJECT_API ABAGameMode : public AGameModeBase
{
	GENERATED_BODY()

		ABAGameMode();

		void CheckAnyPlayerAlive();

		UFUNCTION()
		void GameOver();

		UPROPERTY(EditAnywhere, Category = "GameRules")
		int32 MaxRoundLimit;

		UPROPERTY(EditAnywhere, Category = "GameRules")
		int32 CurrentRound;


		FTimerHandle TimerHandle_RoundTimer;

		FTimerHandle TimerHandle_RespawnPlayer;

		FTimerDelegate TimerDelegate_RespawnPlayer;

		UPROPERTY(EditDefaultsOnly, Category = "GameRules")
		float RespawnDelayTimer;

		UFUNCTION()
		void RespawnPlayer(APlayerController* PC);


		void RestartDeadPlayers();

protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void SpawnNewBot();

public:

		void Tick(float DeltaSeconds);
	
		void UpdateRound();


	
		UPROPERTY(BlueprintAssignable, Category = "GameMode")
		FOnActorKilled OnActorKilled;
};
