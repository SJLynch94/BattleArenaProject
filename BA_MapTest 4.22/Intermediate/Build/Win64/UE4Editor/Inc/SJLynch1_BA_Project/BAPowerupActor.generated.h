// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SJLYNCH1_BA_PROJECT_BAPowerupActor_generated_h
#error "BAPowerupActor.generated.h already included, missing '#pragma once' in BAPowerupActor.h"
#endif
#define SJLYNCH1_BA_PROJECT_BAPowerupActor_generated_h

#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivatePowerup) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActivateFor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivatePowerup(Z_Param_ActivateFor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTickPowerup(); \
		P_NATIVE_END; \
	}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivatePowerup) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActivateFor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivatePowerup(Z_Param_ActivateFor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTickPowerup(); \
		P_NATIVE_END; \
	}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_EVENT_PARMS \
	struct BAPowerupActor_eventOnActivated_Parms \
	{ \
		AActor* ActivateFor; \
	};


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_CALLBACK_WRAPPERS
#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABAPowerupActor(); \
	friend struct Z_Construct_UClass_ABAPowerupActor_Statics; \
public: \
	DECLARE_CLASS(ABAPowerupActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(ABAPowerupActor)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABAPowerupActor(); \
	friend struct Z_Construct_UClass_ABAPowerupActor_Statics; \
public: \
	DECLARE_CLASS(ABAPowerupActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(ABAPowerupActor)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABAPowerupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABAPowerupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABAPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABAPowerupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABAPowerupActor(ABAPowerupActor&&); \
	NO_API ABAPowerupActor(const ABAPowerupActor&); \
public:


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABAPowerupActor(ABAPowerupActor&&); \
	NO_API ABAPowerupActor(const ABAPowerupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABAPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABAPowerupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABAPowerupActor)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PowerupInterval() { return STRUCT_OFFSET(ABAPowerupActor, PowerupInterval); } \
	FORCEINLINE static uint32 __PPO__TotalNoTicks() { return STRUCT_OFFSET(ABAPowerupActor, TotalNoTicks); } \
	FORCEINLINE static uint32 __PPO__PowerupSound() { return STRUCT_OFFSET(ABAPowerupActor, PowerupSound); } \
	FORCEINLINE static uint32 __PPO__PowerdownSound() { return STRUCT_OFFSET(ABAPowerupActor, PowerdownSound); }


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_12_PROLOG \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_EVENT_PARMS


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_RPC_WRAPPERS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_CALLBACK_WRAPPERS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_INCLASS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_CALLBACK_WRAPPERS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_INCLASS_NO_PURE_DECLS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SJLYNCH1_BA_PROJECT_API UClass* StaticClass<class ABAPowerupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_PowerupActor_BAPowerupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
