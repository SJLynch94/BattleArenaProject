// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SJLYNCH1_BA_PROJECT_HeroWeapon_generated_h
#error "HeroWeapon.generated.h already included, missing '#pragma once' in HeroWeapon.h"
#endif
#define SJLYNCH1_BA_PROJECT_HeroWeapon_generated_h

#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroWeapon(); \
	friend struct Z_Construct_UClass_AHeroWeapon_Statics; \
public: \
	DECLARE_CLASS(AHeroWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(AHeroWeapon)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAHeroWeapon(); \
	friend struct Z_Construct_UClass_AHeroWeapon_Statics; \
public: \
	DECLARE_CLASS(AHeroWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(AHeroWeapon)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroWeapon(AHeroWeapon&&); \
	NO_API AHeroWeapon(const AHeroWeapon&); \
public:


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroWeapon(AHeroWeapon&&); \
	NO_API AHeroWeapon(const AHeroWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroWeapon)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AHeroWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AHeroWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(AHeroWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(AHeroWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__DefaultImpactEffect() { return STRUCT_OFFSET(AHeroWeapon, DefaultImpactEffect); } \
	FORCEINLINE static uint32 __PPO__FleshImpactEffect() { return STRUCT_OFFSET(AHeroWeapon, FleshImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TracerEffect() { return STRUCT_OFFSET(AHeroWeapon, TracerEffect); } \
	FORCEINLINE static uint32 __PPO__TracerTargetName() { return STRUCT_OFFSET(AHeroWeapon, TracerTargetName); } \
	FORCEINLINE static uint32 __PPO__baseDamage() { return STRUCT_OFFSET(AHeroWeapon, baseDamage); } \
	FORCEINLINE static uint32 __PPO__damageModifier() { return STRUCT_OFFSET(AHeroWeapon, damageModifier); } \
	FORCEINLINE static uint32 __PPO__criticalChance() { return STRUCT_OFFSET(AHeroWeapon, criticalChance); } \
	FORCEINLINE static uint32 __PPO__damageModifierValue() { return STRUCT_OFFSET(AHeroWeapon, damageModifierValue); } \
	FORCEINLINE static uint32 __PPO__BulletSpread() { return STRUCT_OFFSET(AHeroWeapon, BulletSpread); } \
	FORCEINLINE static uint32 __PPO__RoundsPerMinute() { return STRUCT_OFFSET(AHeroWeapon, RoundsPerMinute); } \
	FORCEINLINE static uint32 __PPO__FireCamShake() { return STRUCT_OFFSET(AHeroWeapon, FireCamShake); } \
	FORCEINLINE static uint32 __PPO__Ammo() { return STRUCT_OFFSET(AHeroWeapon, Ammo); } \
	FORCEINLINE static uint32 __PPO__ClipSize() { return STRUCT_OFFSET(AHeroWeapon, ClipSize); } \
	FORCEINLINE static uint32 __PPO__MaxAmmo() { return STRUCT_OFFSET(AHeroWeapon, MaxAmmo); } \
	FORCEINLINE static uint32 __PPO__AmmoDifference() { return STRUCT_OFFSET(AHeroWeapon, AmmoDifference); } \
	FORCEINLINE static uint32 __PPO__GunSound() { return STRUCT_OFFSET(AHeroWeapon, GunSound); }


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_15_PROLOG
#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_RPC_WRAPPERS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_INCLASS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_INCLASS_NO_PURE_DECLS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SJLYNCH1_BA_PROJECT_API UClass* StaticClass<class AHeroWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Weapon_HeroWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
