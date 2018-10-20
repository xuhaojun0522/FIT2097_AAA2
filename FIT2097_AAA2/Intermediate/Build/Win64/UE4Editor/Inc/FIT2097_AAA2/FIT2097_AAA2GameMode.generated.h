// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGamePlayState : int32;
#ifdef FIT2097_AAA2_FIT2097_AAA2GameMode_generated_h
#error "FIT2097_AAA2GameMode.generated.h already included, missing '#pragma once' in FIT2097_AAA2GameMode.h"
#endif
#define FIT2097_AAA2_FIT2097_AAA2GameMode_generated_h

#define FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFIT2097_AAA2GameMode(); \
	friend FIT2097_AAA2_API class UClass* Z_Construct_UClass_AFIT2097_AAA2GameMode(); \
public: \
	DECLARE_CLASS(AFIT2097_AAA2GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/FIT2097_AAA2"), FIT2097_AAA2_API) \
	DECLARE_SERIALIZER(AFIT2097_AAA2GameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFIT2097_AAA2GameMode(); \
	friend FIT2097_AAA2_API class UClass* Z_Construct_UClass_AFIT2097_AAA2GameMode(); \
public: \
	DECLARE_CLASS(AFIT2097_AAA2GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/FIT2097_AAA2"), FIT2097_AAA2_API) \
	DECLARE_SERIALIZER(AFIT2097_AAA2GameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIT2097_AAA2_API AFIT2097_AAA2GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFIT2097_AAA2GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIT2097_AAA2_API, AFIT2097_AAA2GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFIT2097_AAA2GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIT2097_AAA2_API AFIT2097_AAA2GameMode(AFIT2097_AAA2GameMode&&); \
	FIT2097_AAA2_API AFIT2097_AAA2GameMode(const AFIT2097_AAA2GameMode&); \
public:


#define FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIT2097_AAA2_API AFIT2097_AAA2GameMode(AFIT2097_AAA2GameMode&&); \
	FIT2097_AAA2_API AFIT2097_AAA2GameMode(const AFIT2097_AAA2GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIT2097_AAA2_API, AFIT2097_AAA2GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFIT2097_AAA2GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFIT2097_AAA2GameMode)


#define FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_PRIVATE_PROPERTY_OFFSET
#define FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_19_PROLOG
#define FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_RPC_WRAPPERS \
	FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_INCLASS \
	FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_INCLASS_NO_PURE_DECLS \
	FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FIT2097_AAA2_Source_FIT2097_AAA2_FIT2097_AAA2GameMode_h


#define FOREACH_ENUM_EGAMEPLAYSTATE(op) \
	op(EGamePlayState::EPlaying) \
	op(EGamePlayState::EGameOver) \
	op(EGamePlayState::EUnknown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
