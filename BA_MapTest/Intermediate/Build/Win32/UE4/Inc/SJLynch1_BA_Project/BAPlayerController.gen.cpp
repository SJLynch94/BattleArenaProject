// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PlayerController/BAPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBAPlayerController() {}
// Cross Module References
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAPlayerController_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SJLynch1_BA_Project();
// End Cross Module References
	void ABAPlayerController::StaticRegisterNativesABAPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ABAPlayerController_NoRegister()
	{
		return ABAPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ABAPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PlayerController/BAPlayerController.h" },
				{ "ModuleRelativePath", "Public/PlayerController/BAPlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABAPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABAPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABAPlayerController, 1254097731);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABAPlayerController(Z_Construct_UClass_ABAPlayerController, &ABAPlayerController::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("ABAPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABAPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
