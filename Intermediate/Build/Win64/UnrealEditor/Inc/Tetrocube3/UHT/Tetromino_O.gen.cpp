// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tetrocube3/Public/Tetromino_O.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetromino_O() {}
// Cross Module References
	TETROCUBE3_API UClass* Z_Construct_UClass_ATetromino_O();
	TETROCUBE3_API UClass* Z_Construct_UClass_ATetromino_O_NoRegister();
	TETROCUBE3_API UClass* Z_Construct_UClass_ATetrominoBase();
	UPackage* Z_Construct_UPackage__Script_Tetrocube3();
// End Cross Module References
	void ATetromino_O::StaticRegisterNativesATetromino_O()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATetromino_O);
	UClass* Z_Construct_UClass_ATetromino_O_NoRegister()
	{
		return ATetromino_O::StaticClass();
	}
	struct Z_Construct_UClass_ATetromino_O_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetromino_O_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATetrominoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tetrocube3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATetromino_O_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetromino_O_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tetromino_O.h" },
		{ "ModuleRelativePath", "Public/Tetromino_O.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetromino_O_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetromino_O>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATetromino_O_Statics::ClassParams = {
		&ATetromino_O::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATetromino_O_Statics::Class_MetaDataParams), Z_Construct_UClass_ATetromino_O_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATetromino_O()
	{
		if (!Z_Registration_Info_UClass_ATetromino_O.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATetromino_O.OuterSingleton, Z_Construct_UClass_ATetromino_O_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATetromino_O.OuterSingleton;
	}
	template<> TETROCUBE3_API UClass* StaticClass<ATetromino_O>()
	{
		return ATetromino_O::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetromino_O);
	ATetromino_O::~ATetromino_O() {}
	struct Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetromino_O_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetromino_O_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATetromino_O, ATetromino_O::StaticClass, TEXT("ATetromino_O"), &Z_Registration_Info_UClass_ATetromino_O, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATetromino_O), 167380629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetromino_O_h_785135417(TEXT("/Script/Tetrocube3"),
		Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetromino_O_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetromino_O_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
