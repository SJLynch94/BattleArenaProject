// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BAPowerupActor.generated.h"

class USoundCue;
class U3DSound;

UCLASS()
class SJLYNCH1_BA_PROJECT_API ABAPowerupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABAPowerupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/* Keeps the state of the power up for efficient server client replication */
	bool bIsPowerupActive;

	/*Time between powerup ticks*/
	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	float PowerupInterval;

	/*Total times the power up effect is applied*/
	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	int32 TotalNoTicks;

	FTimerHandle TimerHandle_PowerupTick;

	/*Total No of ticks applied*/
	int32 TicksProcessed;

	UFUNCTION()
	void OnTickPowerup();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PickupActor")
	USoundCue* PowerupSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PickupActor")
	USoundCue* PowerdownSound;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	UFUNCTION()
	void ActivatePowerup(AActor* ActivateFor);

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnActivated(AActor* ActivateFor);

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnPowerupTicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnExpired();
	
};
