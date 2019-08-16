// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SJLynch1_BA_Project/Public/PlayerController/BAPlayerController.h"
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
	struct Z_Construct_UClass_ABAPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABAPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerController/BAPlayerController.h" },
		{ "ModuleRelativePath", "Public/PlayerController/BAPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABAPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABAPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABAPlayerController_Statics::ClassParams = {
		&ABAPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABAPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABAPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABAPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABAPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABAPlayerController, 2860115432);
	template<> SJLYNCH1_BA_PROJECT_API UClass* StaticClass<ABAPlayerController>()
	{
		return ABAPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABAPlayerController(Z_Construct_UClass_ABAPlayerController, &ABAPlayerController::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("ABAPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABAPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
