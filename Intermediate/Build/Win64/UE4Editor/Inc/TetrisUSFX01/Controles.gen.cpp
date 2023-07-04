// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Controles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControles() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AControles_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AControles();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AControles::StaticRegisterNativesAControles()
	{
	}
	UClass* Z_Construct_UClass_AControles_NoRegister()
	{
		return AControles::StaticClass();
	}
	struct Z_Construct_UClass_AControles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Controles.h" },
		{ "ModuleRelativePath", "Controles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControles_Statics::ClassParams = {
		&AControles::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AControles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AControles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControles, 2580420960);
	template<> TETRISUSFX01_API UClass* StaticClass<AControles>()
	{
		return AControles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControles(Z_Construct_UClass_AControles, &AControles::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AControles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
