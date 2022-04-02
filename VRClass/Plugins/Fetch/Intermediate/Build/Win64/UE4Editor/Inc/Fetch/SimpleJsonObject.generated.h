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
#ifdef FETCH_SimpleJsonObject_generated_h
#error "SimpleJsonObject.generated.h already included, missing '#pragma once' in SimpleJsonObject.h"
#endif
#define FETCH_SimpleJsonObject_generated_h

#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_SPARSE_DATA
#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValidObjectSync); \
	DECLARE_FUNCTION(execIsValidObject); \
	DECLARE_FUNCTION(execAsValueSync); \
	DECLARE_FUNCTION(execAsValue); \
	DECLARE_FUNCTION(execStringifySync); \
	DECLARE_FUNCTION(execStringify); \
	DECLARE_FUNCTION(execSetArraySync); \
	DECLARE_FUNCTION(execSetArray); \
	DECLARE_FUNCTION(execSetObjectSync); \
	DECLARE_FUNCTION(execSetObject); \
	DECLARE_FUNCTION(execSetBoolSync); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execSetStringSync); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetNumberSync); \
	DECLARE_FUNCTION(execSetNumber); \
	DECLARE_FUNCTION(execHasKeySync); \
	DECLARE_FUNCTION(execHasKey); \
	DECLARE_FUNCTION(execIsEmptySync); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsNoneSync); \
	DECLARE_FUNCTION(execIsNone); \
	DECLARE_FUNCTION(execIsNullSync); \
	DECLARE_FUNCTION(execIsNull); \
	DECLARE_FUNCTION(execGetArraySync); \
	DECLARE_FUNCTION(execGetArray); \
	DECLARE_FUNCTION(execGetBoolSync); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetStringSync); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetNumberSync); \
	DECLARE_FUNCTION(execGetNumber); \
	DECLARE_FUNCTION(execGetObjectSync); \
	DECLARE_FUNCTION(execGetObject);


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValidObjectSync); \
	DECLARE_FUNCTION(execIsValidObject); \
	DECLARE_FUNCTION(execAsValueSync); \
	DECLARE_FUNCTION(execAsValue); \
	DECLARE_FUNCTION(execStringifySync); \
	DECLARE_FUNCTION(execStringify); \
	DECLARE_FUNCTION(execSetArraySync); \
	DECLARE_FUNCTION(execSetArray); \
	DECLARE_FUNCTION(execSetObjectSync); \
	DECLARE_FUNCTION(execSetObject); \
	DECLARE_FUNCTION(execSetBoolSync); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execSetStringSync); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetNumberSync); \
	DECLARE_FUNCTION(execSetNumber); \
	DECLARE_FUNCTION(execHasKeySync); \
	DECLARE_FUNCTION(execHasKey); \
	DECLARE_FUNCTION(execIsEmptySync); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsNoneSync); \
	DECLARE_FUNCTION(execIsNone); \
	DECLARE_FUNCTION(execIsNullSync); \
	DECLARE_FUNCTION(execIsNull); \
	DECLARE_FUNCTION(execGetArraySync); \
	DECLARE_FUNCTION(execGetArray); \
	DECLARE_FUNCTION(execGetBoolSync); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetStringSync); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetNumberSync); \
	DECLARE_FUNCTION(execGetNumber); \
	DECLARE_FUNCTION(execGetObjectSync); \
	DECLARE_FUNCTION(execGetObject);


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleJsonObject(); \
	friend struct Z_Construct_UClass_USimpleJsonObject_Statics; \
public: \
	DECLARE_CLASS(USimpleJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(USimpleJsonObject)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleJsonObject(); \
	friend struct Z_Construct_UClass_USimpleJsonObject_Statics; \
public: \
	DECLARE_CLASS(USimpleJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(USimpleJsonObject)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleJsonObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleJsonObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleJsonObject(USimpleJsonObject&&); \
	NO_API USimpleJsonObject(const USimpleJsonObject&); \
public:


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleJsonObject(USimpleJsonObject&&); \
	NO_API USimpleJsonObject(const USimpleJsonObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleJsonObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleJsonObject)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_PRIVATE_PROPERTY_OFFSET
#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_15_PROLOG
#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_PRIVATE_PROPERTY_OFFSET \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_SPARSE_DATA \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_RPC_WRAPPERS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_INCLASS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_PRIVATE_PROPERTY_OFFSET \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_SPARSE_DATA \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_INCLASS_NO_PURE_DECLS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FETCH_API UClass* StaticClass<class USimpleJsonObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
