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
#ifdef SJLYNCH1_BA_PROJECT_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define SJLYNCH1_BA_PROJECT_HealthComponent_generated_h

#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_12_DELEGATE \
struct _Script_SJLynch1_BA_Project_eventOnArmourChangedSignature_Parms \
{ \
	UHealthComponent* HealthComp; \
	float Armour; \
	float ArmourDelta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
	float Health; \
}; \
static inline void FOnArmourChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnArmourChangedSignature, UHealthComponent* HealthComp, float Armour, float ArmourDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser, float Health) \
{ \
	_Script_SJLynch1_BA_Project_eventOnArmourChangedSignature_Parms Parms; \
	Parms.HealthComp=HealthComp; \
	Parms.Armour=Armour; \
	Parms.ArmourDelta=ArmourDelta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	Parms.Health=Health; \
	OnArmourChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_10_DELEGATE \
struct _Script_SJLynch1_BA_Project_eventOnHealthChangedSignature_Parms \
{ \
	UHealthComponent* HealthComp; \
	float Health; \
	float HealthDelta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, UHealthComponent* HealthComp, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_SJLynch1_BA_Project_eventOnHealthChangedSignature_Parms Parms; \
	Parms.HealthComp=HealthComp; \
	Parms.Health=Health; \
	Parms.HealthDelta=HealthDelta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_HealAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_HealAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(UHealthComponent, Health); } \
	FORCEINLINE static uint32 __PPO__Armour() { return STRUCT_OFFSET(UHealthComponent, Armour); } \
	FORCEINLINE static uint32 __PPO__DefaultArmour() { return STRUCT_OFFSET(UHealthComponent, DefaultArmour); } \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(UHealthComponent, DefaultHealth); }


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_14_PROLOG
#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_RPC_WRAPPERS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_INCLASS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_INCLASS_NO_PURE_DECLS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SJLYNCH1_BA_PROJECT_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_Components_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
