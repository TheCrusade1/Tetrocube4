// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tetrocube3/Public/TetrominoBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetrominoBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TETROCUBE3_API UClass* Z_Construct_UClass_ABlockBase_NoRegister();
	TETROCUBE3_API UClass* Z_Construct_UClass_ATetrominoBase();
	TETROCUBE3_API UClass* Z_Construct_UClass_ATetrominoBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tetrocube3();
// End Cross Module References
	void ATetrominoBase::StaticRegisterNativesATetrominoBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATetrominoBase);
	UClass* Z_Construct_UClass_ATetrominoBase_NoRegister()
	{
		return ATetrominoBase::StaticClass();
	}
	struct Z_Construct_UClass_ATetrominoBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_BlockBase_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BP_BlockBase;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blocks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenMoves_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenMoves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenDroppingMoves_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenDroppingMoves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetrominoBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tetrocube3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrominoBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrominoBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TetrominoBase.h" },
		{ "ModuleRelativePath", "Public/TetrominoBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "ModuleRelativePath", "Public/TetrominoBase.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATetrominoBase, Orientation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Orientation_MetaData), Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Orientation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrominoBase_Statics::NewProp_MoveBuffer_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "ModuleRelativePath", "Public/TetrominoBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATetrominoBase_Statics::NewProp_MoveBuffer = { "MoveBuffer", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATetrominoBase, MoveBuffer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrominoBase_Statics::NewProp_MoveBuffer_MetaData), Z_Construct_UClass_ATetrominoBase_Statics::NewProp_MoveBuffer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrominoBase_Statics::NewProp_BP_BlockBase_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "ModuleRelativePath", "Public/TetrominoBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATetrominoBase_Statics::NewProp_BP_BlockBase = { "BP_BlockBase", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATetrominoBase, BP_BlockBase), Z_Construct_UClass_UClass, Z_Construct_UClass_ABlockBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrominoBase_Statics::NewProp_BP_BlockBase_MetaData), Z_Construct_UClass_ATetrominoBase_Statics::NewProp_BP_BlockBase_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlockBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Blocks_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "ModuleRelativePath", "Public/TetrominoBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATetrominoBase, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Blocks_MetaData), Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Blocks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrominoBase_Statics::NewProp_TimeBetweenMoves_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "ModuleRelativePath", "Public/TetrominoBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATetrominoBase_Statics::NewProp_TimeBetweenMoves = { "TimeBetweenMoves", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATetrominoBase, TimeBetweenMoves), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrominoBase_Statics::NewProp_TimeBetweenMoves_MetaData), Z_Construct_UClass_ATetrominoBase_Statics::NewProp_TimeBetweenMoves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrominoBase_Statics::NewProp_TimeBetweenDroppingMoves_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "ModuleRelativePath", "Public/TetrominoBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATetrominoBase_Statics::NewProp_TimeBetweenDroppingMoves = { "TimeBetweenDroppingMoves", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATetrominoBase, TimeBetweenDroppingMoves), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrominoBase_Statics::NewProp_TimeBetweenDroppingMoves_MetaData), Z_Construct_UClass_ATetrominoBase_Statics::NewProp_TimeBetweenDroppingMoves_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATetrominoBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrominoBase_Statics::NewProp_MoveBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrominoBase_Statics::NewProp_BP_BlockBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Blocks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrominoBase_Statics::NewProp_Blocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrominoBase_Statics::NewProp_TimeBetweenMoves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrominoBase_Statics::NewProp_TimeBetweenDroppingMoves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetrominoBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetrominoBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATetrominoBase_Statics::ClassParams = {
		&ATetrominoBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATetrominoBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATetrominoBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrominoBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATetrominoBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrominoBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATetrominoBase()
	{
		if (!Z_Registration_Info_UClass_ATetrominoBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATetrominoBase.OuterSingleton, Z_Construct_UClass_ATetrominoBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATetrominoBase.OuterSingleton;
	}
	template<> TETROCUBE3_API UClass* StaticClass<ATetrominoBase>()
	{
		return ATetrominoBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetrominoBase);
	ATetrominoBase::~ATetrominoBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_TetrominoBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_TetrominoBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATetrominoBase, ATetrominoBase::StaticClass, TEXT("ATetrominoBase"), &Z_Registration_Info_UClass_ATetrominoBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATetrominoBase), 3324250017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_TetrominoBase_h_3776662735(TEXT("/Script/Tetrocube3"),
		Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_TetrominoBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_TetrominoBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
