// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tetrocube3/Public/Tetromino_I.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetromino_I() {}
// Cross Module References
	TETROCUBE3_API UClass* Z_Construct_UClass_ATetromino_I();
	TETROCUBE3_API UClass* Z_Construct_UClass_ATetromino_I_NoRegister();
	TETROCUBE3_API UClass* Z_Construct_UClass_ATetrominoBase();
	UPackage* Z_Construct_UPackage__Script_Tetrocube3();
// End Cross Module References
	void ATetromino_I::StaticRegisterNativesATetromino_I()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATetromino_I);
	UClass* Z_Construct_UClass_ATetromino_I_NoRegister()
	{
		return ATetromino_I::StaticClass();
	}
	struct Z_Construct_UClass_ATetromino_I_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetromino_I_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATetrominoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tetrocube3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATetromino_I_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetromino_I_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tetromino_I.h" },
		{ "ModuleRelativePath", "Public/Tetromino_I.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetromino_I_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetromino_I>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATetromino_I_Statics::ClassParams = {
		&ATetromino_I::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATetromino_I_Statics::Class_MetaDataParams), Z_Construct_UClass_ATetromino_I_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATetromino_I()
	{
		if (!Z_Registration_Info_UClass_ATetromino_I.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATetromino_I.OuterSingleton, Z_Construct_UClass_ATetromino_I_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATetromino_I.OuterSingleton;
	}
	template<> TETROCUBE3_API UClass* StaticClass<ATetromino_I>()
	{
		return ATetromino_I::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetromino_I);
	ATetromino_I::~ATetromino_I() {}
	struct Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetromino_I_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetromino_I_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATetromino_I, ATetromino_I::StaticClass, TEXT("ATetromino_I"), &Z_Registration_Info_UClass_ATetromino_I, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATetromino_I), 318461554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetromino_I_h_2127128096(TEXT("/Script/Tetrocube3"),
		Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetromino_I_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetromino_I_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
