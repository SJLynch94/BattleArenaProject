// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GameMode/BAGameMode.h"
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
	UFunction* Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature()
	{
		struct _Script_SJLynch1_BA_Project_eventOnActorKilled_Parms
		{
			AActor* VictimActor;
			AActor* KillerActor;
			AController* KillerController;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerController = { UE4CodeGen_Private::EPropertyClass::Object, "KillerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_SJLynch1_BA_Project_eventOnActorKilled_Parms, KillerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerActor = { UE4CodeGen_Private::EPropertyClass::Object, "KillerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_SJLynch1_BA_Project_eventOnActorKilled_Parms, KillerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictimActor = { UE4CodeGen_Private::EPropertyClass::Object, "VictimActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_SJLynch1_BA_Project_eventOnActorKilled_Parms, VictimActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KillerController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KillerActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VictimActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project, "OnActorKilled__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_SJLynch1_BA_Project_eventOnActorKilled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
			{ "GameOver", (Native)&ABAGameMode::execGameOver },
			{ "RespawnPlayer", (Native)&ABAGameMode::execRespawnPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABAGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAGameMode, "GameOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABAGameMode_RespawnPlayer()
	{
		struct BAGameMode_eventRespawnPlayer_Parms
		{
			APlayerController* PC;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC = { UE4CodeGen_Private::EPropertyClass::Object, "PC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BAGameMode_eventRespawnPlayer_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAGameMode, "RespawnPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(BAGameMode_eventRespawnPlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABAGameMode_SpawnNewBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAGameMode, "SpawnNewBot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABAGameMode_NoRegister()
	{
		return ABAGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ABAGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABAGameMode_GameOver, "GameOver" }, // 121360936
				{ &Z_Construct_UFunction_ABAGameMode_RespawnPlayer, "RespawnPlayer" }, // 3476093426
				{ &Z_Construct_UFunction_ABAGameMode_SpawnNewBot, "SpawnNewBot" }, // 731213340
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameMode/BAGameMode.h" },
				{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorKilled_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorKilled = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnActorKilled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ABAGameMode, OnActorKilled), Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature, METADATA_PARAMS(NewProp_OnActorKilled_MetaData, ARRAY_COUNT(NewProp_OnActorKilled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnDelayTimer_MetaData[] = {
				{ "Category", "GameRules" },
				{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnDelayTimer = { UE4CodeGen_Private::EPropertyClass::Float, "RespawnDelayTimer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(ABAGameMode, RespawnDelayTimer), METADATA_PARAMS(NewProp_RespawnDelayTimer_MetaData, ARRAY_COUNT(NewProp_RespawnDelayTimer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[] = {
				{ "Category", "GameRules" },
				{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentRound = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentRound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ABAGameMode, CurrentRound), METADATA_PARAMS(NewProp_CurrentRound_MetaData, ARRAY_COUNT(NewProp_CurrentRound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRoundLimit_MetaData[] = {
				{ "Category", "GameRules" },
				{ "ModuleRelativePath", "Public/GameMode/BAGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRoundLimit = { UE4CodeGen_Private::EPropertyClass::Int, "MaxRoundLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ABAGameMode, MaxRoundLimit), METADATA_PARAMS(NewProp_MaxRoundLimit_MetaData, ARRAY_COUNT(NewProp_MaxRoundLimit_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnActorKilled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RespawnDelayTimer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentRound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRoundLimit,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABAGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABAGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(ABAGameMode, 1076152474);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABAGameMode(Z_Construct_UClass_ABAGameMode, &ABAGameMode::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("ABAGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABAGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
