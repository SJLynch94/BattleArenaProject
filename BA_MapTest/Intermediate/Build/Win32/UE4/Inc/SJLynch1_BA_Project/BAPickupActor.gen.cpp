// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PickupActor/BAPickupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBAPickupActor() {}
// Cross Module References
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAPickupActor_NoRegister();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAPickupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SJLynch1_BA_Project();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UFunction_ABAPickupActor_Respawn();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SJLYNCH1_BA_PROJECT_API UClass* Z_Construct_UClass_ABAPowerupActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ABAPickupActor::StaticRegisterNativesABAPickupActor()
	{
		UClass* Class = ABAPickupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Respawn", (Native)&ABAPickupActor::execRespawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABAPickupActor_Respawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPickupActor, "Respawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABAPickupActor_NoRegister()
	{
		return ABAPickupActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ABAPickupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABAPickupActor_Respawn, "Respawn" }, // 2849541284
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PickupActor/BAPickupActor.h" },
				{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnSound_MetaData[] = {
				{ "Category", "PickupActor" },
				{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RespawnSound = { UE4CodeGen_Private::EPropertyClass::Object, "RespawnSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABAPickupActor, RespawnSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_RespawnSound_MetaData, ARRAY_COUNT(NewProp_RespawnSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
				{ "Category", "PickupActor" },
				{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CooldownDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, STRUCT_OFFSET(ABAPickupActor, CooldownDuration), METADATA_PARAMS(NewProp_CooldownDuration_MetaData, ARRAY_COUNT(NewProp_CooldownDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUpClass_MetaData[] = {
				{ "Category", "PickupActor" },
				{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PowerUpClass = { UE4CodeGen_Private::EPropertyClass::Class, "PowerUpClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000815, 1, nullptr, STRUCT_OFFSET(ABAPickupActor, PowerUpClass), Z_Construct_UClass_ABAPowerupActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PowerUpClass_MetaData, ARRAY_COUNT(NewProp_PowerUpClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalComp = { UE4CodeGen_Private::EPropertyClass::Object, "DecalComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABAPickupActor, DecalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(NewProp_DecalComp_MetaData, ARRAY_COUNT(NewProp_DecalComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABAPickupActor, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_SphereComp_MetaData, ARRAY_COUNT(NewProp_SphereComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RespawnSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CooldownDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerUpClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecalComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABAPickupActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABAPickupActor::StaticClass,
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
	IMPLEMENT_CLASS(ABAPickupActor, 1357089972);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABAPickupActor(Z_Construct_UClass_ABAPickupActor, &ABAPickupActor::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("ABAPickupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABAPickupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
