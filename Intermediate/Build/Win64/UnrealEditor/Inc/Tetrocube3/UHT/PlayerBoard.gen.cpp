// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tetrocube3/Public/PlayerBoard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBoard() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	TETROCUBE3_API UClass* Z_Construct_UClass_ABlockBase_NoRegister();
	TETROCUBE3_API UClass* Z_Construct_UClass_APlayerBoard();
	TETROCUBE3_API UClass* Z_Construct_UClass_APlayerBoard_NoRegister();
	TETROCUBE3_API UClass* Z_Construct_UClass_ATetrominoBase_NoRegister();
	TETROCUBE3_API UEnum* Z_Construct_UEnum_Tetrocube3_EBoardStatus();
	UPackage* Z_Construct_UPackage__Script_Tetrocube3();
// End Cross Module References
	void APlayerBoard::StaticRegisterNativesAPlayerBoard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerBoard);
	UClass* Z_Construct_UClass_APlayerBoard_NoRegister()
	{
		return APlayerBoard::StaticClass();
	}
	struct Z_Construct_UClass_APlayerBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlocksInPlay_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlocksInPlay_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlocksInPlay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Queue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Queue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Queue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hold_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetrominoInPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TetrominoInPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSliceY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveSliceY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndSlice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndSlice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRaycastCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputRaycastCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoardMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardCam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoardCam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetrominoSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TetrominoSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopCenter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiddleCube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MiddleCube;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_I_Mino_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_I_Mino;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_J_Mino_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_J_Mino;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_L_Mino_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_L_Mino;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_O_Mino_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_O_Mino;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_S_Mino_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_S_Mino;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T_Mino_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_T_Mino;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_Mino_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Z_Mino;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetrominoMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TetrominoMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveTetrominoActionCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveTetrominoActionCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveTetrominoActionTouch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveTetrominoActionTouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitGameAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitGameAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoardStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoardStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tetrocube3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerBoard.h" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_BlocksInPlay_Inner = { "BlocksInPlay", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlockBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_BlocksInPlay_MetaData[] = {
		{ "Category", "GAME DATA" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_BlocksInPlay = { "BlocksInPlay", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, BlocksInPlay), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_BlocksInPlay_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_BlocksInPlay_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_Queue_Inner = { "Queue", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATetrominoBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_Queue_MetaData[] = {
		{ "Category", "GAME DATA" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, Queue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_Queue_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_Queue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_Hold_MetaData[] = {
		{ "Category", "GAME DATA" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_Hold = { "Hold", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, Hold), Z_Construct_UClass_ATetrominoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_Hold_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_Hold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoInPlay_MetaData[] = {
		{ "Category", "GAME DATA" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoInPlay = { "TetrominoInPlay", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, TetrominoInPlay), Z_Construct_UClass_ATetrominoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoInPlay_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoInPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_ActiveSliceY_MetaData[] = {
		{ "Category", "GAME DATA" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_ActiveSliceY = { "ActiveSliceY", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, ActiveSliceY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_ActiveSliceY_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_ActiveSliceY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_EndSlice_MetaData[] = {
		{ "Category", "GAME DATA" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_EndSlice = { "EndSlice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, EndSlice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_EndSlice_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_EndSlice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_timeRemaining_MetaData[] = {
		{ "Category", "GAME DATA" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_timeRemaining = { "timeRemaining", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, timeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_timeRemaining_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_timeRemaining_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_LeftCollision_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attributes for player board\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attributes for player board" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_LeftCollision = { "LeftCollision", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, LeftCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_LeftCollision_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_LeftCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_RightCollision_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_RightCollision = { "RightCollision", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, RightCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_RightCollision_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_RightCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_BottomCollision_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_BottomCollision = { "BottomCollision", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, BottomCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_BottomCollision_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_BottomCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_TopCollision_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_TopCollision = { "TopCollision", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, TopCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_TopCollision_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_TopCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_InputRaycastCollider_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_InputRaycastCollider = { "InputRaycastCollider", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, InputRaycastCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_InputRaycastCollider_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_InputRaycastCollider_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardMesh_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardMesh = { "BoardMesh", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, BoardMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardMesh_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardCam_MetaData[] = {
		{ "Category", "ATTRIBUTES" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardCam = { "BoardCam", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, BoardCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardCam_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardCam_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoSpawn_MetaData[] = {
		{ "Category", "SPAWNS & LOCATIONS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Spawns and Location\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawns and Location" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoSpawn = { "TetrominoSpawn", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, TetrominoSpawn), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoSpawn_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_TopCenter_MetaData[] = {
		{ "Category", "SPAWNS & LOCATIONS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_TopCenter = { "TopCenter", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, TopCenter), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_TopCenter_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_TopCenter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_HoldLocation_MetaData[] = {
		{ "Category", "SPAWNS & LOCATIONS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_HoldLocation = { "HoldLocation", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, HoldLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_HoldLocation_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_HoldLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_MiddleCube_MetaData[] = {
		{ "Category", "SPAWNS & LOCATIONS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_MiddleCube = { "MiddleCube", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, MiddleCube), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_MiddleCube_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_MiddleCube_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_I_Mino_MetaData[] = {
		{ "Category", "TETROMINO TYPES" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blocks Tetrominos\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blocks Tetrominos" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_I_Mino = { "I_Mino", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, I_Mino), Z_Construct_UClass_UClass, Z_Construct_UClass_ATetrominoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_I_Mino_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_I_Mino_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_J_Mino_MetaData[] = {
		{ "Category", "TETROMINO TYPES" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_J_Mino = { "J_Mino", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, J_Mino), Z_Construct_UClass_UClass, Z_Construct_UClass_ATetrominoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_J_Mino_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_J_Mino_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_L_Mino_MetaData[] = {
		{ "Category", "TETROMINO TYPES" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_L_Mino = { "L_Mino", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, L_Mino), Z_Construct_UClass_UClass, Z_Construct_UClass_ATetrominoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_L_Mino_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_L_Mino_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_O_Mino_MetaData[] = {
		{ "Category", "TETROMINO TYPES" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_O_Mino = { "O_Mino", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, O_Mino), Z_Construct_UClass_UClass, Z_Construct_UClass_ATetrominoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_O_Mino_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_O_Mino_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_S_Mino_MetaData[] = {
		{ "Category", "TETROMINO TYPES" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_S_Mino = { "S_Mino", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, S_Mino), Z_Construct_UClass_UClass, Z_Construct_UClass_ATetrominoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_S_Mino_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_S_Mino_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_T_Mino_MetaData[] = {
		{ "Category", "TETROMINO TYPES" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_T_Mino = { "T_Mino", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, T_Mino), Z_Construct_UClass_UClass, Z_Construct_UClass_ATetrominoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_T_Mino_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_T_Mino_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_Z_Mino_MetaData[] = {
		{ "Category", "TETROMINO TYPES" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_Z_Mino = { "Z_Mino", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, Z_Mino), Z_Construct_UClass_UClass, Z_Construct_UClass_ATetrominoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_Z_Mino_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_Z_Mino_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Inputs\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inputs" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoMappingContext = { "TetrominoMappingContext", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, TetrominoMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoMappingContext_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_MoveTetrominoActionCursor_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_MoveTetrominoActionCursor = { "MoveTetrominoActionCursor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, MoveTetrominoActionCursor), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_MoveTetrominoActionCursor_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_MoveTetrominoActionCursor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_MoveTetrominoActionTouch_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_MoveTetrominoActionTouch = { "MoveTetrominoActionTouch", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, MoveTetrominoActionTouch), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_MoveTetrominoActionTouch_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_MoveTetrominoActionTouch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_ExitGameAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_ExitGameAction = { "ExitGameAction", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, ExitGameAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_ExitGameAction_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_ExitGameAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_HoldAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_HoldAction = { "HoldAction", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, HoldAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_HoldAction_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_HoldAction_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardStatus_MetaData[] = {
		{ "Category", "GAME DATA" },
		{ "ModuleRelativePath", "Public/PlayerBoard.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardStatus = { "BoardStatus", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBoard, BoardStatus), Z_Construct_UEnum_Tetrocube3_EBoardStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardStatus_MetaData), Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardStatus_MetaData) }; // 3092391975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_BlocksInPlay_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_BlocksInPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_Queue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_Queue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_Hold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoInPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_ActiveSliceY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_EndSlice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_timeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_LeftCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_RightCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_BottomCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_TopCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_InputRaycastCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardCam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_TopCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_HoldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_MiddleCube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_I_Mino,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_J_Mino,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_L_Mino,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_O_Mino,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_S_Mino,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_T_Mino,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_Z_Mino,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_TetrominoMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_MoveTetrominoActionCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_MoveTetrominoActionTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_ExitGameAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_HoldAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBoard_Statics::NewProp_BoardStatus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerBoard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerBoard_Statics::ClassParams = {
		&APlayerBoard::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerBoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerBoard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBoard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerBoard()
	{
		if (!Z_Registration_Info_UClass_APlayerBoard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerBoard.OuterSingleton, Z_Construct_UClass_APlayerBoard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerBoard.OuterSingleton;
	}
	template<> TETROCUBE3_API UClass* StaticClass<APlayerBoard>()
	{
		return APlayerBoard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerBoard);
	APlayerBoard::~APlayerBoard() {}
	struct Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_PlayerBoard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_PlayerBoard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerBoard, APlayerBoard::StaticClass, TEXT("APlayerBoard"), &Z_Registration_Info_UClass_APlayerBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerBoard), 2039140324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_PlayerBoard_h_2319944216(TEXT("/Script/Tetrocube3"),
		Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_PlayerBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_PlayerBoard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
