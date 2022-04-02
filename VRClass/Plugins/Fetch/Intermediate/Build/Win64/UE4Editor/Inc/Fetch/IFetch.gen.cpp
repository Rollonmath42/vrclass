// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/IFetch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFetch() {}
// Cross Module References
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Fetch();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonValue_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_UFetchResponse_NoRegister();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature();
	FETCH_API UClass* Z_Construct_UClass_UIFetch_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_UIFetch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_Fetch_eventFetchJsonResponseDelegate_Parms
		{
			USimpleJsonValue* JsonValue;
			UFetchResponse* Response;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Response;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchJsonResponseDelegate_Parms, JsonValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchJsonResponseDelegate_Parms, Response), Z_Construct_UClass_UFetchResponse_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::NewProp_JsonValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFetch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Fetch, nullptr, "FetchJsonResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Fetch_eventFetchJsonResponseDelegate_Parms), Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_Fetch_eventFetchTextResponseDelegate_Parms
		{
			FString TextContent;
			UFetchResponse* Response;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextContent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Response;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::NewProp_TextContent = { "TextContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchTextResponseDelegate_Parms, TextContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchTextResponseDelegate_Parms, Response), Z_Construct_UClass_UFetchResponse_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::NewProp_TextContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFetch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Fetch, nullptr, "FetchTextResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Fetch_eventFetchTextResponseDelegate_Parms), Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_Fetch_eventFetchErrorDelegate_Parms
		{
			FString ErrorMessage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFetch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Fetch, nullptr, "FetchErrorDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Fetch_eventFetchErrorDelegate_Parms), Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_Fetch_eventFetchResponseDelegate_Parms
		{
			int32 StatusCode;
			FString Content;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusCode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchResponseDelegate_Parms, StatusCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchResponseDelegate_Parms, Content), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::NewProp_StatusCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFetch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Fetch, nullptr, "FetchResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Fetch_eventFetchResponseDelegate_Parms), Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UIFetch::StaticRegisterNativesUIFetch()
	{
	}
	UClass* Z_Construct_UClass_UIFetch_NoRegister()
	{
		return UIFetch::StaticClass();
	}
	struct Z_Construct_UClass_UIFetch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIFetch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFetch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IFetch.h" },
		{ "ModuleRelativePath", "Public/IFetch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIFetch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIFetch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIFetch_Statics::ClassParams = {
		&UIFetch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIFetch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIFetch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIFetch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIFetch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIFetch, 4272994812);
	template<> FETCH_API UClass* StaticClass<UIFetch>()
	{
		return UIFetch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIFetch(Z_Construct_UClass_UIFetch, &UIFetch::StaticClass, TEXT("/Script/Fetch"), TEXT("UIFetch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIFetch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
