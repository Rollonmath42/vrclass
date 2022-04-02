// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetch_init() {}
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Fetch()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Fetch",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5169AE35,
				0x3FD51E21,
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
