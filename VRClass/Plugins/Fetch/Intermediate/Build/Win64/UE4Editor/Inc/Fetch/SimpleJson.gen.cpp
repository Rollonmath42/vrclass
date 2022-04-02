// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/SimpleJson.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleJson() {}
// Cross Module References
	FETCH_API UClass* Z_Construct_UClass_USimpleJson_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_USimpleJson();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Fetch();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonValue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USimpleJson::execMakeJsonNullSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonNullSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonNull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonNull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonStringSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonStringSync(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonBoolSync)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonBoolSync(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonBool)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonBool(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonNumberSync)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonNumberSync(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonNumber)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonNumber(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonSync(Z_Param_InputJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJson(Z_Param_InputJson);
		P_NATIVE_END;
	}
	void USimpleJson::StaticRegisterNativesUSimpleJson()
	{
		UClass* Class = USimpleJson::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeJson", &USimpleJson::execMakeJson },
			{ "MakeJsonBool", &USimpleJson::execMakeJsonBool },
			{ "MakeJsonBoolSync", &USimpleJson::execMakeJsonBoolSync },
			{ "MakeJsonNull", &USimpleJson::execMakeJsonNull },
			{ "MakeJsonNullSync", &USimpleJson::execMakeJsonNullSync },
			{ "MakeJsonNumber", &USimpleJson::execMakeJsonNumber },
			{ "MakeJsonNumberSync", &USimpleJson::execMakeJsonNumberSync },
			{ "MakeJsonString", &USimpleJson::execMakeJsonString },
			{ "MakeJsonStringSync", &USimpleJson::execMakeJsonStringSync },
			{ "MakeJsonSync", &USimpleJson::execMakeJsonSync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJson_Statics
	{
		struct SimpleJson_eventMakeJson_Parms
		{
			FString InputJson;
			USimpleJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJson_MakeJson_Statics::NewProp_InputJson = { "InputJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJson_Parms, InputJson), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJson_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJson_Statics::NewProp_InputJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJson", nullptr, nullptr, sizeof(SimpleJson_eventMakeJson_Parms), Z_Construct_UFunction_USimpleJson_MakeJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJson_MakeJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics
	{
		struct SimpleJson_eventMakeJsonBool_Parms
		{
			bool Value;
			USimpleJsonValue* ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SimpleJson_eventMakeJsonBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJson_eventMakeJsonBool_Parms), &Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonBool_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonBool", nullptr, nullptr, sizeof(SimpleJson_eventMakeJsonBool_Parms), Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics
	{
		struct SimpleJson_eventMakeJsonBoolSync_Parms
		{
			bool Value;
			USimpleJsonValue* ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SimpleJson_eventMakeJsonBoolSync_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJson_eventMakeJsonBoolSync_Parms), &Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonBoolSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonBoolSync", nullptr, nullptr, sizeof(SimpleJson_eventMakeJsonBoolSync_Parms), Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics
	{
		struct SimpleJson_eventMakeJsonNull_Parms
		{
			USimpleJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNull_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonNull", nullptr, nullptr, sizeof(SimpleJson_eventMakeJsonNull_Parms), Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics
	{
		struct SimpleJson_eventMakeJsonNullSync_Parms
		{
			USimpleJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNullSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonNullSync", nullptr, nullptr, sizeof(SimpleJson_eventMakeJsonNullSync_Parms), Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonNullSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics
	{
		struct SimpleJson_eventMakeJsonNumber_Parms
		{
			float Number;
			USimpleJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNumber_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNumber_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::NewProp_Number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonNumber", nullptr, nullptr, sizeof(SimpleJson_eventMakeJsonNumber_Parms), Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics
	{
		struct SimpleJson_eventMakeJsonNumberSync_Parms
		{
			float Number;
			USimpleJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNumberSync_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNumberSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::NewProp_Number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonNumberSync", nullptr, nullptr, sizeof(SimpleJson_eventMakeJsonNumberSync_Parms), Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics
	{
		struct SimpleJson_eventMakeJsonString_Parms
		{
			FString Value;
			USimpleJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonString_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonString", nullptr, nullptr, sizeof(SimpleJson_eventMakeJsonString_Parms), Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics
	{
		struct SimpleJson_eventMakeJsonStringSync_Parms
		{
			FString Value;
			USimpleJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonStringSync_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonStringSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonStringSync", nullptr, nullptr, sizeof(SimpleJson_eventMakeJsonStringSync_Parms), Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonStringSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics
	{
		struct SimpleJson_eventMakeJsonSync_Parms
		{
			FString InputJson;
			USimpleJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::NewProp_InputJson = { "InputJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonSync_Parms, InputJson), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::NewProp_InputJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonSync", nullptr, nullptr, sizeof(SimpleJson_eventMakeJsonSync_Parms), Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimpleJson_NoRegister()
	{
		return USimpleJson::StaticClass();
	}
	struct Z_Construct_UClass_USimpleJson_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleJson_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleJson_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleJson_MakeJson, "MakeJson" }, // 2163848822
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonBool, "MakeJsonBool" }, // 4046260988
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync, "MakeJsonBoolSync" }, // 1715534422
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonNull, "MakeJsonNull" }, // 4034835334
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonNullSync, "MakeJsonNullSync" }, // 1209092432
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonNumber, "MakeJsonNumber" }, // 548966049
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync, "MakeJsonNumberSync" }, // 4092389984
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonString, "MakeJsonString" }, // 2114115837
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonStringSync, "MakeJsonStringSync" }, // 1513650983
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonSync, "MakeJsonSync" }, // 1322102890
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleJson_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SimpleJson.h" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleJson_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleJson>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleJson_Statics::ClassParams = {
		&USimpleJson::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleJson_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleJson_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleJson()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleJson_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleJson, 2052041311);
	template<> FETCH_API UClass* StaticClass<USimpleJson>()
	{
		return USimpleJson::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleJson(Z_Construct_UClass_USimpleJson, &USimpleJson::StaticClass, TEXT("/Script/Fetch"), TEXT("USimpleJson"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleJson);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
