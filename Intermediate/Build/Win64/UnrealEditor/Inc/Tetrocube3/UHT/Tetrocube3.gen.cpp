// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tetrocube3/Tetrocube3.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetrocube3() {}
// Cross Module References
	TETROCUBE3_API UEnum* Z_Construct_UEnum_Tetrocube3_EBoardStatus();
	UPackage* Z_Construct_UPackage__Script_Tetrocube3();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoardStatus;
	static UEnum* EBoardStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoardStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoardStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tetrocube3_EBoardStatus, (UObject*)Z_Construct_UPackage__Script_Tetrocube3(), TEXT("EBoardStatus"));
		}
		return Z_Registration_Info_UEnum_EBoardStatus.OuterSingleton;
	}
	template<> TETROCUBE3_API UEnum* StaticEnum<EBoardStatus>()
	{
		return EBoardStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_Tetrocube3_EBoardStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tetrocube3_EBoardStatus_Statics::Enumerators[] = {
		{ "EBoardStatus::EBS_Free", (int64)EBoardStatus::EBS_Free },
		{ "EBoardStatus::EBS_Moving", (int64)EBoardStatus::EBS_Moving },
		{ "EBoardStatus::EBS_Scanning", (int64)EBoardStatus::EBS_Scanning },
		{ "EBoardStatus::EBS_Rotate", (int64)EBoardStatus::EBS_Rotate },
		{ "EBoardStatus::EBS_Rotating", (int64)EBoardStatus::EBS_Rotating },
		{ "EBoardStatus::EBS_Switching", (int64)EBoardStatus::EBS_Switching },
		{ "EBoardStatus::EBS_Dropping", (int64)EBoardStatus::EBS_Dropping },
		{ "EBoardStatus::EBS_DropFinished", (int64)EBoardStatus::EBS_DropFinished },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tetrocube3_EBoardStatus_Statics::Enum_MetaDataParams[] = {
		{ "EBS_DropFinished.Name", "EBoardStatus::EBS_DropFinished" },
		{ "EBS_Dropping.Name", "EBoardStatus::EBS_Dropping" },
		{ "EBS_Free.Name", "EBoardStatus::EBS_Free" },
		{ "EBS_Moving.Name", "EBoardStatus::EBS_Moving" },
		{ "EBS_Rotate.Name", "EBoardStatus::EBS_Rotate" },
		{ "EBS_Rotating.Name", "EBoardStatus::EBS_Rotating" },
		{ "EBS_Scanning.Name", "EBoardStatus::EBS_Scanning" },
		{ "EBS_Switching.Name", "EBoardStatus::EBS_Switching" },
		{ "ModuleRelativePath", "Tetrocube3.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tetrocube3_EBoardStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tetrocube3,
		nullptr,
		"EBoardStatus",
		"EBoardStatus",
		Z_Construct_UEnum_Tetrocube3_EBoardStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tetrocube3_EBoardStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Tetrocube3_EBoardStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Tetrocube3_EBoardStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Tetrocube3_EBoardStatus()
	{
		if (!Z_Registration_Info_UEnum_EBoardStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoardStatus.InnerSingleton, Z_Construct_UEnum_Tetrocube3_EBoardStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoardStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Tetrocube3_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Tetrocube3_h_Statics::EnumInfo[] = {
		{ EBoardStatus_StaticEnum, TEXT("EBoardStatus"), &Z_Registration_Info_UEnum_EBoardStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3092391975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Tetrocube3_h_339868506(TEXT("/Script/Tetrocube3"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Tetrocube3_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Tetrocube3_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
