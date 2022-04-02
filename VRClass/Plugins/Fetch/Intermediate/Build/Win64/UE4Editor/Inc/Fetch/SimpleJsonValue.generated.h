// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USimpleJsonValue;
class USimpleJsonObject;
#ifdef FETCH_SimpleJsonValue_generated_h
#error "SimpleJsonValue.generated.h already included, missing '#pragma once' in SimpleJsonValue.h"
#endif
#define FETCH_SimpleJsonValue_generated_h

#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_SPARSE_DATA
#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValidSync); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execIsNullSync); \
	DECLARE_FUNCTION(execIsNull); \
	DECLARE_FUNCTION(execAsArraySync); \
	DECLARE_FUNCTION(execAsArray); \
	DECLARE_FUNCTION(execAsObjectSync); \
	DECLARE_FUNCTION(execAsObject); \
	DECLARE_FUNCTION(execAsBoolSync); \
	DECLARE_FUNCTION(execAsBool); \
	DECLARE_FUNCTION(execAsStringSync); \
	DECLARE_FUNCTION(execAsString); \
	DECLARE_FUNCTION(execAsNumberSync); \
	DECLARE_FUNCTION(execAsNumber);


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValidSync); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execIsNullSync); \
	DECLARE_FUNCTION(execIsNull); \
	DECLARE_FUNCTION(execAsArraySync); \
	DECLARE_FUNCTION(execAsArray); \
	DECLARE_FUNCTION(execAsObjectSync); \
	DECLARE_FUNCTION(execAsObject); \
	DECLARE_FUNCTION(execAsBoolSync); \
	DECLARE_FUNCTION(execAsBool); \
	DECLARE_FUNCTION(execAsStringSync); \
	DECLARE_FUNCTION(execAsString); \
	DECLARE_FUNCTION(execAsNumberSync); \
	DECLARE_FUNCTION(execAsNumber);


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleJsonValue(); \
	friend struct Z_Construct_UClass_USimpleJsonValue_Statics; \
public: \
	DECLARE_CLASS(USimpleJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(USimpleJsonValue)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleJsonValue(); \
	friend struct Z_Construct_UClass_USimpleJsonValue_Statics; \
public: \
	DECLARE_CLASS(USimpleJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(USimpleJsonValue)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleJsonValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleJsonValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleJsonValue(USimpleJsonValue&&); \
	NO_API USimpleJsonValue(const USimpleJsonValue&); \
public:


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleJsonValue(USimpleJsonValue&&); \
	NO_API USimpleJsonValue(const USimpleJsonValue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleJsonValue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleJsonValue)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_PRIVATE_PROPERTY_OFFSET
#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_14_PROLOG
#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_PRIVATE_PROPERTY_OFFSET \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_SPARSE_DATA \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_RPC_WRAPPERS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_INCLASS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_PRIVATE_PROPERTY_OFFSET \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_SPARSE_DATA \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_INCLASS_NO_PURE_DECLS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FETCH_API UClass* StaticClass<class USimpleJsonValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
