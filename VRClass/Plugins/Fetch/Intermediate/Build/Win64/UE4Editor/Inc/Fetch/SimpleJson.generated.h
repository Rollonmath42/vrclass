// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USimpleJsonValue;
#ifdef FETCH_SimpleJson_generated_h
#error "SimpleJson.generated.h already included, missing '#pragma once' in SimpleJson.h"
#endif
#define FETCH_SimpleJson_generated_h

#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_SPARSE_DATA
#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeJsonNullSync); \
	DECLARE_FUNCTION(execMakeJsonNull); \
	DECLARE_FUNCTION(execMakeJsonStringSync); \
	DECLARE_FUNCTION(execMakeJsonString); \
	DECLARE_FUNCTION(execMakeJsonBoolSync); \
	DECLARE_FUNCTION(execMakeJsonBool); \
	DECLARE_FUNCTION(execMakeJsonNumberSync); \
	DECLARE_FUNCTION(execMakeJsonNumber); \
	DECLARE_FUNCTION(execMakeJsonSync); \
	DECLARE_FUNCTION(execMakeJson);


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeJsonNullSync); \
	DECLARE_FUNCTION(execMakeJsonNull); \
	DECLARE_FUNCTION(execMakeJsonStringSync); \
	DECLARE_FUNCTION(execMakeJsonString); \
	DECLARE_FUNCTION(execMakeJsonBoolSync); \
	DECLARE_FUNCTION(execMakeJsonBool); \
	DECLARE_FUNCTION(execMakeJsonNumberSync); \
	DECLARE_FUNCTION(execMakeJsonNumber); \
	DECLARE_FUNCTION(execMakeJsonSync); \
	DECLARE_FUNCTION(execMakeJson);


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleJson(); \
	friend struct Z_Construct_UClass_USimpleJson_Statics; \
public: \
	DECLARE_CLASS(USimpleJson, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(USimpleJson)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleJson(); \
	friend struct Z_Construct_UClass_USimpleJson_Statics; \
public: \
	DECLARE_CLASS(USimpleJson, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(USimpleJson)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleJson(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleJson) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleJson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleJson); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleJson(USimpleJson&&); \
	NO_API USimpleJson(const USimpleJson&); \
public:


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleJson(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleJson(USimpleJson&&); \
	NO_API USimpleJson(const USimpleJson&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleJson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleJson); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleJson)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_PRIVATE_PROPERTY_OFFSET
#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_14_PROLOG
#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_PRIVATE_PROPERTY_OFFSET \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_SPARSE_DATA \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_RPC_WRAPPERS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_INCLASS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_PRIVATE_PROPERTY_OFFSET \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_SPARSE_DATA \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_INCLASS_NO_PURE_DECLS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FETCH_API UClass* StaticClass<class USimpleJson>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRClass_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
