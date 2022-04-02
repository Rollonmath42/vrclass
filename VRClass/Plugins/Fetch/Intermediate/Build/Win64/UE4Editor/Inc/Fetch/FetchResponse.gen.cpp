// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/FetchResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchResponse() {}
// Cross Module References
	FETCH_API UClass* Z_Construct_UClass_UFetchResponse_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_UFetchResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Fetch();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchHeader();
// End Cross Module References
	DEFINE_FUNCTION(UFetchResponse::execGetHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHeader(Z_Param_Key);
		P_NATIVE_END;
	}
	void UFetchResponse::StaticRegisterNativesUFetchResponse()
	{
		UClass* Class = UFetchResponse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeader", &UFetchResponse::execGetHeader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchResponse_GetHeader_Statics
	{
		struct FetchResponse_eventGetHeader_Parms
		{
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchResponse_eventGetHeader_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchResponse_eventGetHeader_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Response" },
		{ "ModuleRelativePath", "Public/FetchResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchResponse, nullptr, "GetHeader", nullptr, nullptr, sizeof(FetchResponse_eventGetHeader_Parms), Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchResponse_GetHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFetchResponse_NoRegister()
	{
		return UFetchResponse::StaticClass();
	}
	struct Z_Construct_UClass_UFetchResponse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResponseText;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Headers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Headers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchResponse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchResponse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchResponse_GetHeader, "GetHeader" }, // 777428206
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchResponse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "FetchResponse.h" },
		{ "ModuleRelativePath", "Public/FetchResponse.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchResponse_Statics::NewProp_StatusCode_MetaData[] = {
		{ "Category", "Fetch | Response" },
		{ "ModuleRelativePath", "Public/FetchResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFetchResponse_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFetchResponse, StatusCode), METADATA_PARAMS(Z_Construct_UClass_UFetchResponse_Statics::NewProp_StatusCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::NewProp_StatusCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchResponse_Statics::NewProp_ResponseText_MetaData[] = {
		{ "Category", "Fetch | Response" },
		{ "ModuleRelativePath", "Public/FetchResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFetchResponse_Statics::NewProp_ResponseText = { "ResponseText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFetchResponse, ResponseText), METADATA_PARAMS(Z_Construct_UClass_UFetchResponse_Statics::NewProp_ResponseText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::NewProp_ResponseText_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFetchHeader, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers_MetaData[] = {
		{ "Category", "Fetch | Response" },
		{ "ModuleRelativePath", "Public/FetchResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFetchResponse, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFetchResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchResponse_Statics::NewProp_StatusCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchResponse_Statics::NewProp_ResponseText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchResponse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchResponse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFetchResponse_Statics::ClassParams = {
		&UFetchResponse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFetchResponse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFetchResponse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFetchResponse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFetchResponse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFetchResponse, 3351016261);
	template<> FETCH_API UClass* StaticClass<UFetchResponse>()
	{
		return UFetchResponse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFetchResponse(Z_Construct_UClass_UFetchResponse, &UFetchResponse::StaticClass, TEXT("/Script/Fetch"), TEXT("UFetchResponse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchResponse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
