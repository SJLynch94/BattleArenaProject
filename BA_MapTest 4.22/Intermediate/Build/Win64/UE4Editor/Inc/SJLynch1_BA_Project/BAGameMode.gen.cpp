// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SJLynch1_BA_Project/Public/GameMode/BAGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBAGameMode() {}
// Cross Module References
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SJLynch1_BA_Project();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAGameMode_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAGameMode_GameOver();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAGameMode_RespawnPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAGameMode_SpawnNewBot();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics
	{
		struct _Script_SJLynch1_BA_Project_eventOnActorKilled_Parms
		{
			AActor* VictimActor;
			AActor* KillerActor;
			AController* KillerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictimActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::NewProp_KillerController = { "KillerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SJLynch1_BA_Project_eventOnActorKilled_Parms, KillerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::NewProp_KillerActor = { "KillerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SJLynch1_BA_Project_eventOnActorKilled_Parms, KillerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::NewProp_VictimActor = { "VictimActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SJLynch1_BA_Project_eventOnActorKilled_Parms, VictimActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::NewProp_KillerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::NewProp_KillerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::NewProp_VictimActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project, nullptr, "OnActorKilled__DelegateSignature", sizeof(_Script_SJLynch1_BA_Project_eventOnActorKilled_Parms), Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_ABAGameMode_SpawnNewBot = FName(TEXT("SpawnNewBot"));
	void ABAGameMode::SpawnNewBot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABAGameMode_SpawnNewBot),NULL);
	}
	void ABAGameMode::StaticRegisterNativesABAGameMode()
	{
		UClass* Class = ABAGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameOver", &ABAGameMode::execGameOver },
			{ "RespawnPlayer", &ABAGameMode::execRespawnPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABAGameMode_GameOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABAGameMode_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABAGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAGameMode, nullptr, "GameOver", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABAGameMode_GameOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABAGameMode_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABAGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABAGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABAGameMode_RespawnPlayer_Statics
	{
		struct BAGameMode_eventRespawnPlayer_Parms
		{
			APlayerController* PC;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABAGameMode_RespawnPlayer_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BAGameMode_eventRespawnPlayer_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABAGameMode_RespawnPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABAGameMode_RespawnPlayer_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABAGameMode_RespawnPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABAGameMode_RespawnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAGameMode, nullptr, "RespawnPlayer", sizeof(BAGameMode_eventRespawnPlayer_Parms), Z_Construct_UFunction_ABAGameMode_RespawnPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABAGameMode_RespawnPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABAGameMode_RespawnPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABAGameMode_RespawnPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABAGameMode_RespawnPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABAGameMode_RespawnPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABAGameMode_SpawnNewBot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABAGameMode_SpawnNewBot_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABAGameMode_SpawnNewBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAGameMode, nullptr, "SpawnNewBot", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABAGameMode_SpawnNewBot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABAGameMode_SpawnNewBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABAGameMode_SpawnNewBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABAGameMode_SpawnNewBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABAGameMode_NoRegister()
	{
		return ABAGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABAGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorKilled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorKilled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnDelayTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnDelayTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRoundLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRoundLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABAGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABAGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABAGameMode_GameOver, "GameOver" }, // 1838128953
		{ &Z_Construct_UFunction_ABAGameMode_RespawnPlayer, "RespawnPlayer" }, // 2648765790
		{ &Z_Construct_UFunction_ABAGameMode_SpawnNewBot, "SpawnNewBot" }, // 1573935417
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameMode/BAGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAGameMode_Statics::NewProp_OnActorKilled_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABAGameMode_Statics::NewProp_OnActorKilled = { "OnActorKilled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAGameMode, OnActorKilled), Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABAGameMode_Statics::NewProp_OnActorKilled_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAGameMode_Statics::NewProp_OnActorKilled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAGameMode_Statics::NewProp_RespawnDelayTimer_MetaData[] = {
		{ "Category", "GameRules" },
		{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABAGameMode_Statics::NewProp_RespawnDelayTimer = { "RespawnDelayTimer", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAGameMode, RespawnDelayTimer), METADATA_PARAMS(Z_Construct_UClass_ABAGameMode_Statics::NewProp_RespawnDelayTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAGameMode_Statics::NewProp_RespawnDelayTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAGameMode_Statics::NewProp_CurrentRound_MetaData[] = {
		{ "Category", "GameRules" },
		{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABAGameMode_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAGameMode, CurrentRound), METADATA_PARAMS(Z_Construct_UClass_ABAGameMode_Statics::NewProp_CurrentRound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAGameMode_Statics::NewProp_CurrentRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAGameMode_Statics::NewProp_MaxRoundLimit_MetaData[] = {
		{ "Category", "GameRules" },
		{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABAGameMode_Statics::NewProp_MaxRoundLimit = { "MaxRoundLimit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAGameMode, MaxRoundLimit), METADATA_PARAMS(Z_Construct_UClass_ABAGameMode_Statics::NewProp_MaxRoundLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAGameMode_Statics::NewProp_MaxRoundLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABAGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAGameMode_Statics::NewProp_OnActorKilled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAGameMode_Statics::NewProp_RespawnDelayTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAGameMode_Statics::NewProp_CurrentRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAGameMode_Statics::NewProp_MaxRoundLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABAGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABAGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABAGameMode_Statics::ClassParams = {
		&ABAGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABAGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABAGameMode_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABAGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABAGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABAGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABAGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABAGameMode, 3905431222);
	template<> SJLYNCH1_BA_PROJECT_API UClass* StaticClass<ABAGameMode>()
	{
		return ABAGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABAGameMode(Z_Construct_UClass_ABAGameMode, &ABAGameMode::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("ABAGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABAGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
