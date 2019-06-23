// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ExplosiveBarrel/BAExplosiveBarrel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBAExplosiveBarrel() {}
// Cross Module References
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAExplosiveBarrel_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAExplosiveBarrel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SJLynch1_BA_Project();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAExplosiveBarrel_OnHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABAExplosiveBarrel::StaticRegisterNativesABAExplosiveBarrel()
	{
		UClass* Class = ABAExplosiveBarrel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealthChanged", (Native)&ABAExplosiveBarrel::execOnHealthChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABAExplosiveBarrel_OnHealthChanged()
	{
		struct BAExplosiveBarrel_eventOnHealthChanged_Parms
		{
			UHealthComponent* OwningHealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BAExplosiveBarrel_eventOnHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BAExplosiveBarrel_eventOnHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(BAExplosiveBarrel_eventOnHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BAExplosiveBarrel_eventOnHealthChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BAExplosiveBarrel_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "OwningHealthComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BAExplosiveBarrel_eventOnHealthChanged_Parms, OwningHealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(NewProp_OwningHealthComp_MetaData, ARRAY_COUNT(NewProp_OwningHealthComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningHealthComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ExplosiveBarrel/BAExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAExplosiveBarrel, "OnHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(BAExplosiveBarrel_eventOnHealthChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABAExplosiveBarrel_NoRegister()
	{
		return ABAExplosiveBarrel::StaticClass();
	}
	UClass* Z_Construct_UClass_ABAExplosiveBarrel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABAExplosiveBarrel_OnHealthChanged, "OnHealthChanged" }, // 4119132247
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ExplosiveBarrel/BAExplosiveBarrel.h" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel/BAExplosiveBarrel.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodeSound_MetaData[] = {
				{ "Category", "FX" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel/BAExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodeSound = { UE4CodeGen_Private::EPropertyClass::Object, "ExplodeSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABAExplosiveBarrel, ExplodeSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_ExplodeSound_MetaData, ARRAY_COUNT(NewProp_ExplodeSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodedMaterial_MetaData[] = {
				{ "Category", "FX" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel/BAExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodedMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ExplodedMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABAExplosiveBarrel, ExplodedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_ExplodedMaterial_MetaData, ARRAY_COUNT(NewProp_ExplodedMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[] = {
				{ "Category", "FX" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel/BAExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ExplosionEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABAExplosiveBarrel, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_ExplosionEffect_MetaData, ARRAY_COUNT(NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionImpulse_MetaData[] = {
				{ "Category", "FX" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel/BAExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionImpulse = { UE4CodeGen_Private::EPropertyClass::Float, "ExplosionImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABAExplosiveBarrel, ExplosionImpulse), METADATA_PARAMS(NewProp_ExplosionImpulse_MetaData, ARRAY_COUNT(NewProp_ExplosionImpulse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosiveDamage_MetaData[] = {
				{ "Category", "Components" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel/BAExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosiveDamage = { UE4CodeGen_Private::EPropertyClass::Float, "ExplosiveDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABAExplosiveBarrel, ExplosiveDamage), METADATA_PARAMS(NewProp_ExplosiveDamage_MetaData, ARRAY_COUNT(NewProp_ExplosiveDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExploded_MetaData[] = {
				{ "Category", "Components" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel/BAExplosiveBarrel.h" },
			};
#endif
			auto NewProp_bExploded_SetBit = [](void* Obj){ ((ABAExplosiveBarrel*)Obj)->bExploded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExploded = { UE4CodeGen_Private::EPropertyClass::Bool, "bExploded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABAExplosiveBarrel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExploded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExploded_MetaData, ARRAY_COUNT(NewProp_bExploded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialForceComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel/BAExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadialForceComp = { UE4CodeGen_Private::EPropertyClass::Object, "RadialForceComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABAExplosiveBarrel, RadialForceComp), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(NewProp_RadialForceComp_MetaData, ARRAY_COUNT(NewProp_RadialForceComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel/BAExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABAExplosiveBarrel, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel/BAExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008001c, 1, nullptr, STRUCT_OFFSET(ABAExplosiveBarrel, HealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(NewProp_HealthComp_MetaData, ARRAY_COUNT(NewProp_HealthComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplodeSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplodedMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplosionEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplosionImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplosiveDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExploded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadialForceComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABAExplosiveBarrel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABAExplosiveBarrel::StaticClass,
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
	IMPLEMENT_CLASS(ABAExplosiveBarrel, 669456504);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABAExplosiveBarrel(Z_Construct_UClass_ABAExplosiveBarrel, &ABAExplosiveBarrel::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("ABAExplosiveBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABAExplosiveBarrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
