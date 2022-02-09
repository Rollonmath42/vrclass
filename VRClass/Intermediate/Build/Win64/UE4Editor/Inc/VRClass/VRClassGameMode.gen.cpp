// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRClass/VRClassGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRClassGameMode() {}
// Cross Module References
	VRCLASS_API UClass* Z_Construct_UClass_AVRClassGameMode_NoRegister();
	VRCLASS_API UClass* Z_Construct_UClass_AVRClassGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VRClass();
// End Cross Module References
	void AVRClassGameMode::StaticRegisterNativesAVRClassGameMode()
	{
	}
	UClass* Z_Construct_UClass_AVRClassGameMode_NoRegister()
	{
		return AVRClassGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AVRClassGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRClassGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRClassGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VRClassGameMode.h" },
		{ "ModuleRelativePath", "VRClassGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRClassGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRClassGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRClassGameMode_Statics::ClassParams = {
		&AVRClassGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVRClassGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRClassGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRClassGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRClassGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRClassGameMode, 1917159926);
	template<> VRCLASS_API UClass* StaticClass<AVRClassGameMode>()
	{
		return AVRClassGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRClassGameMode(Z_Construct_UClass_AVRClassGameMode, &AVRClassGameMode::StaticClass, TEXT("/Script/VRClass"), TEXT("AVRClassGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRClassGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
