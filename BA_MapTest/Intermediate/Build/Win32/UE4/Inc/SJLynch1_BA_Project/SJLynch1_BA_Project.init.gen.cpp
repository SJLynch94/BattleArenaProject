// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJLynch1_BA_Project_init() {}
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnHealthChangedSignature__DelegateSignature();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnArmourChangedSignature__DelegateSignature();
	SJLYNCH1_BA_PROJECT_API UFunction* Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SJLynch1_BA_Project()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnHealthChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnArmourChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SJLynch1_BA_Project_OnActorKilled__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SJLynch1_BA_Project",
				PKG_CompiledIn | 0x00000000,
				0xB9998ABB,
				0x7B723555,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
