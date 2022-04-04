// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/FetchAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchAPI() {}
// Cross Module References
	FETCH_API UClass* Z_Construct_UClass_UFetchAPI_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_UFetchAPI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Fetch();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchOptions();
	FETCH_API UClass* Z_Construct_UClass_UFetchRequest_NoRegister();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchJsonOptions();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchHeader();
// End Cross Module References
	DEFINE_FUNCTION(UFetchAPI::execMakeOAuthHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFetchHeader*)Z_Param__Result=UFetchAPI::MakeOAuthHeader(Z_Param_Token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchAPI::execMakeBasicAuthHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFetchHeader*)Z_Param__Result=UFetchAPI::MakeBasicAuthHeader(Z_Param_Username,Z_Param_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchAPI::execFetchJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_STRUCT(FFetchJsonOptions,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchRequest**)Z_Param__Result=UFetchAPI::FetchJson(Z_Param_Url,Z_Param_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchAPI::execFetch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_STRUCT(FFetchOptions,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchRequest**)Z_Param__Result=UFetchAPI::Fetch(Z_Param_Url,Z_Param_Options);
		P_NATIVE_END;
	}
	void UFetchAPI::StaticRegisterNativesUFetchAPI()
	{
		UClass* Class = UFetchAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fetch", &UFetchAPI::execFetch },
			{ "FetchJson", &UFetchAPI::execFetchJson },
			{ "MakeBasicAuthHeader", &UFetchAPI::execMakeBasicAuthHeader },
			{ "MakeOAuthHeader", &UFetchAPI::execMakeOAuthHeader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchAPI_Fetch_Statics
	{
		struct FetchAPI_eventFetch_Parms
		{
			FString Url;
			FFetchOptions Options;
			UFetchRequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchAPI_eventFetch_Parms, Url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchAPI_eventFetch_Parms, Options), Z_Construct_UScriptStruct_FFetchOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchAPI_eventFetch_Parms, ReturnValue), Z_Construct_UClass_UFetchRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchAPI_Fetch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchAPI_Fetch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch" },
		{ "ModuleRelativePath", "Public/FetchAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchAPI_Fetch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchAPI, nullptr, "Fetch", nullptr, nullptr, sizeof(FetchAPI_eventFetch_Parms), Z_Construct_UFunction_UFetchAPI_Fetch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_Fetch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchAPI_Fetch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_Fetch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchAPI_Fetch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchAPI_Fetch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchAPI_FetchJson_Statics
	{
		struct FetchAPI_eventFetchJson_Parms
		{
			FString Url;
			FFetchJsonOptions Options;
			UFetchRequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchAPI_eventFetchJson_Parms, Url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchAPI_eventFetchJson_Parms, Options), Z_Construct_UScriptStruct_FFetchJsonOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchAPI_eventFetchJson_Parms, ReturnValue), Z_Construct_UClass_UFetchRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch" },
		{ "ModuleRelativePath", "Public/FetchAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchAPI, nullptr, "FetchJson", nullptr, nullptr, sizeof(FetchAPI_eventFetchJson_Parms), Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchAPI_FetchJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics
	{
		struct FetchAPI_eventMakeBasicAuthHeader_Parms
		{
			FString Username;
			FString Password;
			FFetchHeader ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchAPI_eventMakeBasicAuthHeader_Parms, Username), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchAPI_eventMakeBasicAuthHeader_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchAPI_eventMakeBasicAuthHeader_Parms, ReturnValue), Z_Construct_UScriptStruct_FFetchHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Headers" },
		{ "ModuleRelativePath", "Public/FetchAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchAPI, nullptr, "MakeBasicAuthHeader", nullptr, nullptr, sizeof(FetchAPI_eventMakeBasicAuthHeader_Parms), Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics
	{
		struct FetchAPI_eventMakeOAuthHeader_Parms
		{
			FString Token;
			FFetchHeader ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchAPI_eventMakeOAuthHeader_Parms, Token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchAPI_eventMakeOAuthHeader_Parms, ReturnValue), Z_Construct_UScriptStruct_FFetchHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Headers" },
		{ "ModuleRelativePath", "Public/FetchAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchAPI, nullptr, "MakeOAuthHeader", nullptr, nullptr, sizeof(FetchAPI_eventMakeOAuthHeader_Parms), Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFetchAPI_NoRegister()
	{
		return UFetchAPI::StaticClass();
	}
	struct Z_Construct_UClass_UFetchAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchAPI_Fetch, "Fetch" }, // 888544956
		{ &Z_Construct_UFunction_UFetchAPI_FetchJson, "FetchJson" }, // 1888569293
		{ &Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader, "MakeBasicAuthHeader" }, // 2814596971
		{ &Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader, "MakeOAuthHeader" }, // 803358237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )\n" },
		{ "IncludePath", "FetchAPI.h" },
		{ "ModuleRelativePath", "Public/FetchAPI.h" },
		{ "ToolTip", "UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFetchAPI_Statics::ClassParams = {
		&UFetchAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFetchAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFetchAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFetchAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFetchAPI, 1344426879);
	template<> FETCH_API UClass* StaticClass<UFetchAPI>()
	{
		return UFetchAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFetchAPI(Z_Construct_UClass_UFetchAPI, &UFetchAPI::StaticClass, TEXT("/Script/Fetch"), TEXT("UFetchAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
