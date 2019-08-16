// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SJLynch1_BA_Project/Public/PlayerState/BAPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBAPlayerState() {}
// Cross Module References
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAPlayerState_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_SJLynch1_BA_Project();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAPlayerState_AddScore();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAPlayerState_CheckScore();
// End Cross Module References
	void ABAPlayerState::StaticRegisterNativesABAPlayerState()
	{
		UClass* Class = ABAPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScore", &ABAPlayerState::execAddScore },
			{ "CheckScore", &ABAPlayerState::execCheckScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABAPlayerState_AddScore_Statics
	{
		struct BAPlayerState_eventAddScore_Parms
		{
			float ScoreDelta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABAPlayerState_AddScore_Statics::NewProp_ScoreDelta = { "ScoreDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BAPlayerState_eventAddScore_Parms, ScoreDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABAPlayerState_AddScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABAPlayerState_AddScore_Statics::NewProp_ScoreDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABAPlayerState_AddScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Public/PlayerState/BAPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABAPlayerState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPlayerState, nullptr, "AddScore", sizeof(BAPlayerState_eventAddScore_Parms), Z_Construct_UFunction_ABAPlayerState_AddScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABAPlayerState_AddScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABAPlayerState_AddScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABAPlayerState_AddScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABAPlayerState_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABAPlayerState_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABAPlayerState_CheckScore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABAPlayerState_CheckScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerState/BAPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABAPlayerState_CheckScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPlayerState, nullptr, "CheckScore", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABAPlayerState_CheckScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABAPlayerState_CheckScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABAPlayerState_CheckScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABAPlayerState_CheckScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABAPlayerState_NoRegister()
	{
		return ABAPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ABAPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABAPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABAPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABAPlayerState_AddScore, "AddScore" }, // 2405039318
		{ &Z_Construct_UFunction_ABAPlayerState_CheckScore, "CheckScore" }, // 3269435746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerState/BAPlayerState.h" },
		{ "ModuleRelativePath", "Public/PlayerState/BAPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPlayerState_Statics::NewProp_MaxScore_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Public/PlayerState/BAPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABAPlayerState_Statics::NewProp_MaxScore = { "MaxScore", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAPlayerState, MaxScore), METADATA_PARAMS(Z_Construct_UClass_ABAPlayerState_Statics::NewProp_MaxScore_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAPlayerState_Statics::NewProp_MaxScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABAPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAPlayerState_Statics::NewProp_MaxScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABAPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABAPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABAPlayerState_Statics::ClassParams = {
		&ABAPlayerState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABAPlayerState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABAPlayerState_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABAPlayerState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABAPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABAPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABAPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABAPlayerState, 3034072708);
	template<> SJLYNCH1_BA_PROJECT_API UClass* StaticClass<ABAPlayerState>()
	{
		return ABAPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABAPlayerState(Z_Construct_UClass_ABAPlayerState, &ABAPlayerState::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("ABAPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABAPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
