// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class APlayerController;
#ifdef SJLYNCH1_BA_PROJECT_BAGameMode_generated_h
#error "BAGameMode.generated.h already included, missing '#pragma once' in BAGameMode.h"
#endif
#define SJLYNCH1_BA_PROJECT_BAGameMode_generated_h

#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_11_DELEGATE \
struct _Script_SJLynch1_BA_Project_eventOnActorKilled_Parms \
{ \
	AActor* VictimActor; \
	AActor* KillerActor; \
	AController* KillerController; \
}; \
static inline void FOnActorKilled_DelegateWrapper(const FMulticastScriptDelegate& OnActorKilled, AActor* VictimActor, AActor* KillerActor, AController* KillerController) \
{ \
	_Script_SJLynch1_BA_Project_eventOnActorKilled_Parms Parms; \
	Parms.VictimActor=VictimActor; \
	Parms.KillerActor=KillerActor; \
	Parms.KillerController=KillerController; \
	OnActorKilled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRespawnPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RespawnPlayer(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameOver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GameOver(); \
		P_NATIVE_END; \
	}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRespawnPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RespawnPlayer(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameOver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GameOver(); \
		P_NATIVE_END; \
	}


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_EVENT_PARMS
#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_CALLBACK_WRAPPERS
#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABAGameMode(); \
	friend struct Z_Construct_UClass_ABAGameMode_Statics; \
public: \
	DECLARE_CLASS(ABAGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(ABAGameMode)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABAGameMode(); \
	friend struct Z_Construct_UClass_ABAGameMode_Statics; \
public: \
	DECLARE_CLASS(ABAGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(ABAGameMode)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABAGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABAGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABAGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABAGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABAGameMode(ABAGameMode&&); \
	NO_API ABAGameMode(const ABAGameMode&); \
public:


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABAGameMode(ABAGameMode&&); \
	NO_API ABAGameMode(const ABAGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABAGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABAGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABAGameMode)


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxRoundLimit() { return STRUCT_OFFSET(ABAGameMode, MaxRoundLimit); } \
	FORCEINLINE static uint32 __PPO__CurrentRound() { return STRUCT_OFFSET(ABAGameMode, CurrentRound); } \
	FORCEINLINE static uint32 __PPO__RespawnDelayTimer() { return STRUCT_OFFSET(ABAGameMode, RespawnDelayTimer); }


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_16_PROLOG \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_EVENT_PARMS


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_RPC_WRAPPERS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_CALLBACK_WRAPPERS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_INCLASS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_CALLBACK_WRAPPERS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_INCLASS_NO_PURE_DECLS \
	BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SJLYNCH1_BA_PROJECT_API UClass* StaticClass<class ABAGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BA_MapTest_4_22_Source_SJLynch1_BA_Project_Public_GameMode_BAGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
