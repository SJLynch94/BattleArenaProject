// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthComponent.h"
#include "BAGameMode.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	DefaultHealth = 200;

	DefaultArmour = 100;

	TeamNum = 255;

	bIsDead = false;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	AActor* MyOwner = GetOwner();

	if (MyOwner)
	{
		MyOwner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::HandleTakeAnyDamage);
	}
	Health = DefaultHealth;
	Armour = DefaultArmour;
}


float UHealthComponent::GetHealth()
{
	return Health;
}

float UHealthComponent::GetArmour()
{
	return Armour;
}

void UHealthComponent::Heal(float HealAmount)
{
	if (HealAmount <= 0.0f || Health <= 0.0f)
	{
		return;
	}

	Health = FMath::Clamp(Health + HealAmount, 0.0f, DefaultHealth);

	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s (+%s)"), *FString::SanitizeFloat(Health), *FString::SanitizeFloat(HealAmount));

	OnHealthChanged.Broadcast(this, Health, HealAmount, nullptr, nullptr, nullptr);
}


void UHealthComponent::HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.0f || bIsDead)
	{
		return;
	}

	//if (DamageCauser != DamagedActor) //&& IsFriendly(DamagedActor, DamageCauser))
	//{
		//return;
	//}

	//if (Armour >= 1)
	//{
	//	Armour = FMath::Clamp(Armour - ((Damage / 3) * 2), 0.0f, DefaultArmour);

	//	UE_LOG(LogTemp, Log, TEXT("Armour Changed: %s"), *FString::SanitizeFloat(Armour));

	//	OnArmourChanged.Broadcast(this, Armour, Damage, DamageType, InstigatedBy, DamageCauser, Health);
	//}
	//else if (Armour < 1)																					Need to figure out how to damage armour before health
	//{
	//	/*Update Health with a clamp to not go under 0*/
	//	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);

	//	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(Health));

	//	OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);
	//}

	/*Update Health with a clamp to not go under 0*/
	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);

	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(Health));

	bIsDead = Health <= 0.0f;

	OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);

	if (bIsDead)
	{
		ABAGameMode* GM = Cast<ABAGameMode>(GetWorld()->GetAuthGameMode());
		if (GM)
		{
			GM->OnActorKilled.Broadcast(GetOwner(), DamageCauser, InstigatedBy);
		}
	}
}

// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	
}

//bool UHealthComponent::IsFriendly(AActor * ActorA, AActor * ActorB)
//{
//	if (ActorA == nullptr || ActorB == nullptr)
//	{
//		/* Assumes Friendly */
//		return true;
//	}
//
//	UHealthComponent* HealthCompA = Cast<UHealthComponent>ActorA->GetComponentByClass(UHealthComponent::StaticClass());
//
//	UHealthComponent* HealthCompB = Cast<UHealthComponent>ActorB->GetComponentByClass(UHealthComponent::StaticClass());
//
//	if (HealthCompA == nullptr || HealthCompB == nullptr)
//	{
//		/* Assumes Friendly */
//		return true;
//	}
//
//	return HealthCompA->TeamNum == HealthCompB->TeamNum;
//}

