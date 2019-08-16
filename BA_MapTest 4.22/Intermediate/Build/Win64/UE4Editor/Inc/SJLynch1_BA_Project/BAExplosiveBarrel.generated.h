// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef SJLYNCH1_BA_PROJECT_BAExplosiveBarrel_generated_h
#error "BAExplosiveBarrel.generated.h already included, missing '#pragma once' in BAExplosiveBarrel.h"
#endif
#define SJLYNCH1_BA_PROJECT_BAExplosiveBarrel_generated_h

#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABAExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ABAExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ABAExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(ABAExplosiveBarrel)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABAExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ABAExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ABAExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(ABAExplosiveBarrel)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABAExplosiveBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABAExplosiveBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABAExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABAExplosiveBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABAExplosiveBarrel(ABAExplosiveBarrel&&); \
	NO_API ABAExplosiveBarrel(const ABAExplosiveBarrel&); \
public:


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABAExplosiveBarrel(ABAExplosiveBarrel&&); \
	NO_API ABAExplosiveBarrel(const ABAExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABAExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABAExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABAExplosiveBarrel)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ABAExplosiveBarrel, HealthComp); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ABAExplosiveBarrel, MeshComp); } \
	FORCEINLINE static uint32 __PPO__RadialForceComp() { return STRUCT_OFFSET(ABAExplosiveBarrel, RadialForceComp); } \
	FORCEINLINE static uint32 __PPO__bExploded() { return STRUCT_OFFSET(ABAExplosiveBarrel, bExploded); } \
	FORCEINLINE static uint32 __PPO__ExplosiveDamage() { return STRUCT_OFFSET(ABAExplosiveBarrel, ExplosiveDamage); } \
	FORCEINLINE static uint32 __PPO__ExplosionImpulse() { return STRUCT_OFFSET(ABAExplosiveBarrel, ExplosionImpulse); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ABAExplosiveBarrel, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplodedMaterial() { return STRUCT_OFFSET(ABAExplosiveBarrel, ExplodedMaterial); } \
	FORCEINLINE static uint32 __PPO__ExplodeSound() { return STRUCT_OFFSET(ABAExplosiveBarrel, ExplodeSound); }


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_16_PROLOG
#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_RPC_WRAPPERS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_INCLASS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_INCLASS_NO_PURE_DECLS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SJLYNCH1_BA_PROJECT_API UClass* StaticClass<class ABAExplosiveBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_ExplosiveBarrel_BAExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
