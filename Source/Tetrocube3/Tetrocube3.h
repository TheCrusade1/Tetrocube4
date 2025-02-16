// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBoardStatus : uint8 {
	EBS_Free,
	EBS_Moving,
	EBS_Scanning,
	EBS_Rotate,
	EBS_Rotating,
	EBS_Switching,
	EBS_Dropping,
	EBS_DropFinished
};