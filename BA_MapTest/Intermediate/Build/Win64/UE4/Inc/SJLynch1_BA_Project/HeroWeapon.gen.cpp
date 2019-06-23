// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapon/HeroWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroWeapon() {}
// Cross Module References
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_AHeroWeapon_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_AHeroWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SJLynch1_BA_Project();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_AHeroWeapon_Fire();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_AHeroWeapon_Reload();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_AHeroWeapon_StartFire();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_AHeroWeapon_StopFire();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AHeroWeapon::StaticRegisterNativesAHeroWeapon()
	{
		UClass* Class = AHeroWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", (Native)&AHeroWeapon::execFire },
			{ "Reload", (Native)&AHeroWeapon::execReload },
			{ "StartFire", (Native)&AHeroWeapon::execStartFire },
			{ "StopFire", (Native)&AHeroWeapon::execStopFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AHeroWeapon_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroWeapon, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroWeapon_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroWeapon, "Reload", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroWeapon_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroWeapon, "StartFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroWeapon_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroWeapon, "StopFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHeroWeapon_NoRegister()
	{
		return AHeroWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_AHeroWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AHeroWeapon_Fire, "Fire" }, // 2156140856
				{ &Z_Construct_UFunction_AHeroWeapon_Reload, "Reload" }, // 3890191408
				{ &Z_Construct_UFunction_AHeroWeapon_StartFire, "StartFire" }, // 215123209
				{ &Z_Construct_UFunction_AHeroWeapon_StopFire, "StopFire" }, // 2457792859
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Weapon/HeroWeapon.h" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunSound_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunSound = { UE4CodeGen_Private::EPropertyClass::Object, "GunSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, GunSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_GunSound_MetaData, ARRAY_COUNT(NewProp_GunSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoDifference_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AmmoDifference = { UE4CodeGen_Private::EPropertyClass::Int, "AmmoDifference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010005, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, AmmoDifference), METADATA_PARAMS(NewProp_AmmoDifference_MetaData, ARRAY_COUNT(NewProp_AmmoDifference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxAmmo = { UE4CodeGen_Private::EPropertyClass::Int, "MaxAmmo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010005, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, MaxAmmo), METADATA_PARAMS(NewProp_MaxAmmo_MetaData, ARRAY_COUNT(NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipSize_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ClipSize = { UE4CodeGen_Private::EPropertyClass::Int, "ClipSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010005, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, ClipSize), METADATA_PARAMS(NewProp_ClipSize_MetaData, ARRAY_COUNT(NewProp_ClipSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Ammo = { UE4CodeGen_Private::EPropertyClass::Int, "Ammo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010005, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, Ammo), METADATA_PARAMS(NewProp_Ammo_MetaData, ARRAY_COUNT(NewProp_Ammo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCamShake_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireCamShake = { UE4CodeGen_Private::EPropertyClass::Class, "FireCamShake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, FireCamShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_FireCamShake_MetaData, ARRAY_COUNT(NewProp_FireCamShake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundsPerMinute_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
				{ "ToolTip", "RPM - Bullets Fired By Weapon Per Minute" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundsPerMinute = { UE4CodeGen_Private::EPropertyClass::Float, "RoundsPerMinute", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, RoundsPerMinute), METADATA_PARAMS(NewProp_RoundsPerMinute_MetaData, ARRAY_COUNT(NewProp_RoundsPerMinute_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
				{ "ToolTip", "Bullet Spread In Degrees" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpread = { UE4CodeGen_Private::EPropertyClass::Float, "BulletSpread", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, BulletSpread), METADATA_PARAMS(NewProp_BulletSpread_MetaData, ARRAY_COUNT(NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageModifierValue_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
				{ "ToolTip", "The amount that the Critical Chance Damage will be increase by i.e. damageModifier * damageModifierValue" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_damageModifierValue = { UE4CodeGen_Private::EPropertyClass::Int, "damageModifierValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, damageModifierValue), METADATA_PARAMS(NewProp_damageModifierValue_MetaData, ARRAY_COUNT(NewProp_damageModifierValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_criticalChance_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
				{ "ToolTip", "Critical Chance - if criticalChance is set to 60 then there is a 40% Critical Chance" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_criticalChance = { UE4CodeGen_Private::EPropertyClass::Int, "criticalChance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, criticalChance), METADATA_PARAMS(NewProp_criticalChance_MetaData, ARRAY_COUNT(NewProp_criticalChance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageModifier_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
				{ "ToolTip", "Damage Modifier is set to baseDamage and used as the damage for the weapon" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_damageModifier = { UE4CodeGen_Private::EPropertyClass::Int, "damageModifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, damageModifier), METADATA_PARAMS(NewProp_damageModifier_MetaData, ARRAY_COUNT(NewProp_damageModifier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseDamage_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
				{ "ToolTip", "Initial Damage Of the Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_baseDamage = { UE4CodeGen_Private::EPropertyClass::Int, "baseDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, baseDamage), METADATA_PARAMS(NewProp_baseDamage_MetaData, ARRAY_COUNT(NewProp_baseDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerTargetName_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TracerTargetName = { UE4CodeGen_Private::EPropertyClass::Name, "TracerTargetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, TracerTargetName), METADATA_PARAMS(NewProp_TracerTargetName_MetaData, ARRAY_COUNT(NewProp_TracerTargetName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TracerEffect = { UE4CodeGen_Private::EPropertyClass::Object, "TracerEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, TracerEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_TracerEffect_MetaData, ARRAY_COUNT(NewProp_TracerEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleshImpactEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FleshImpactEffect = { UE4CodeGen_Private::EPropertyClass::Object, "FleshImpactEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, FleshImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_FleshImpactEffect_MetaData, ARRAY_COUNT(NewProp_FleshImpactEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultImpactEffect = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultImpactEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, DefaultImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_DefaultImpactEffect_MetaData, ARRAY_COUNT(NewProp_DefaultImpactEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleEffect = { UE4CodeGen_Private::EPropertyClass::Object, "MuzzleEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, MuzzleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_MuzzleEffect_MetaData, ARRAY_COUNT(NewProp_MuzzleEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "MuzzleSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, MuzzleSocketName), METADATA_PARAMS(NewProp_MuzzleSocketName_MetaData, ARRAY_COUNT(NewProp_MuzzleSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Class, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010015, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Weapon/HeroWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AHeroWeapon, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GunSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmmoDifference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAmmo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClipSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ammo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireCamShake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoundsPerMinute,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BulletSpread,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damageModifierValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_criticalChance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damageModifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_baseDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TracerTargetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TracerEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FleshImpactEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultImpactEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuzzleEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuzzleSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHeroWeapon>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHeroWeapon::StaticClass,
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
	IMPLEMENT_CLASS(AHeroWeapon, 2899752);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeroWeapon(Z_Construct_UClass_AHeroWeapon, &AHeroWeapon::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("AHeroWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
