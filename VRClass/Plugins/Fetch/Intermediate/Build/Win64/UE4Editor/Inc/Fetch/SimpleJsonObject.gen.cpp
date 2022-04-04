// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/SimpleJsonObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleJsonObject() {}
// Cross Module References
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonObject_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Fetch();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonValue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USimpleJsonObject::execIsValidObjectSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidObjectSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsValidObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execAsValueSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=P_THIS->AsValueSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execAsValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=P_THIS->AsValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execStringifySync)
	{
		P_GET_UBOOL(Z_Param_pretty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->StringifySync(Z_Param_pretty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execStringify)
	{
		P_GET_UBOOL(Z_Param_pretty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Stringify(Z_Param_pretty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetArraySync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_TARRAY(USimpleJsonValue*,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetArraySync(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_TARRAY(USimpleJsonValue*,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetArray(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetObjectSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_OBJECT(USimpleJsonObject,Z_Param_JsonObjet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetObjectSync(Z_Param_Field,Z_Param_JsonObjet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_OBJECT(USimpleJsonObject,Z_Param_JsonObjet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetObject(Z_Param_Field,Z_Param_JsonObjet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetBoolSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetBoolSync(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetBool(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetStringSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetStringSync(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetString(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetNumberSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetNumberSync(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetNumber)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetNumber(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execHasKeySync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasKeySync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execHasKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasKey(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsEmptySync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmptySync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsEmpty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsNoneSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNoneSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsNone)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNone(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsNullSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNullSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsNull)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNull(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetArraySync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USimpleJsonValue*>*)Z_Param__Result=P_THIS->GetArraySync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USimpleJsonValue*>*)Z_Param__Result=P_THIS->GetArray(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetBoolSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetStringSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetNumberSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNumberSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetNumber)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNumber(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetObjectSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->GetObjectSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->GetObject(Z_Param_Field);
		P_NATIVE_END;
	}
	void USimpleJsonObject::StaticRegisterNativesUSimpleJsonObject()
	{
		UClass* Class = USimpleJsonObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsValue", &USimpleJsonObject::execAsValue },
			{ "AsValueSync", &USimpleJsonObject::execAsValueSync },
			{ "GetArray", &USimpleJsonObject::execGetArray },
			{ "GetArraySync", &USimpleJsonObject::execGetArraySync },
			{ "GetBool", &USimpleJsonObject::execGetBool },
			{ "GetBoolSync", &USimpleJsonObject::execGetBoolSync },
			{ "GetNumber", &USimpleJsonObject::execGetNumber },
			{ "GetNumberSync", &USimpleJsonObject::execGetNumberSync },
			{ "GetObject", &USimpleJsonObject::execGetObject },
			{ "GetObjectSync", &USimpleJsonObject::execGetObjectSync },
			{ "GetString", &USimpleJsonObject::execGetString },
			{ "GetStringSync", &USimpleJsonObject::execGetStringSync },
			{ "HasKey", &USimpleJsonObject::execHasKey },
			{ "HasKeySync", &USimpleJsonObject::execHasKeySync },
			{ "IsEmpty", &USimpleJsonObject::execIsEmpty },
			{ "IsEmptySync", &USimpleJsonObject::execIsEmptySync },
			{ "IsNone", &USimpleJsonObject::execIsNone },
			{ "IsNoneSync", &USimpleJsonObject::execIsNoneSync },
			{ "IsNull", &USimpleJsonObject::execIsNull },
			{ "IsNullSync", &USimpleJsonObject::execIsNullSync },
			{ "IsValidObject", &USimpleJsonObject::execIsValidObject },
			{ "IsValidObjectSync", &USimpleJsonObject::execIsValidObjectSync },
			{ "SetArray", &USimpleJsonObject::execSetArray },
			{ "SetArraySync", &USimpleJsonObject::execSetArraySync },
			{ "SetBool", &USimpleJsonObject::execSetBool },
			{ "SetBoolSync", &USimpleJsonObject::execSetBoolSync },
			{ "SetNumber", &USimpleJsonObject::execSetNumber },
			{ "SetNumberSync", &USimpleJsonObject::execSetNumberSync },
			{ "SetObject", &USimpleJsonObject::execSetObject },
			{ "SetObjectSync", &USimpleJsonObject::execSetObjectSync },
			{ "SetString", &USimpleJsonObject::execSetString },
			{ "SetStringSync", &USimpleJsonObject::execSetStringSync },
			{ "Stringify", &USimpleJsonObject::execStringify },
			{ "StringifySync", &USimpleJsonObject::execStringifySync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics
	{
		struct SimpleJsonObject_eventAsValue_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventAsValue_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "AsValue", nullptr, nullptr, sizeof(SimpleJsonObject_eventAsValue_Parms), Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_AsValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics
	{
		struct SimpleJsonObject_eventAsValueSync_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventAsValueSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "AsValueSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventAsValueSync_Parms), Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_AsValueSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics
	{
		struct SimpleJsonObject_eventGetArray_Parms
		{
			FString Field;
			TArray<USimpleJsonValue*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetArray_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetArray", nullptr, nullptr, sizeof(SimpleJsonObject_eventGetArray_Parms), Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics
	{
		struct SimpleJsonObject_eventGetArraySync_Parms
		{
			FString Field;
			TArray<USimpleJsonValue*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetArraySync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetArraySync_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetArraySync", nullptr, nullptr, sizeof(SimpleJsonObject_eventGetArraySync_Parms), Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetArraySync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics
	{
		struct SimpleJsonObject_eventGetBool_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetBool_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventGetBool_Parms), &Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetBool", nullptr, nullptr, sizeof(SimpleJsonObject_eventGetBool_Parms), Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics
	{
		struct SimpleJsonObject_eventGetBoolSync_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetBoolSync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventGetBoolSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventGetBoolSync_Parms), &Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetBoolSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventGetBoolSync_Parms), Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetBoolSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics
	{
		struct SimpleJsonObject_eventGetNumber_Parms
		{
			FString Field;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetNumber_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetNumber", nullptr, nullptr, sizeof(SimpleJsonObject_eventGetNumber_Parms), Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics
	{
		struct SimpleJsonObject_eventGetNumberSync_Parms
		{
			FString Field;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetNumberSync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetNumberSync_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetNumberSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventGetNumberSync_Parms), Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetNumberSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics
	{
		struct SimpleJsonObject_eventGetObject_Parms
		{
			FString Field;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetObject_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetObject", nullptr, nullptr, sizeof(SimpleJsonObject_eventGetObject_Parms), Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics
	{
		struct SimpleJsonObject_eventGetObjectSync_Parms
		{
			FString Field;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetObjectSync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetObjectSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetObjectSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventGetObjectSync_Parms), Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetObjectSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetString_Statics
	{
		struct SimpleJsonObject_eventGetString_Parms
		{
			FString Field;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetString_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetString", nullptr, nullptr, sizeof(SimpleJsonObject_eventGetString_Parms), Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics
	{
		struct SimpleJsonObject_eventGetStringSync_Parms
		{
			FString Field;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetStringSync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetStringSync_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetStringSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventGetStringSync_Parms), Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetStringSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics
	{
		struct SimpleJsonObject_eventHasKey_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventHasKey_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventHasKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventHasKey_Parms), &Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "HasKey", nullptr, nullptr, sizeof(SimpleJsonObject_eventHasKey_Parms), Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_HasKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics
	{
		struct SimpleJsonObject_eventHasKeySync_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventHasKeySync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventHasKeySync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventHasKeySync_Parms), &Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "HasKeySync", nullptr, nullptr, sizeof(SimpleJsonObject_eventHasKeySync_Parms), Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_HasKeySync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics
	{
		struct SimpleJsonObject_eventIsEmpty_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsEmpty_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsEmpty_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsEmpty", nullptr, nullptr, sizeof(SimpleJsonObject_eventIsEmpty_Parms), Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics
	{
		struct SimpleJsonObject_eventIsEmptySync_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsEmptySync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsEmptySync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsEmptySync_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsEmptySync", nullptr, nullptr, sizeof(SimpleJsonObject_eventIsEmptySync_Parms), Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsEmptySync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics
	{
		struct SimpleJsonObject_eventIsNone_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsNone_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsNone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsNone_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsNone", nullptr, nullptr, sizeof(SimpleJsonObject_eventIsNone_Parms), Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsNone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics
	{
		struct SimpleJsonObject_eventIsNoneSync_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsNoneSync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsNoneSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsNoneSync_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsNoneSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventIsNoneSync_Parms), Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsNoneSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics
	{
		struct SimpleJsonObject_eventIsNull_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsNull_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsNull_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsNull", nullptr, nullptr, sizeof(SimpleJsonObject_eventIsNull_Parms), Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics
	{
		struct SimpleJsonObject_eventIsNullSync_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsNullSync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsNullSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsNullSync_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsNullSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventIsNullSync_Parms), Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsNullSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics
	{
		struct SimpleJsonObject_eventIsValidObject_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsValidObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsValidObject_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsValidObject", nullptr, nullptr, sizeof(SimpleJsonObject_eventIsValidObject_Parms), Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsValidObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics
	{
		struct SimpleJsonObject_eventIsValidObjectSync_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsValidObjectSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsValidObjectSync_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsValidObjectSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventIsValidObjectSync_Parms), Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics
	{
		struct SimpleJsonObject_eventSetArray_Parms
		{
			FString Field;
			TArray<USimpleJsonValue*> Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArray_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArray_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetArray", nullptr, nullptr, sizeof(SimpleJsonObject_eventSetArray_Parms), Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics
	{
		struct SimpleJsonObject_eventSetArraySync_Parms
		{
			FString Field;
			TArray<USimpleJsonValue*> Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArraySync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArraySync_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArraySync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetArraySync", nullptr, nullptr, sizeof(SimpleJsonObject_eventSetArraySync_Parms), Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetArraySync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics
	{
		struct SimpleJsonObject_eventSetBool_Parms
		{
			FString Field;
			bool Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetBool_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventSetBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventSetBool_Parms), &Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetBool_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetBool", nullptr, nullptr, sizeof(SimpleJsonObject_eventSetBool_Parms), Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics
	{
		struct SimpleJsonObject_eventSetBoolSync_Parms
		{
			FString Field;
			bool Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetBoolSync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventSetBoolSync_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventSetBoolSync_Parms), &Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetBoolSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetBoolSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventSetBoolSync_Parms), Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetBoolSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics
	{
		struct SimpleJsonObject_eventSetNumber_Parms
		{
			FString Field;
			float Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumber_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumber_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumber_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetNumber", nullptr, nullptr, sizeof(SimpleJsonObject_eventSetNumber_Parms), Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics
	{
		struct SimpleJsonObject_eventSetNumberSync_Parms
		{
			FString Field;
			float Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumberSync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumberSync_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumberSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetNumberSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventSetNumberSync_Parms), Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetNumberSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics
	{
		struct SimpleJsonObject_eventSetObject_Parms
		{
			FString Field;
			USimpleJsonObject* JsonObjet;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObjet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObject_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_JsonObjet = { "JsonObjet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObject_Parms, JsonObjet), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObject_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_JsonObjet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetObject", nullptr, nullptr, sizeof(SimpleJsonObject_eventSetObject_Parms), Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics
	{
		struct SimpleJsonObject_eventSetObjectSync_Parms
		{
			FString Field;
			USimpleJsonObject* JsonObjet;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObjet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObjectSync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_JsonObjet = { "JsonObjet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObjectSync_Parms, JsonObjet), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObjectSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_JsonObjet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetObjectSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventSetObjectSync_Parms), Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetObjectSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetString_Statics
	{
		struct SimpleJsonObject_eventSetString_Parms
		{
			FString Field;
			FString Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetString_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetString_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetString", nullptr, nullptr, sizeof(SimpleJsonObject_eventSetString_Parms), Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics
	{
		struct SimpleJsonObject_eventSetStringSync_Parms
		{
			FString Field;
			FString Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetStringSync_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetStringSync_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetStringSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetStringSync", nullptr, nullptr, sizeof(SimpleJsonObject_eventSetStringSync_Parms), Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetStringSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics
	{
		struct SimpleJsonObject_eventStringify_Parms
		{
			bool pretty;
			FString ReturnValue;
		};
		static void NewProp_pretty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pretty;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_pretty_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventStringify_Parms*)Obj)->pretty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_pretty = { "pretty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventStringify_Parms), &Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_pretty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventStringify_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_pretty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "CPP_Default_pretty", "false" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "Stringify", nullptr, nullptr, sizeof(SimpleJsonObject_eventStringify_Parms), Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_Stringify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics
	{
		struct SimpleJsonObject_eventStringifySync_Parms
		{
			bool pretty;
			FString ReturnValue;
		};
		static void NewProp_pretty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pretty;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_pretty_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventStringifySync_Parms*)Obj)->pretty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_pretty = { "pretty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleJsonObject_eventStringifySync_Parms), &Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_pretty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleJsonObject_eventStringifySync_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_pretty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "CPP_Default_pretty", "false" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "StringifySync", nullptr, nullptr, sizeof(SimpleJsonObject_eventStringifySync_Parms), Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonObject_StringifySync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimpleJsonObject_NoRegister()
	{
		return USimpleJsonObject::StaticClass();
	}
	struct Z_Construct_UClass_USimpleJsonObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleJsonObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleJsonObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleJsonObject_AsValue, "AsValue" }, // 496291927
		{ &Z_Construct_UFunction_USimpleJsonObject_AsValueSync, "AsValueSync" }, // 2538494486
		{ &Z_Construct_UFunction_USimpleJsonObject_GetArray, "GetArray" }, // 2971615034
		{ &Z_Construct_UFunction_USimpleJsonObject_GetArraySync, "GetArraySync" }, // 697940169
		{ &Z_Construct_UFunction_USimpleJsonObject_GetBool, "GetBool" }, // 2986273206
		{ &Z_Construct_UFunction_USimpleJsonObject_GetBoolSync, "GetBoolSync" }, // 2197638615
		{ &Z_Construct_UFunction_USimpleJsonObject_GetNumber, "GetNumber" }, // 482436924
		{ &Z_Construct_UFunction_USimpleJsonObject_GetNumberSync, "GetNumberSync" }, // 2841215544
		{ &Z_Construct_UFunction_USimpleJsonObject_GetObject, "GetObject" }, // 2436434188
		{ &Z_Construct_UFunction_USimpleJsonObject_GetObjectSync, "GetObjectSync" }, // 1277834927
		{ &Z_Construct_UFunction_USimpleJsonObject_GetString, "GetString" }, // 639037835
		{ &Z_Construct_UFunction_USimpleJsonObject_GetStringSync, "GetStringSync" }, // 3027183260
		{ &Z_Construct_UFunction_USimpleJsonObject_HasKey, "HasKey" }, // 624669696
		{ &Z_Construct_UFunction_USimpleJsonObject_HasKeySync, "HasKeySync" }, // 2957565251
		{ &Z_Construct_UFunction_USimpleJsonObject_IsEmpty, "IsEmpty" }, // 3276044549
		{ &Z_Construct_UFunction_USimpleJsonObject_IsEmptySync, "IsEmptySync" }, // 8062701
		{ &Z_Construct_UFunction_USimpleJsonObject_IsNone, "IsNone" }, // 2433128562
		{ &Z_Construct_UFunction_USimpleJsonObject_IsNoneSync, "IsNoneSync" }, // 3375614467
		{ &Z_Construct_UFunction_USimpleJsonObject_IsNull, "IsNull" }, // 3572636662
		{ &Z_Construct_UFunction_USimpleJsonObject_IsNullSync, "IsNullSync" }, // 2563103906
		{ &Z_Construct_UFunction_USimpleJsonObject_IsValidObject, "IsValidObject" }, // 591278765
		{ &Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync, "IsValidObjectSync" }, // 1974753368
		{ &Z_Construct_UFunction_USimpleJsonObject_SetArray, "SetArray" }, // 3530179692
		{ &Z_Construct_UFunction_USimpleJsonObject_SetArraySync, "SetArraySync" }, // 2733240709
		{ &Z_Construct_UFunction_USimpleJsonObject_SetBool, "SetBool" }, // 110362510
		{ &Z_Construct_UFunction_USimpleJsonObject_SetBoolSync, "SetBoolSync" }, // 460175783
		{ &Z_Construct_UFunction_USimpleJsonObject_SetNumber, "SetNumber" }, // 2696815646
		{ &Z_Construct_UFunction_USimpleJsonObject_SetNumberSync, "SetNumberSync" }, // 1952067065
		{ &Z_Construct_UFunction_USimpleJsonObject_SetObject, "SetObject" }, // 2348404968
		{ &Z_Construct_UFunction_USimpleJsonObject_SetObjectSync, "SetObjectSync" }, // 3952820791
		{ &Z_Construct_UFunction_USimpleJsonObject_SetString, "SetString" }, // 4165352868
		{ &Z_Construct_UFunction_USimpleJsonObject_SetStringSync, "SetStringSync" }, // 3703441231
		{ &Z_Construct_UFunction_USimpleJsonObject_Stringify, "Stringify" }, // 2691694628
		{ &Z_Construct_UFunction_USimpleJsonObject_StringifySync, "StringifySync" }, // 4032442486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleJsonObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SimpleJsonObject.h" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleJsonObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleJsonObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleJsonObject_Statics::ClassParams = {
		&USimpleJsonObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleJsonObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleJsonObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleJsonObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleJsonObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleJsonObject, 537184713);
	template<> FETCH_API UClass* StaticClass<USimpleJsonObject>()
	{
		return USimpleJsonObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleJsonObject(Z_Construct_UClass_USimpleJsonObject, &USimpleJsonObject::StaticClass, TEXT("/Script/Fetch"), TEXT("USimpleJsonObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleJsonObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
