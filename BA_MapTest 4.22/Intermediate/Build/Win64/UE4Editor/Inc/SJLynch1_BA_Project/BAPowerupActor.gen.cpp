// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SJLynch1_BA_Project/Public/PowerupActor/BAPowerupActor.h"
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
			{ "ActivatePowerup", &ABAPowerupActor::execActivatePowerup },
			{ "OnTickPowerup", &ABAPowerupActor::execOnTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup_Statics
	{
		struct BAPowerupActor_eventActivatePowerup_Parms
		{
			AActor* ActivateFor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivateFor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup_Statics::NewProp_ActivateFor = { "ActivateFor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BAPowerupActor_eventActivatePowerup_Parms, ActivateFor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup_Statics::NewProp_ActivateFor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPowerupActor, nullptr, "ActivatePowerup", sizeof(BAPowerupActor_eventActivatePowerup_Parms), Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABAPowerupActor_OnActivated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivateFor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABAPowerupActor_OnActivated_Statics::NewProp_ActivateFor = { "ActivateFor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BAPowerupActor_eventOnActivated_Parms, ActivateFor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABAPowerupActor_OnActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABAPowerupActor_OnActivated_Statics::NewProp_ActivateFor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABAPowerupActor_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABAPowerupActor_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPowerupActor, nullptr, "OnActivated", sizeof(BAPowerupActor_eventOnActivated_Parms), Z_Construct_UFunction_ABAPowerupActor_OnActivated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABAPowerupActor_OnActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABAPowerupActor_OnActivated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABAPowerupActor_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABAPowerupActor_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABAPowerupActor_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABAPowerupActor_OnExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABAPowerupActor_OnExpired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABAPowerupActor_OnExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPowerupActor, nullptr, "OnExpired", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABAPowerupActor_OnExpired_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABAPowerupActor_OnExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABAPowerupActor_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABAPowerupActor_OnExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABAPowerupActor_OnPowerupTicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABAPowerupActor_OnPowerupTicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABAPowerupActor_OnPowerupTicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPowerupActor, nullptr, "OnPowerupTicked", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABAPowerupActor_OnPowerupTicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABAPowerupActor_OnPowerupTicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABAPowerupActor_OnPowerupTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABAPowerupActor_OnPowerupTicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABAPowerupActor_OnTickPowerup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABAPowerupActor_OnTickPowerup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABAPowerupActor_OnTickPowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPowerupActor, nullptr, "OnTickPowerup", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABAPowerupActor_OnTickPowerup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABAPowerupActor_OnTickPowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABAPowerupActor_OnTickPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABAPowerupActor_OnTickPowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABAPowerupActor_NoRegister()
	{
		return ABAPowerupActor::StaticClass();
	}
	struct Z_Construct_UClass_ABAPowerupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerdownSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerdownSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerupSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNoTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNoTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerupInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABAPowerupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABAPowerupActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABAPowerupActor_ActivatePowerup, "ActivatePowerup" }, // 2959948752
		{ &Z_Construct_UFunction_ABAPowerupActor_OnActivated, "OnActivated" }, // 165720720
		{ &Z_Construct_UFunction_ABAPowerupActor_OnExpired, "OnExpired" }, // 956782902
		{ &Z_Construct_UFunction_ABAPowerupActor_OnPowerupTicked, "OnPowerupTicked" }, // 2974614304
		{ &Z_Construct_UFunction_ABAPowerupActor_OnTickPowerup, "OnTickPowerup" }, // 3199010380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPowerupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerupActor/BAPowerupActor.h" },
		{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerdownSound_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerdownSound = { "PowerdownSound", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAPowerupActor, PowerdownSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerdownSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerdownSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerupSound_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerupSound = { "PowerupSound", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAPowerupActor, PowerupSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerupSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerupSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_TotalNoTicks_MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
		{ "ToolTip", "Total times the power up effect is applied" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_TotalNoTicks = { "TotalNoTicks", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAPowerupActor, TotalNoTicks), METADATA_PARAMS(Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_TotalNoTicks_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_TotalNoTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerupInterval_MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/PowerupActor/BAPowerupActor.h" },
		{ "ToolTip", "Time between powerup ticks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerupInterval = { "PowerupInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAPowerupActor, PowerupInterval), METADATA_PARAMS(Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerupInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerupInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABAPowerupActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerdownSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerupSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_TotalNoTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAPowerupActor_Statics::NewProp_PowerupInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABAPowerupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABAPowerupActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABAPowerupActor_Statics::ClassParams = {
		&ABAPowerupActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABAPowerupActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABAPowerupActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABAPowerupActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABAPowerupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABAPowerupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABAPowerupActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABAPowerupActor, 1458356011);
	template<> SJLYNCH1_BA_PROJECT_API UClass* StaticClass<ABAPowerupActor>()
	{
		return ABAPowerupActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABAPowerupActor(Z_Construct_UClass_ABAPowerupActor, &ABAPowerupActor::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("ABAPowerupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABAPowerupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
