// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BAPickupActor.generated.h"

class USphereComponent;
class UDecalComponent;
class ABAPowerupActor;
class USoundCue;
class U3DSound;

UCLASS()
class SJLYNCH1_BA_PROJECT_API ABAPickupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABAPickupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UDecalComponent* DecalComp;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "PickupActor")
	TSubclassOf<ABAPowerupActor> PowerUpClass;

	ABAPowerupActor* PowerUpInstance;

	UPROPERTY(EditInstanceOnly, Category = "PickupActor")
	float CooldownDuration;

	FTimerHandle TimerHandle_RespawnTimer;

	UFUNCTION()
	void Respawn();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PickupActor")
	USoundCue* RespawnSound;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};
