// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Hero/HeroCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCharacter() {}
// Cross Module References
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_AHeroCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SJLynch1_BA_Project();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_AHeroCharacter_OnArmourChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_AHeroCharacter_OnHealthChanged();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_AHeroCharacter_Reload();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_AHeroCharacter_StartFire();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_AHeroCharacter_StopFire();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_AHeroWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AHeroCharacter::StaticRegisterNativesAHeroCharacter()
	{
		UClass* Class = AHeroCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnArmourChanged", (Native)&AHeroCharacter::execOnArmourChanged },
			{ "OnHealthChanged", (Native)&AHeroCharacter::execOnHealthChanged },
			{ "Reload", (Native)&AHeroCharacter::execReload },
			{ "StartFire", (Native)&AHeroCharacter::execStartFire },
			{ "StopFire", (Native)&AHeroCharacter::execStopFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_OnArmourChanged()
	{
		struct HeroCharacter_eventOnArmourChanged_Parms
		{
			UHealthComponent* HealthComponent;
			float Armour;
			float ArmourDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
			float Health;
			float HealthDelta;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnArmourChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnArmourChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnArmourChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnArmourChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnArmourChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmourDelta = { UE4CodeGen_Private::EPropertyClass::Float, "ArmourDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnArmourChanged_Parms, ArmourDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Armour = { UE4CodeGen_Private::EPropertyClass::Float, "Armour", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnArmourChanged_Parms, Armour), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnArmourChanged_Parms, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(NewProp_HealthComponent_MetaData, ARRAY_COUNT(NewProp_HealthComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArmourDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Armour,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroCharacter, "OnArmourChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(HeroCharacter_eventOnArmourChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_OnHealthChanged()
	{
		struct HeroCharacter_eventOnHealthChanged_Parms
		{
			UHealthComponent* HealthComponent;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnHealthChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(HeroCharacter_eventOnHealthChanged_Parms, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(NewProp_HealthComponent_MetaData, ARRAY_COUNT(NewProp_HealthComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroCharacter, "OnHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(HeroCharacter_eventOnHealthChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroCharacter, "Reload", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
				{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Player\")\nvoid Fire();" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroCharacter, "StartFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroCharacter, "StopFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHeroCharacter_NoRegister()
	{
		return AHeroCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AHeroCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AHeroCharacter_OnArmourChanged, "OnArmourChanged" }, // 1223015266
				{ &Z_Construct_UFunction_AHeroCharacter_OnHealthChanged, "OnHealthChanged" }, // 4289360996
				{ &Z_Construct_UFunction_AHeroCharacter_Reload, "Reload" }, // 2510031824
				{ &Z_Construct_UFunction_AHeroCharacter_StartFire, "StartFire" }, // 250606526
				{ &Z_Construct_UFunction_AHeroCharacter_StopFire, "StopFire" }, // 4068244028
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Hero/HeroCharacter.h" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GodModeDown_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GodModeDown = { UE4CodeGen_Private::EPropertyClass::Object, "GodModeDown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, GodModeDown), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_GodModeDown_MetaData, ARRAY_COUNT(NewProp_GodModeDown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GodLikeSound_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GodLikeSound = { UE4CodeGen_Private::EPropertyClass::Object, "GodLikeSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, GodLikeSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_GodLikeSound_MetaData, ARRAY_COUNT(NewProp_GodLikeSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootSteps_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootSteps = { UE4CodeGen_Private::EPropertyClass::Object, "FootSteps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, FootSteps), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_FootSteps_MetaData, ARRAY_COUNT(NewProp_FootSteps_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
				{ "ToolTip", "Default FOV set during begin play" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, DefaultFOV), METADATA_PARAMS(NewProp_DefaultFOV_MetaData, ARRAY_COUNT(NewProp_DefaultFOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSpeed_MetaData[] = {
				{ "Category", "Player" },
				{ "ClampMax", "100.000000" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "ZoomInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, ZoomInterpSpeed), METADATA_PARAMS(NewProp_ZoomInterpSpeed_MetaData, ARRAY_COUNT(NewProp_ZoomInterpSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV = { UE4CodeGen_Private::EPropertyClass::Float, "ZoomedFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, ZoomedFOV), METADATA_PARAMS(NewProp_ZoomedFOV_MetaData, ARRAY_COUNT(NewProp_ZoomedFOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGodMode_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			auto NewProp_bIsGodMode_SetBit = [](void* Obj){ ((AHeroCharacter*)Obj)->bIsGodMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGodMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsGodMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AHeroCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsGodMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsGodMode_MetaData, ARRAY_COUNT(NewProp_bIsGodMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			auto NewProp_bIsSprinting_SetBit = [](void* Obj){ ((AHeroCharacter*)Obj)->bIsSprinting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSprinting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AHeroCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSprinting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSprinting_MetaData, ARRAY_COUNT(NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDied_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
				{ "ToolTip", "Actor Died Previously" },
			};
#endif
			auto NewProp_bDied_SetBit = [](void* Obj){ ((AHeroCharacter*)Obj)->bDied = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDied = { UE4CodeGen_Private::EPropertyClass::Bool, "bDied", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AHeroCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDied_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDied_MetaData, ARRAY_COUNT(NewProp_bDied_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttackSocketName_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponAttackSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "WeaponAttackSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030001, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, WeaponAttackSocketName), METADATA_PARAMS(NewProp_WeaponAttackSocketName_MetaData, ARRAY_COUNT(NewProp_WeaponAttackSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarterWeaponClass_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_StarterWeaponClass = { UE4CodeGen_Private::EPropertyClass::Class, "StarterWeaponClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, StarterWeaponClass), Z_Construct_UClass_AHeroWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_StarterWeaponClass_MetaData, ARRAY_COUNT(NewProp_StarterWeaponClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Self_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Self = { UE4CodeGen_Private::EPropertyClass::Object, "Self", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, Self), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Self_MetaData, ARRAY_COUNT(NewProp_Self_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000004, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, CurrentWeapon), Z_Construct_UClass_AHeroWeapon_NoRegister, METADATA_PARAMS(NewProp_CurrentWeapon_MetaData, ARRAY_COUNT(NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, HealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(NewProp_HealthComp_MetaData, ARRAY_COUNT(NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArmComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArmComp_MetaData, ARRAY_COUNT(NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AHeroCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComp_MetaData, ARRAY_COUNT(NewProp_CameraComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GodModeDown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GodLikeSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FootSteps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZoomInterpSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZoomedFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsGodMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSprinting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDied,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeaponAttackSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StarterWeaponClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Self,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArmComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHeroCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHeroCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeroCharacter, 4018111707);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeroCharacter(Z_Construct_UClass_AHeroCharacter, &AHeroCharacter::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("AHeroCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
