// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tetrocube3/Public/Tetrocube3HUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetrocube3HUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	TETROCUBE3_API UClass* Z_Construct_UClass_ATetrocube3HUD();
	TETROCUBE3_API UClass* Z_Construct_UClass_ATetrocube3HUD_NoRegister();
	TETROCUBE3_API UClass* Z_Construct_UClass_UTetrocube3HUDWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tetrocube3();
// End Cross Module References
	void ATetrocube3HUD::StaticRegisterNativesATetrocube3HUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATetrocube3HUD);
	UClass* Z_Construct_UClass_ATetrocube3HUD_NoRegister()
	{
		return ATetrocube3HUD::StaticClass();
	}
	struct Z_Construct_UClass_ATetrocube3HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetrocube3HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Tetrocube3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrocube3HUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrocube3HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Tetrocube3HUD.h" },
		{ "ModuleRelativePath", "Public/Tetrocube3HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrocube3HUD_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/Tetrocube3HUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATetrocube3HUD_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATetrocube3HUD, HUDWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UTetrocube3HUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrocube3HUD_Statics::NewProp_HUDWidget_MetaData), Z_Construct_UClass_ATetrocube3HUD_Statics::NewProp_HUDWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATetrocube3HUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrocube3HUD_Statics::NewProp_HUDWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetrocube3HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetrocube3HUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATetrocube3HUD_Statics::ClassParams = {
		&ATetrocube3HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATetrocube3HUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATetrocube3HUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrocube3HUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ATetrocube3HUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATetrocube3HUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATetrocube3HUD()
	{
		if (!Z_Registration_Info_UClass_ATetrocube3HUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATetrocube3HUD.OuterSingleton, Z_Construct_UClass_ATetrocube3HUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATetrocube3HUD.OuterSingleton;
	}
	template<> TETROCUBE3_API UClass* StaticClass<ATetrocube3HUD>()
	{
		return ATetrocube3HUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetrocube3HUD);
	ATetrocube3HUD::~ATetrocube3HUD() {}
	struct Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetrocube3HUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetrocube3HUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATetrocube3HUD, ATetrocube3HUD::StaticClass, TEXT("ATetrocube3HUD"), &Z_Registration_Info_UClass_ATetrocube3HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATetrocube3HUD), 3043051586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetrocube3HUD_h_3780798948(TEXT("/Script/Tetrocube3"),
		Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetrocube3HUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_Tetrocube3HUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
