// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PowerupActor/BAPowerupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBAPowerupActor() {}
// Cross Module References
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAPowerupActor_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAPowerupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SJLynch1_BA_Project();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAPowerupActor_OnActivated();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAPowerupActor_OnExpired();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAPowerupActor_OnPowerupTicked();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAPowerupActor_OnTickPowerup();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	static FName NAME_ABAPowerupActor_OnActivated = FName(TEXT("OnActivated"));
	void ABAPowerupActor::OnActivated(AActor* ActivateFor)
	{
		BAPowerupActor_eventOnActivated_Parms Parms;
		Parms.ActivateFor=ActivateFor;
		ProcessEvent(FindFunctionChecked(NAME_ABAPowerupActor_OnActivated),&Parms);
	}
	static FName NAME_ABAPowerupActor_OnExpired = FName(TEXT("OnExpired"));
	void ABAPowerupActor::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABAPowerupActor_OnExpired),NULL);
	}
	static FName NAME_ABAPowerupActor_OnPowerupTicked = FName(TEXT("OnPowerupTicked"));
	void ABAPowerupActor::OnPowerupTicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABAPowerupActor_OnPowerupTicked),NULL);
	}
	void ABAPowerupActor::StaticRegisterNativesABAPowerupActor()
	{
		UClass* Class = ABAPowerupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatePowerup", (Native)&ABAPowerupActor::execActivatePowerup },
			{ "OnTickPowerup", (Native)&ABAPowerupActor::execOnTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup()
	{
		struct BAPowerupActor_eventActivatePowerup_Parms
		{
			AActor* ActivateFor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivateFor = { UE4CodeGen_Private::EPropertyClass::Object, "ActivateFor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BAPowerupActor_eventActivatePowerup_Parms, ActivateFor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActivateFor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPowerupActor, "ActivatePowerup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BAPowerupActor_eventActivatePowerup_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABAPowerupActor_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivateFor = { UE4CodeGen_Private::EPropertyClass::Object, "ActivateFor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BAPowerupActor_eventOnActivated_Parms, ActivateFor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActivateFor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPowerupActor, "OnActivated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(BAPowerupActor_eventOnActivated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABAPowerupActor_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPowerupActor, "OnExpired", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABAPowerupActor_OnPowerupTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPowerupActor, "OnPowerupTicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABAPowerupActor_OnTickPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPowerupActor, "OnTickPowerup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABAPowerupActor_NoRegister()
	{
		return ABAPowerupActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ABAPowerupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup, "ActivatePowerup" }, // 4186948005
				{ &Z_Construct_UFunction_ABAPowerupActor_OnActivated, "OnActivated" }, // 1559560153
				{ &Z_Construct_UFunction_ABAPowerupActor_OnExpired, "OnExpired" }, // 1567302408
				{ &Z_Construct_UFunction_ABAPowerupActor_OnPowerupTicked, "OnPowerupTicked" }, // 1484247440
				{ &Z_Construct_UFunction_ABAPowerupActor_OnTickPowerup, "OnTickPowerup" }, // 3862535901
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PowerupActor/BAPowerupActor.h" },
				{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerdownSound_MetaData[] = {
				{ "Category", "PickupActor" },
				{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerdownSound = { UE4CodeGen_Private::EPropertyClass::Object, "PowerdownSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABAPowerupActor, PowerdownSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_PowerdownSound_MetaData, ARRAY_COUNT(NewProp_PowerdownSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupSound_MetaData[] = {
				{ "Category", "PickupActor" },
				{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerupSound = { UE4CodeGen_Private::EPropertyClass::Object, "PowerupSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABAPowerupActor, PowerupSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_PowerupSound_MetaData, ARRAY_COUNT(NewProp_PowerupSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNoTicks_MetaData[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
				{ "ToolTip", "Total times the power up effect is applied" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNoTicks = { UE4CodeGen_Private::EPropertyClass::Int, "TotalNoTicks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABAPowerupActor, TotalNoTicks), METADATA_PARAMS(NewProp_TotalNoTicks_MetaData, ARRAY_COUNT(NewProp_TotalNoTicks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupInterval_MetaData[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
				{ "ToolTip", "Time between powerup ticks" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerupInterval = { UE4CodeGen_Private::EPropertyClass::Float, "PowerupInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABAPowerupActor, PowerupInterval), METADATA_PARAMS(NewProp_PowerupInterval_MetaData, ARRAY_COUNT(NewProp_PowerupInterval_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerdownSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerupSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalNoTicks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerupInterval,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABAPowerupActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABAPowerupActor::StaticClass,
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
	IMPLEMENT_CLASS(ABAPowerupActor, 2247664771);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABAPowerupActor(Z_Construct_UClass_ABAPowerupActor, &ABAPowerupActor::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("ABAPowerupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABAPowerupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
