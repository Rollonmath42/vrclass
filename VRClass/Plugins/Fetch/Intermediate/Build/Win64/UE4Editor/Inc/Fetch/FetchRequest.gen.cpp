// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/FetchRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchRequest() {}
// Cross Module References
	FETCH_API UClass* Z_Construct_UClass_UFetchRequest_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_UFetchRequest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Fetch();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UFetchRequest::execOnJson)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchRequest**)Z_Param__Result=P_THIS->OnJson(FFetchJsonResponseDelegate(Z_Param_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchRequest::execOnError)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchRequest**)Z_Param__Result=P_THIS->OnError(FFetchErrorDelegate(Z_Param_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchRequest::execOnText)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchRequest**)Z_Param__Result=P_THIS->OnText(FFetchTextResponseDelegate(Z_Param_Event));
		P_NATIVE_END;
	}
	void UFetchRequest::StaticRegisterNativesUFetchRequest()
	{
		UClass* Class = UFetchRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnError", &UFetchRequest::execOnError },
			{ "OnJson", &UFetchRequest::execOnJson },
			{ "OnText", &UFetchRequest::execOnText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchRequest_OnError_Statics
	{
		struct FetchRequest_eventOnError_Parms
		{
			FScriptDelegate Event;
			UFetchRequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFetchRequest_OnError_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchRequest_eventOnError_Parms, Event), Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchRequest_OnError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchRequest_eventOnError_Parms, ReturnValue), Z_Construct_UClass_UFetchRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchRequest_OnError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnError_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchRequest_OnError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Request" },
		{ "ModuleRelativePath", "Public/FetchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchRequest_OnError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchRequest, nullptr, "OnError", nullptr, nullptr, sizeof(FetchRequest_eventOnError_Parms), Z_Construct_UFunction_UFetchRequest_OnError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchRequest_OnError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchRequest_OnError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchRequest_OnError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchRequest_OnJson_Statics
	{
		struct FetchRequest_eventOnJson_Parms
		{
			FScriptDelegate Event;
			UFetchRequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFetchRequest_OnJson_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchRequest_eventOnJson_Parms, Event), Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchRequest_OnJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchRequest_eventOnJson_Parms, ReturnValue), Z_Construct_UClass_UFetchRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchRequest_OnJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnJson_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchRequest_OnJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Request" },
		{ "ModuleRelativePath", "Public/FetchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchRequest_OnJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchRequest, nullptr, "OnJson", nullptr, nullptr, sizeof(FetchRequest_eventOnJson_Parms), Z_Construct_UFunction_UFetchRequest_OnJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchRequest_OnJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchRequest_OnJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchRequest_OnJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchRequest_OnText_Statics
	{
		struct FetchRequest_eventOnText_Parms
		{
			FScriptDelegate Event;
			UFetchRequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFetchRequest_OnText_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchRequest_eventOnText_Parms, Event), Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchRequest_OnText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchRequest_eventOnText_Parms, ReturnValue), Z_Construct_UClass_UFetchRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchRequest_OnText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnText_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchRequest_OnText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Request" },
		{ "ModuleRelativePath", "Public/FetchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchRequest_OnText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchRequest, nullptr, "OnText", nullptr, nullptr, sizeof(FetchRequest_eventOnText_Parms), Z_Construct_UFunction_UFetchRequest_OnText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchRequest_OnText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchRequest_OnText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchRequest_OnText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFetchRequest_NoRegister()
	{
		return UFetchRequest::StaticClass();
	}
	struct Z_Construct_UClass_UFetchRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchRequest_OnError, "OnError" }, // 3405674024
		{ &Z_Construct_UFunction_UFetchRequest_OnJson, "OnJson" }, // 2626424308
		{ &Z_Construct_UFunction_UFetchRequest_OnText, "OnText" }, // 1129332293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "FetchRequest.h" },
		{ "ModuleRelativePath", "Public/FetchRequest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFetchRequest_Statics::ClassParams = {
		&UFetchRequest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFetchRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFetchRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFetchRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFetchRequest, 3980326196);
	template<> FETCH_API UClass* StaticClass<UFetchRequest>()
	{
		return UFetchRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFetchRequest(Z_Construct_UClass_UFetchRequest, &UFetchRequest::StaticClass, TEXT("/Script/Fetch"), TEXT("UFetchRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
