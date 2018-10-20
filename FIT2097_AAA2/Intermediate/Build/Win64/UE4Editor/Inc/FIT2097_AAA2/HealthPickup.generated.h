// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FIT2097_AAA2_HealthPickup_generated_h
#error "HealthPickup.generated.h already included, missing '#pragma once' in HealthPickup.h"
#endif
#define FIT2097_AAA2_HealthPickup_generated_h

#define FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthPickup(); \
	friend FIT2097_AAA2_API class UClass* Z_Construct_UClass_AHealthPickup(); \
public: \
	DECLARE_CLASS(AHealthPickup, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097_AAA2"), NO_API) \
	DECLARE_SERIALIZER(AHealthPickup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHealthPickup(); \
	friend FIT2097_AAA2_API class UClass* Z_Construct_UClass_AHealthPickup(); \
public: \
	DECLARE_CLASS(AHealthPickup, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097_AAA2"), NO_API) \
	DECLARE_SERIALIZER(AHealthPickup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealthPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPickup(AHealthPickup&&); \
	NO_API AHealthPickup(const AHealthPickup&); \
public:


#define FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPickup(AHealthPickup&&); \
	NO_API AHealthPickup(const AHealthPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthPickup)


#define FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_PRIVATE_PROPERTY_OFFSET
#define FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_9_PROLOG
#define FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_PRIVATE_PROPERTY_OFFSET \
	FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_RPC_WRAPPERS \
	FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_INCLASS \
	FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_PRIVATE_PROPERTY_OFFSET \
	FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_INCLASS_NO_PURE_DECLS \
	FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FIT2097_AAA2_Source_FIT2097_AAA2_HealthPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
