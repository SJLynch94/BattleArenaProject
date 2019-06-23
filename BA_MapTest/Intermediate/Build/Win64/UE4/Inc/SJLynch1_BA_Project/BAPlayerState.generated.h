// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SJLYNCH1_BA_PROJECT_BAPlayerState_generated_h
#error "BAPlayerState.generated.h already included, missing '#pragma once' in BAPlayerState.h"
#endif
#define SJLYNCH1_BA_PROJECT_BAPlayerState_generated_h

#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CheckScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScoreDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddScore(Z_Param_ScoreDelta); \
		P_NATIVE_END; \
	}


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CheckScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScoreDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddScore(Z_Param_ScoreDelta); \
		P_NATIVE_END; \
	}


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABAPlayerState(); \
	friend SJLYNCH1_BA_PROJECT_API class UClass* Z_Construct_UClass_ABAPlayerState(); \
public: \
	DECLARE_CLASS(ABAPlayerState, APlayerState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(ABAPlayerState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABAPlayerState(); \
	friend SJLYNCH1_BA_PROJECT_API class UClass* Z_Construct_UClass_ABAPlayerState(); \
public: \
	DECLARE_CLASS(ABAPlayerState, APlayerState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SJLynch1_BA_Project"), NO_API) \
	DECLARE_SERIALIZER(ABAPlayerState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABAPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABAPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABAPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABAPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABAPlayerState(ABAPlayerState&&); \
	NO_API ABAPlayerState(const ABAPlayerState&); \
public:


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABAPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABAPlayerState(ABAPlayerState&&); \
	NO_API ABAPlayerState(const ABAPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABAPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABAPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABAPlayerState)


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_PRIVATE_PROPERTY_OFFSET
#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_12_PROLOG
#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_RPC_WRAPPERS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_INCLASS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BA_MapTest_Source_SJLynch1_BA_Project_Public_PlayerState_BAPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
