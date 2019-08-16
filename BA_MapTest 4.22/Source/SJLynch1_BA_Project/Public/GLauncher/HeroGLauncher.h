// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/HeroWeapon.h"
#include "HeroGLauncher.generated.h"


class USoundCue;
class U3DSound;

/**
 * 
 */
UCLASS()
class SJLYNCH1_BA_PROJECT_API AHeroGLauncher : public AHeroWeapon
{
	GENERATED_BODY()
	
protected:

	virtual void Fire() override;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile Weapon")
	TSubclassOf<AActor> ProjectileClass;
	
	void PlayFireEffects();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	USoundCue* GLSound;
	
};
