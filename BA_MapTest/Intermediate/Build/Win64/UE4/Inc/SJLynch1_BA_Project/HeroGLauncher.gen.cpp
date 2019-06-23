// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GLauncher/HeroGLauncher.h"
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
	UClass* Z_Construct_UClass_AHeroGLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHeroWeapon,
				(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GLauncher/HeroGLauncher.h" },
				{ "ModuleRelativePath", "Public/GLauncher/HeroGLauncher.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GLSound_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/GLauncher/HeroGLauncher.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GLSound = { UE4CodeGen_Private::EPropertyClass::Object, "GLSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AHeroGLauncher, GLSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_GLSound_MetaData, ARRAY_COUNT(NewProp_GLSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
				{ "Category", "Projectile Weapon" },
				{ "ModuleRelativePath", "Public/GLauncher/HeroGLauncher.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AHeroGLauncher, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileClass_MetaData, ARRAY_COUNT(NewProp_ProjectileClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GLSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHeroGLauncher>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHeroGLauncher::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AHeroGLauncher, 1275349014);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeroGLauncher(Z_Construct_UClass_AHeroGLauncher, &AHeroGLauncher::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("AHeroGLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroGLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
