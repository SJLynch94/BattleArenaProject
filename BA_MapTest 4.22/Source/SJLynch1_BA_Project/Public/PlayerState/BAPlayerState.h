// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BAPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class SJLYNCH1_BA_PROJECT_API ABAPlayerState : public APlayerState
{
	GENERATED_BODY()

public:

		UFUNCTION(BlueprintCallable, Category = "PlayerState")
		void AddScore(float ScoreDelta);

		UFUNCTION()
		void CheckScore();
	
		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "PlayerState")
		float MaxScore;

};
