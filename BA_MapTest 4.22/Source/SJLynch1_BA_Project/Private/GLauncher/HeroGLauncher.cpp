// Fill out your copyright notice in the Description page of Project Settings.

#include "HeroGLauncher.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"



void AHeroGLauncher::Fire()
{
	if (MaxAmmo >= 0 && Ammo > 0)
	{
		Ammo--;

		AActor* MyOwner = GetOwner();

		if (MyOwner && ProjectileClass)
		{
			FVector EyeLocation;
			FRotator EyeRotation;
			MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

			FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);

			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			GetWorld()->SpawnActor<AActor>(ProjectileClass, MuzzleLocation, EyeRotation, SpawnParams);

			PlayFireEffects();
		}
	}
}

void AHeroGLauncher::PlayFireEffects()
{
	APawn* MyOwner = Cast<APawn>(GetOwner());
	if (MyOwner)
	{
		APlayerController* PC = Cast<APlayerController>(MyOwner->GetController());
		if (PC)
		{
			PC->ClientPlayCameraShake(FireCamShake);
		}
	}

	if (MuzzleEffect)
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
	}

	if (GunSound)
	{
		FVector SoundLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), GLSound, SoundLocation);
	}
}
