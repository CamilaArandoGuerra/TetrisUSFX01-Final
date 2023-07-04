// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Board.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoard() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiece_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void ABoard::StaticRegisterNativesABoard()
	{
	}
	UClass* Z_Construct_UClass_ABoard_NoRegister()
	{
		return ABoard::StaticClass();
	}
	struct Z_Construct_UClass_ABoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewNew_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuntosText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuntosText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineasText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineasText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TiempoText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameOverText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloquesText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloquesText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Board.h" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_NewNew_MetaData[] = {
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_NewNew = { "NewNew", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, NewNew), Z_Construct_UClass_APiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_NewNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_NewNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_PuntosText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_PuntosText = { "PuntosText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, PuntosText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_PuntosText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_PuntosText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_LineasText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_LineasText = { "LineasText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, LineasText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_LineasText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_LineasText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_TiempoText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_TiempoText = { "TiempoText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, TiempoText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_TiempoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_TiempoText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_GameOverText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_GameOverText = { "GameOverText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, GameOverText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_GameOverText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_GameOverText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_BloquesText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_BloquesText = { "BloquesText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, BloquesText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_BloquesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_BloquesText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_NewNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_PuntosText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_LineasText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_TiempoText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_GameOverText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_BloquesText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoard_Statics::ClassParams = {
		&ABoard::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoard, 2905198953);
	template<> TETRISUSFX01_API UClass* StaticClass<ABoard>()
	{
		return ABoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoard(Z_Construct_UClass_ABoard, &ABoard::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
