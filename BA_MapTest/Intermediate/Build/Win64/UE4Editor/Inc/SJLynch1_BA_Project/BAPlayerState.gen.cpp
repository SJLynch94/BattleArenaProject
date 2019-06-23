// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PlayerState/BAPlayerState.h"
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
			{ "AddScore", (Native)&ABAPlayerState::execAddScore },
			{ "CheckScore", (Native)&ABAPlayerState::execCheckScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABAPlayerState_AddScore()
	{
		struct BAPlayerState_eventAddScore_Parms
		{
			float ScoreDelta;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreDelta = { UE4CodeGen_Private::EPropertyClass::Float, "ScoreDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BAPlayerState_eventAddScore_Parms, ScoreDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScoreDelta,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PlayerState" },
				{ "ModuleRelativePath", "Public/PlayerState/BAPlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPlayerState, "AddScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BAPlayerState_eventAddScore_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABAPlayerState_CheckScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PlayerState/BAPlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPlayerState, "CheckScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABAPlayerState_NoRegister()
	{
		return ABAPlayerState::StaticClass();
	}
	UClass* Z_Construct_UClass_ABAPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerState,
				(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABAPlayerState_AddScore, "AddScore" }, // 3260818374
				{ &Z_Construct_UFunction_ABAPlayerState_CheckScore, "CheckScore" }, // 4052007873
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PlayerState/BAPlayerState.h" },
				{ "ModuleRelativePath", "Public/PlayerState/BAPlayerState.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScore_MetaData[] = {
				{ "Category", "PlayerState" },
				{ "ModuleRelativePath", "Public/PlayerState/BAPlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScore = { UE4CodeGen_Private::EPropertyClass::Float, "MaxScore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ABAPlayerState, MaxScore), METADATA_PARAMS(NewProp_MaxScore_MetaData, ARRAY_COUNT(NewProp_MaxScore_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxScore,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABAPlayerState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABAPlayerState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(ABAPlayerState, 3011962172);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABAPlayerState(Z_Construct_UClass_ABAPlayerState, &ABAPlayerState::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("ABAPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABAPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
