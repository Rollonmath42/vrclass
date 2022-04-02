// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFetchRequest;
#ifdef FETCH_FetchRequest_generated_h
#error "FetchRequest.generated.h already included, missing '#pragma once' in FetchRequest.h"
#endif
#define FETCH_FetchRequest_generated_h

#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_SPARSE_DATA
#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnJson); \
	DECLARE_FUNCTION(execOnError); \
	DECLARE_FUNCTION(execOnText);


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnJson); \
	DECLARE_FUNCTION(execOnError); \
	DECLARE_FUNCTION(execOnText);


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFetchRequest(); \
	friend struct Z_Construct_UClass_UFetchRequest_Statics; \
public: \
	DECLARE_CLASS(UFetchRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UFetchRequest)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFetchRequest(); \
	friend struct Z_Construct_UClass_UFetchRequest_Statics; \
public: \
	DECLARE_CLASS(UFetchRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UFetchRequest)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchRequest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchRequest(UFetchRequest&&); \
	NO_API UFetchRequest(const UFetchRequest&); \
public:


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchRequest(UFetchRequest&&); \
	NO_API UFetchRequest(const UFetchRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchRequest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFetchRequest)


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_PRIVATE_PROPERTY_OFFSET
#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_14_PROLOG
#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_PRIVATE_PROPERTY_OFFSET \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_SPARSE_DATA \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_RPC_WRAPPERS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_INCLASS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_PRIVATE_PROPERTY_OFFSET \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_SPARSE_DATA \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_INCLASS_NO_PURE_DECLS \
	VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FETCH_API UClass* StaticClass<class UFetchRequest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRClass_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
