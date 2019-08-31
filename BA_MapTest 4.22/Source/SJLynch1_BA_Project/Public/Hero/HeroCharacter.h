// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HeroCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class AHeroWeapon;
class UHealthComponent;
class USoundCue;

UCLASS()
class SJLYNCH1_BA_PROJECT_API AHeroCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHeroCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float DirectionValue);

	void MoveRight(float DirectionValue);

	void BeginCrouch();

	void EndCrouch();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UHealthComponent* HealthComp;

	UPROPERTY(BlueprintReadWrite, Category = "Weapon")
	AHeroWeapon* CurrentWeapon;

	UPROPERTY(VisibleAnywhere, EditDefaultsOnly, Category = "Player")
	float ThrowingMultiplier;

	FTimerHandle TimerHandle_TimeBetweenShots;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
	AActor* Self;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<AHeroWeapon> StarterWeaponClass;

	UPROPERTY(VisibleDefaultsOnly, Category = "Player")
	FName WeaponAttackSocketName;

	UFUNCTION()
	void OnHealthChanged(UHealthComponent* HealthComponent, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UFUNCTION()
	void OnArmourChanged(UHealthComponent* HealthComponent, float Armour, float ArmourDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser, float Health, float HealthDelta);

	/* Actor Died Previously */
	UPROPERTY(BlueprintReadOnly, Category = "Player")
	bool bDied;

	UPROPERTY(BlueprintReadWrite, Category = "Player")
	bool bIsSprinting;

	UPROPERTY(BlueprintReadWrite, Category = "Player")
	bool bIsGodMode;

	bool bIsZoomed;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float ZoomedFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (ClampMin = 0.0, ClampMax = 100.0))
	float ZoomInterpSpeed;

	/* Default FOV set during begin play */
	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float DefaultFOV;

	void BeginZoom();

	void EndZoom();

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	USoundCue* FootSteps;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	USoundCue* GodLikeSound;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	USoundCue* GodModeDown;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual FVector GetPawnViewLocation() const override;

	UPROPERTY(BlueprintReadWrite, Category = "Player")
	bool bIsQuadActive;

	//UFUNCTION(BlueprintCallable, Category = "Player")
	//void Fire();

	UFUNCTION(BlueprintCallable, Category = "Player")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "Player")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void Reload();
};
