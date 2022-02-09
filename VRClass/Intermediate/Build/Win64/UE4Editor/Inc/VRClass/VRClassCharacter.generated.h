// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRCLASS_VRClassCharacter_generated_h
#error "VRClassCharacter.generated.h already included, missing '#pragma once' in VRClassCharacter.h"
#endif
#define VRCLASS_VRClassCharacter_generated_h

#define VRClass_Source_VRClass_VRClassCharacter_h_20_SPARSE_DATA
#define VRClass_Source_VRClass_VRClassCharacter_h_20_RPC_WRAPPERS
#define VRClass_Source_VRClass_VRClassCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define VRClass_Source_VRClass_VRClassCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRClassCharacter(); \
	friend struct Z_Construct_UClass_AVRClassCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRClassCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRClass"), NO_API) \
	DECLARE_SERIALIZER(AVRClassCharacter)


#define VRClass_Source_VRClass_VRClassCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAVRClassCharacter(); \
	friend struct Z_Construct_UClass_AVRClassCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRClassCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRClass"), NO_API) \
	DECLARE_SERIALIZER(AVRClassCharacter)


#define VRClass_Source_VRClass_VRClassCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRClassCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRClassCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRClassCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRClassCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRClassCharacter(AVRClassCharacter&&); \
	NO_API AVRClassCharacter(const AVRClassCharacter&); \
public:


#define VRClass_Source_VRClass_VRClassCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRClassCharacter(AVRClassCharacter&&); \
	NO_API AVRClassCharacter(const AVRClassCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRClassCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRClassCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRClassCharacter)


#define VRClass_Source_VRClass_VRClassCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AVRClassCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AVRClassCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AVRClassCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AVRClassCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AVRClassCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AVRClassCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AVRClassCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AVRClassCharacter, L_MotionController); }


#define VRClass_Source_VRClass_VRClassCharacter_h_17_PROLOG
#define VRClass_Source_VRClass_VRClassCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Source_VRClass_VRClassCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	VRClass_Source_VRClass_VRClassCharacter_h_20_SPARSE_DATA \
	VRClass_Source_VRClass_VRClassCharacter_h_20_RPC_WRAPPERS \
	VRClass_Source_VRClass_VRClassCharacter_h_20_INCLASS \
	VRClass_Source_VRClass_VRClassCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRClass_Source_VRClass_VRClassCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Source_VRClass_VRClassCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	VRClass_Source_VRClass_VRClassCharacter_h_20_SPARSE_DATA \
	VRClass_Source_VRClass_VRClassCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	VRClass_Source_VRClass_VRClassCharacter_h_20_INCLASS_NO_PURE_DECLS \
	VRClass_Source_VRClass_VRClassCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRCLASS_API UClass* StaticClass<class AVRClassCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRClass_Source_VRClass_VRClassCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
