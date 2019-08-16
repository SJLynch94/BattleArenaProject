// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGrenade.h"

// Sets default values
AHeroGrenade::AHeroGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

	Grenades = MaxGrenades;
}

// Called when the game starts or when spawned
void AHeroGrenade::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHeroGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

