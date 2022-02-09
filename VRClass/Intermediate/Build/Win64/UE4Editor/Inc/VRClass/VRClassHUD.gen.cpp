// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRClass/VRClassHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRClassHUD() {}
// Cross Module References
	VRCLASS_API UClass* Z_Construct_UClass_AVRClassHUD_NoRegister();
	VRCLASS_API UClass* Z_Construct_UClass_AVRClassHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_VRClass();
// End Cross Module References
	void AVRClassHUD::StaticRegisterNativesAVRClassHUD()
	{
	}
	UClass* Z_Construct_UClass_AVRClassHUD_NoRegister()
	{
		return AVRClassHUD::StaticClass();
	}
	struct Z_Construct_UClass_AVRClassHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRClassHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_VRClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRClassHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "VRClassHUD.h" },
		{ "ModuleRelativePath", "VRClassHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRClassHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRClassHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRClassHUD_Statics::ClassParams = {
		&AVRClassHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVRClassHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRClassHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRClassHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRClassHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRClassHUD, 2554986093);
	template<> VRCLASS_API UClass* StaticClass<AVRClassHUD>()
	{
		return AVRClassHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRClassHUD(Z_Construct_UClass_AVRClassHUD, &AVRClassHUD::StaticClass, TEXT("/Script/VRClass"), TEXT("AVRClassHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRClassHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
