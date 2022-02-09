// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef VRCLASS_VRClassProjectile_generated_h
#error "VRClassProjectile.generated.h already included, missing '#pragma once' in VRClassProjectile.h"
#endif
#define VRCLASS_VRClassProjectile_generated_h

#define VRClass_Source_VRClass_VRClassProjectile_h_15_SPARSE_DATA
#define VRClass_Source_VRClass_VRClassProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define VRClass_Source_VRClass_VRClassProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define VRClass_Source_VRClass_VRClassProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRClassProjectile(); \
	friend struct Z_Construct_UClass_AVRClassProjectile_Statics; \
public: \
	DECLARE_CLASS(AVRClassProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRClass"), NO_API) \
	DECLARE_SERIALIZER(AVRClassProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define VRClass_Source_VRClass_VRClassProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVRClassProjectile(); \
	friend struct Z_Construct_UClass_AVRClassProjectile_Statics; \
public: \
	DECLARE_CLASS(AVRClassProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRClass"), NO_API) \
	DECLARE_SERIALIZER(AVRClassProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define VRClass_Source_VRClass_VRClassProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRClassProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRClassProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRClassProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRClassProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRClassProjectile(AVRClassProjectile&&); \
	NO_API AVRClassProjectile(const AVRClassProjectile&); \
public:


#define VRClass_Source_VRClass_VRClassProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRClassProjectile(AVRClassProjectile&&); \
	NO_API AVRClassProjectile(const AVRClassProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRClassProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRClassProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRClassProjectile)


#define VRClass_Source_VRClass_VRClassProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AVRClassProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AVRClassProjectile, ProjectileMovement); }


#define VRClass_Source_VRClass_VRClassProjectile_h_12_PROLOG
#define VRClass_Source_VRClass_VRClassProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Source_VRClass_VRClassProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	VRClass_Source_VRClass_VRClassProjectile_h_15_SPARSE_DATA \
	VRClass_Source_VRClass_VRClassProjectile_h_15_RPC_WRAPPERS \
	VRClass_Source_VRClass_VRClassProjectile_h_15_INCLASS \
	VRClass_Source_VRClass_VRClassProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRClass_Source_VRClass_VRClassProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRClass_Source_VRClass_VRClassProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	VRClass_Source_VRClass_VRClassProjectile_h_15_SPARSE_DATA \
	VRClass_Source_VRClass_VRClassProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRClass_Source_VRClass_VRClassProjectile_h_15_INCLASS_NO_PURE_DECLS \
	VRClass_Source_VRClass_VRClassProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRCLASS_API UClass* StaticClass<class AVRClassProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRClass_Source_VRClass_VRClassProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
