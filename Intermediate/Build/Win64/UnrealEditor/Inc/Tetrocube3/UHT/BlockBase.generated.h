// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlockBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TETROCUBE3_BlockBase_generated_h
#error "BlockBase.generated.h already included, missing '#pragma once' in BlockBase.h"
#endif
#define TETROCUBE3_BlockBase_generated_h

#define FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_SPARSE_DATA
#define FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnSetColliding); \
	DECLARE_FUNCTION(execSetColliding);


#define FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_ACCESSORS
#define FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlockBase(); \
	friend struct Z_Construct_UClass_ABlockBase_Statics; \
public: \
	DECLARE_CLASS(ABlockBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tetrocube3"), NO_API) \
	DECLARE_SERIALIZER(ABlockBase)


#define FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlockBase(ABlockBase&&); \
	NO_API ABlockBase(const ABlockBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlockBase) \
	NO_API virtual ~ABlockBase();


#define FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_11_PROLOG
#define FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_SPARSE_DATA \
	FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_ACCESSORS \
	FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETROCUBE3_API UClass* StaticClass<class ABlockBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_5_3_Projects_Tetrocube3_Source_Tetrocube3_Public_BlockBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
