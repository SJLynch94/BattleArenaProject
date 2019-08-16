// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SJLynch1_BA_Project/Public/PickupActor/BAPickupActor.h"
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
			{ "Respawn", &ABAPickupActor::execRespawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABAPickupActor_Respawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABAPickupActor_Respawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABAPickupActor_Respawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABAPickupActor, nullptr, "Respawn", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABAPickupActor_Respawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABAPickupActor_Respawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABAPickupActor_Respawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABAPickupActor_Respawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABAPickupActor_NoRegister()
	{
		return ABAPickupActor::StaticClass();
	}
	struct Z_Construct_UClass_ABAPickupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RespawnSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUpClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PowerUpClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABAPickupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SJLynch1_BA_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABAPickupActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABAPickupActor_Respawn, "Respawn" }, // 399996492
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPickupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupActor/BAPickupActor.h" },
		{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPickupActor_Statics::NewProp_RespawnSound_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABAPickupActor_Statics::NewProp_RespawnSound = { "RespawnSound", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAPickupActor, RespawnSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABAPickupActor_Statics::NewProp_RespawnSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAPickupActor_Statics::NewProp_RespawnSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPickupActor_Statics::NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABAPickupActor_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAPickupActor, CooldownDuration), METADATA_PARAMS(Z_Construct_UClass_ABAPickupActor_Statics::NewProp_CooldownDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAPickupActor_Statics::NewProp_CooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPickupActor_Statics::NewProp_PowerUpClass_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABAPickupActor_Statics::NewProp_PowerUpClass = { "PowerUpClass", nullptr, (EPropertyFlags)0x0024080000000815, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAPickupActor, PowerUpClass), Z_Construct_UClass_ABAPowerupActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABAPickupActor_Statics::NewProp_PowerUpClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAPickupActor_Statics::NewProp_PowerUpClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPickupActor_Statics::NewProp_DecalComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABAPickupActor_Statics::NewProp_DecalComp = { "DecalComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAPickupActor, DecalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABAPickupActor_Statics::NewProp_DecalComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAPickupActor_Statics::NewProp_DecalComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABAPickupActor_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickupActor/BAPickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABAPickupActor_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAPickupActor, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABAPickupActor_Statics::NewProp_SphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABAPickupActor_Statics::NewProp_SphereComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABAPickupActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAPickupActor_Statics::NewProp_RespawnSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAPickupActor_Statics::NewProp_CooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAPickupActor_Statics::NewProp_PowerUpClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAPickupActor_Statics::NewProp_DecalComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABAPickupActor_Statics::NewProp_SphereComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABAPickupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABAPickupActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABAPickupActor_Statics::ClassParams = {
		&ABAPickupActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABAPickupActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABAPickupActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABAPickupActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABAPickupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABAPickupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABAPickupActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABAPickupActor, 2505883363);
	template<> SJLYNCH1_BA_PROJECT_API UClass* StaticClass<ABAPickupActor>()
	{
		return ABAPickupActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABAPickupActor(Z_Construct_UClass_ABAPickupActor, &ABAPickupActor::StaticClass, TEXT("/Script/SJLynch1_BA_Project"), TEXT("ABAPickupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABAPickupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
