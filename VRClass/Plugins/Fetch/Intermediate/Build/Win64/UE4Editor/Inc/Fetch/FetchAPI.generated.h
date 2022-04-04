// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFetchHeader;
struct FFetchJsonOptions;
class UFetchRequest;
struct FFetchOptions;
#ifdef FETCH_FetchAPI_generated_h
#error "FetchAPI.generated.h already included, missing '#pragma once' in FetchAPI.h"
#endif
#define FETCH_FetchAPI_generated_h

#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_SPARSE_DATA
#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeOAuthHeader); \
	DECLARE_FUNCTION(execMakeBasicAuthHeader); \
	DECLARE_FUNCTION(execFetchJson); \
	DECLARE_FUNCTION(execFetch);


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeOAuthHeader); \
	DECLARE_FUNCTION(execMakeBasicAuthHeader); \
	DECLARE_FUNCTION(execFetchJson); \
	DECLARE_FUNCTION(execFetch);


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFetchAPI(); \
	friend struct Z_Construct_UClass_UFetchAPI_Statics; \
public: \
	DECLARE_CLASS(UFetchAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UFetchAPI)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFetchAPI(); \
	friend struct Z_Construct_UClass_UFetchAPI_Statics; \
public: \
	DECLARE_CLASS(UFetchAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UFetchAPI)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchAPI(UFetchAPI&&); \
	NO_API UFetchAPI(const UFetchAPI&); \
public:


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchAPI(UFetchAPI&&); \
	NO_API UFetchAPI(const UFetchAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFetchAPI)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_PRIVATE_PROPERTY_OFFSET
#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_15_PROLOG
#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_PRIVATE_PROPERTY_OFFSET \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_SPARSE_DATA \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_RPC_WRAPPERS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_INCLASS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_PRIVATE_PROPERTY_OFFSET \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_SPARSE_DATA \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_INCLASS_NO_PURE_DECLS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FETCH_API UClass* StaticClass<class UFetchAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRClass_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
