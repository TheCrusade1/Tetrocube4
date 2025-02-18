// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tetrocube3.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETROCUBE3_Tetrocube3_generated_h
#error "Tetrocube3.generated.h already included, missing '#pragma once' in Tetrocube3.h"
#endif
#define TETROCUBE3_Tetrocube3_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Tetrocube3_h


#define FOREACH_ENUM_EBOARDSTATUS(op) \
	op(EBoardStatus::EBS_Free) \
	op(EBoardStatus::EBS_Moving) \
	op(EBoardStatus::EBS_Scanning) \
	op(EBoardStatus::EBS_Rotate) \
	op(EBoardStatus::EBS_Rotating) \
	op(EBoardStatus::EBS_Switching) \
	op(EBoardStatus::EBS_Dropping) \
	op(EBoardStatus::EBS_DropFinished) 

enum class EBoardStatus : uint8;
template<> struct TIsUEnumClass<EBoardStatus> { enum { Value = true }; };
template<> TETROCUBE3_API UEnum* StaticEnum<EBoardStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
