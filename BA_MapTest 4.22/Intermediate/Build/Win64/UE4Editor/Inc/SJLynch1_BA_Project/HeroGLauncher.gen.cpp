// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SJLynch1_BA_Project/Public/GLauncher/HeroGLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGLauncher() {}
// Cross Module References
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_AHeroGLauncher_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_AHeroGLauncher();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_AHeroWeapon();
	UPackage* Z_Construct_UPackage__Script_SJLynch1_BA_Project();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AHeroGLauncher::StaticRegisterNativesAHeroGLauncher()
	{
	}
	UClass* Z_Construct_UClass_AHeroGLauncher_NoRegister()
	{
		return AHeroGLauncher::StaticClass();
	}
	struct Z_Construct_UClass_AHeroGLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GLSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GLSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeroGLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHeroWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroGLauncher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GLauncher/HeroGLauncher.h" },
		{ "ModuleRelativePath", "Public/GLauncher/HeroGLauncher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroGLauncher_Statics::NewProp_GLSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/GLauncher/HeroGLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroGLauncher_Statics::NewProp_GLSound = { "GLSound", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroGLauncher, GLSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroGLauncher_Statics::NewProp_GLSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHeroGLauncher_Statics::NewProp_GLSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroGLauncher_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile Weapon" },
		{ "ModuleRelativePath", "Public/GLauncher/HeroGLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHeroGLauncher_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroGLauncher, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHeroGLauncher_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHeroGLauncher_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeroGLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroGLauncher_Statics::NewProp_GLSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroGLauncher_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeroGLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroGLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHeroGLauncher_Statics::ClassParams = {
		&AHeroGLauncher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHeroGLauncher_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHeroGLauncher_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHeroGLauncher_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHeroGLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeroGLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHeroGLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeroGLauncher, 2594847305);
	template<> SJLYNCH1_BA_PROJECT_API UClass* StaticClass<AHeroGLauncher>()
	{
		return AHeroGLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeroGLauncher(Z_Construct_UClass_AHeroGLauncher, &AHeroGLauncher::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("AHeroGLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroGLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
