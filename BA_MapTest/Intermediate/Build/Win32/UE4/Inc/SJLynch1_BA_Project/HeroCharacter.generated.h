// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef SJLYNCH1_BA_PROJECT_HeroCharacter_generated_h
#error "HeroCharacter.generated.h already included, missing '#pragma once' in HeroCharacter.h"
#endif
#define SJLYNCH1_BA_PROJECT_HeroCharacter_generated_h

#define BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Reload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnArmourChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_HealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Armour); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArmourDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnArmourChanged(Z_Param_HealthComponent,Z_Param_Armour,Z_Param_ArmourDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser,Z_Param_Health,Z_Param_HealthDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_HealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHealthChanged(Z_Param_HealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Reload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnArmourChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_HealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Armour); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArmourDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnArmourChanged(Z_Param_HealthComponent,Z_Param_Armour,Z_Param_ArmourDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser,Z_Param_Health,Z_Param_HealthDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_HealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHealthChanged(Z_Param_HealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroCharacter(); \
	friend SJLYNCH1_BA_PROJECT_API class UClass* Z_Construct_UClass_AHeroCharacter(); \
public: \
	DECLARE_CLASS(AHeroCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(AHeroCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAHeroCharacter(); \
	friend SJLYNCH1_BA_PROJECT_API class UClass* Z_Construct_UClass_AHeroCharacter(); \
public: \
	DECLARE_CLASS(AHeroCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(AHeroCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroCharacter(AHeroCharacter&&); \
	NO_API AHeroCharacter(const AHeroCharacter&); \
public:


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroCharacter(AHeroCharacter&&); \
	NO_API AHeroCharacter(const AHeroCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroCharacter)


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(AHeroCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(AHeroCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(AHeroCharacter, HealthComp); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(AHeroCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__Self() { return STRUCT_OFFSET(AHeroCharacter, Self); } \
	FORCEINLINE static uint32 __PPO__StarterWeaponClass() { return STRUCT_OFFSET(AHeroCharacter, StarterWeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponAttackSocketName() { return STRUCT_OFFSET(AHeroCharacter, WeaponAttackSocketName); } \
	FORCEINLINE static uint32 __PPO__bDied() { return STRUCT_OFFSET(AHeroCharacter, bDied); } \
	FORCEINLINE static uint32 __PPO__bIsSprinting() { return STRUCT_OFFSET(AHeroCharacter, bIsSprinting); } \
	FORCEINLINE static uint32 __PPO__bIsGodMode() { return STRUCT_OFFSET(AHeroCharacter, bIsGodMode); } \
	FORCEINLINE static uint32 __PPO__ZoomedFOV() { return STRUCT_OFFSET(AHeroCharacter, ZoomedFOV); } \
	FORCEINLINE static uint32 __PPO__ZoomInterpSpeed() { return STRUCT_OFFSET(AHeroCharacter, ZoomInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__DefaultFOV() { return STRUCT_OFFSET(AHeroCharacter, DefaultFOV); } \
	FORCEINLINE static uint32 __PPO__FootSteps() { return STRUCT_OFFSET(AHeroCharacter, FootSteps); } \
	FORCEINLINE static uint32 __PPO__GodLikeSound() { return STRUCT_OFFSET(AHeroCharacter, GodLikeSound); } \
	FORCEINLINE static uint32 __PPO__GodModeDown() { return STRUCT_OFFSET(AHeroCharacter, GodModeDown); }


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_15_PROLOG
#define BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_RPC_WRAPPERS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_INCLASS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_INCLASS_NO_PURE_DECLS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BA_MapTest_Source_SJLynch1_BA_Project_Public_Hero_HeroCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
