// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/Types.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypes() {}
// Cross Module References
	FETCH_API UEnum* Z_Construct_UEnum_Fetch_FFetchOptionsMethod();
	UPackage* Z_Construct_UPackage__Script_Fetch();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchJsonOptions();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonValue_NoRegister();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchHeader();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchOptions();
	FETCH_API UClass* Z_Construct_UClass_UTypes_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_UTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* FFetchOptionsMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Fetch_FFetchOptionsMethod, Z_Construct_UPackage__Script_Fetch(), TEXT("FFetchOptionsMethod"));
		}
		return Singleton;
	}
	template<> FETCH_API UEnum* StaticEnum<FFetchOptionsMethod>()
	{
		return FFetchOptionsMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FFetchOptionsMethod(FFetchOptionsMethod_StaticEnum, TEXT("/Script/Fetch"), TEXT("FFetchOptionsMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Fetch_FFetchOptionsMethod_Hash() { return 4121416923U; }
	UEnum* Z_Construct_UEnum_Fetch_FFetchOptionsMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Fetch();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FFetchOptionsMethod"), 0, Get_Z_Construct_UEnum_Fetch_FFetchOptionsMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GET", (int64)GET },
				{ "POST", (int64)POST },
				{ "PUT", (int64)PUT },
				{ "DELETE", (int64)DELETE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DELETE.Name", "DELETE" },
				{ "GET.Name", "GET" },
				{ "ModuleRelativePath", "Public/Types.h" },
				{ "POST.Name", "POST" },
				{ "PUT.Name", "PUT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Fetch,
				nullptr,
				"FFetchOptionsMethod",
				"FFetchOptionsMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFetchJsonOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FETCH_API uint32 Get_Z_Construct_UScriptStruct_FFetchJsonOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFetchJsonOptions, Z_Construct_UPackage__Script_Fetch(), TEXT("FetchJsonOptions"), sizeof(FFetchJsonOptions), Get_Z_Construct_UScriptStruct_FFetchJsonOptions_Hash());
	}
	return Singleton;
}
template<> FETCH_API UScriptStruct* StaticStruct<FFetchJsonOptions>()
{
	return FFetchJsonOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFetchJsonOptions(FFetchJsonOptions::StaticStruct, TEXT("/Script/Fetch"), TEXT("FetchJsonOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Fetch_StaticRegisterNativesFFetchJsonOptions
{
	FScriptStruct_Fetch_StaticRegisterNativesFFetchJsonOptions()
	{
		UScriptStruct::DeferCppStructOps<FFetchJsonOptions>(FName(TEXT("FetchJsonOptions")));
	}
} ScriptStruct_Fetch_StaticRegisterNativesFFetchJsonOptions;
	struct Z_Construct_UScriptStruct_FFetchJsonOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Method;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Headers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Headers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFetchJsonOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Fetch | JSONOptions" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFetchJsonOptions, Method), Z_Construct_UEnum_Fetch_FFetchOptionsMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Method_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Fetch | JSONOptions" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFetchJsonOptions, Body), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Body_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFetchHeader, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers_MetaData[] = {
		{ "Category", "Fetch | JSONOptions" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFetchJsonOptions, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
		nullptr,
		&NewStructOps,
		"FetchJsonOptions",
		sizeof(FFetchJsonOptions),
		alignof(FFetchJsonOptions),
		Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFetchJsonOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFetchJsonOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Fetch();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FetchJsonOptions"), sizeof(FFetchJsonOptions), Get_Z_Construct_UScriptStruct_FFetchJsonOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFetchJsonOptions_Hash() { return 2180525105U; }
class UScriptStruct* FFetchOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FETCH_API uint32 Get_Z_Construct_UScriptStruct_FFetchOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFetchOptions, Z_Construct_UPackage__Script_Fetch(), TEXT("FetchOptions"), sizeof(FFetchOptions), Get_Z_Construct_UScriptStruct_FFetchOptions_Hash());
	}
	return Singleton;
}
template<> FETCH_API UScriptStruct* StaticStruct<FFetchOptions>()
{
	return FFetchOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFetchOptions(FFetchOptions::StaticStruct, TEXT("/Script/Fetch"), TEXT("FetchOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Fetch_StaticRegisterNativesFFetchOptions
{
	FScriptStruct_Fetch_StaticRegisterNativesFFetchOptions()
	{
		UScriptStruct::DeferCppStructOps<FFetchOptions>(FName(TEXT("FetchOptions")));
	}
} ScriptStruct_Fetch_StaticRegisterNativesFFetchOptions;
	struct Z_Construct_UScriptStruct_FFetchOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Method;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Headers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Headers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFetchOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFetchOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Fetch | Options" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFetchOptions, Method), Z_Construct_UEnum_Fetch_FFetchOptionsMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Method_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Fetch | Options" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFetchOptions, Body), METADATA_PARAMS(Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Body_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFetchHeader, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers_MetaData[] = {
		{ "Category", "Fetch | Options" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFetchOptions, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFetchOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFetchOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
		nullptr,
		&NewStructOps,
		"FetchOptions",
		sizeof(FFetchOptions),
		alignof(FFetchOptions),
		Z_Construct_UScriptStruct_FFetchOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFetchOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFetchOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFetchOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Fetch();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FetchOptions"), sizeof(FFetchOptions), Get_Z_Construct_UScriptStruct_FFetchOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFetchOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFetchOptions_Hash() { return 738345251U; }
class UScriptStruct* FFetchHeader::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FETCH_API uint32 Get_Z_Construct_UScriptStruct_FFetchHeader_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFetchHeader, Z_Construct_UPackage__Script_Fetch(), TEXT("FetchHeader"), sizeof(FFetchHeader), Get_Z_Construct_UScriptStruct_FFetchHeader_Hash());
	}
	return Singleton;
}
template<> FETCH_API UScriptStruct* StaticStruct<FFetchHeader>()
{
	return FFetchHeader::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFetchHeader(FFetchHeader::StaticStruct, TEXT("/Script/Fetch"), TEXT("FetchHeader"), false, nullptr, nullptr);
static struct FScriptStruct_Fetch_StaticRegisterNativesFFetchHeader
{
	FScriptStruct_Fetch_StaticRegisterNativesFFetchHeader()
	{
		UScriptStruct::DeferCppStructOps<FFetchHeader>(FName(TEXT("FetchHeader")));
	}
} ScriptStruct_Fetch_StaticRegisterNativesFFetchHeader;
	struct Z_Construct_UScriptStruct_FFetchHeader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFetchHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFetchHeader>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Fetch | Header" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFetchHeader, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Fetch | Header" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFetchHeader, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFetchHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFetchHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
		nullptr,
		&NewStructOps,
		"FetchHeader",
		sizeof(FFetchHeader),
		alignof(FFetchHeader),
		Z_Construct_UScriptStruct_FFetchHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFetchHeader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFetchHeader()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFetchHeader_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Fetch();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FetchHeader"), sizeof(FFetchHeader), Get_Z_Construct_UScriptStruct_FFetchHeader_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFetchHeader_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFetchHeader_Hash() { return 1077176177U; }
	void UTypes::StaticRegisterNativesUTypes()
	{
	}
	UClass* Z_Construct_UClass_UTypes_NoRegister()
	{
		return UTypes::StaticClass();
	}
	struct Z_Construct_UClass_UTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Types.h" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTypes_Statics::ClassParams = {
		&UTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTypes, 3910354738);
	template<> FETCH_API UClass* StaticClass<UTypes>()
	{
		return UTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTypes(Z_Construct_UClass_UTypes, &UTypes::StaticClass, TEXT("/Script/Fetch"), TEXT("UTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
