// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SJLYNCH1_BA_PROJECT_BAPickupActor_generated_h
#error "BAPickupActor.generated.h already included, missing '#pragma once' in BAPickupActor.h"
#endif
#define SJLYNCH1_BA_PROJECT_BAPickupActor_generated_h

#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Respawn(); \
		P_NATIVE_END; \
	}


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Respawn(); \
		P_NATIVE_END; \
	}


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABAPickupActor(); \
	friend SJLYNCH1_BA_PROJECT_API class UClass* Z_Construct_UClass_ABAPickupActor(); \
public: \
	DECLARE_CLASS(ABAPickupActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(ABAPickupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABAPickupActor(); \
	friend SJLYNCH1_BA_PROJECT_API class UClass* Z_Construct_UClass_ABAPickupActor(); \
public: \
	DECLARE_CLASS(ABAPickupActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(ABAPickupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABAPickupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABAPickupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABAPickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABAPickupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABAPickupActor(ABAPickupActor&&); \
	NO_API ABAPickupActor(const ABAPickupActor&); \
public:


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABAPickupActor(ABAPickupActor&&); \
	NO_API ABAPickupActor(const ABAPickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABAPickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABAPickupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABAPickupActor)


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ABAPickupActor, SphereComp); } \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(ABAPickupActor, DecalComp); } \
	FORCEINLINE static uint32 __PPO__PowerUpClass() { return STRUCT_OFFSET(ABAPickupActor, PowerUpClass); } \
	FORCEINLINE static uint32 __PPO__CooldownDuration() { return STRUCT_OFFSET(ABAPickupActor, CooldownDuration); } \
	FORCEINLINE static uint32 __PPO__RespawnSound() { return STRUCT_OFFSET(ABAPickupActor, RespawnSound); }


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_15_PROLOG
#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_RPC_WRAPPERS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_INCLASS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_INCLASS_NO_PURE_DECLS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BA_MapTest_Source_SJLynch1_BA_Project_Public_PickupActor_BAPickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
