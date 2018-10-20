// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FIT2097_AAA2Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFIT2097_AAA2Character() {}
// Cross Module References
	FIT2097_AAA2_API UClass* Z_Construct_UClass_AFIT2097_AAA2Character_NoRegister();
	FIT2097_AAA2_API UClass* Z_Construct_UClass_AFIT2097_AAA2Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FIT2097_AAA2();
	FIT2097_AAA2_API UFunction* Z_Construct_UFunction_AFIT2097_AAA2Character_getHealth();
	FIT2097_AAA2_API UFunction* Z_Construct_UFunction_AFIT2097_AAA2Character_getHealthInText();
	FIT2097_AAA2_API UFunction* Z_Construct_UFunction_AFIT2097_AAA2Character_PlayFlash();
	FIT2097_AAA2_API UFunction* Z_Construct_UFunction_AFIT2097_AAA2Character_SetDamageState();
	FIT2097_AAA2_API UFunction* Z_Construct_UFunction_AFIT2097_AAA2Character_UpdateHealth();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FIT2097_AAA2_API UClass* Z_Construct_UClass_AFIT2097_AAA2Projectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AFIT2097_AAA2Character::StaticRegisterNativesAFIT2097_AAA2Character()
	{
		UClass* Class = AFIT2097_AAA2Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getHealth", &AFIT2097_AAA2Character::execgetHealth },
			{ "getHealthInText", &AFIT2097_AAA2Character::execgetHealthInText },
			{ "PlayFlash", &AFIT2097_AAA2Character::execPlayFlash },
			{ "SetDamageState", &AFIT2097_AAA2Character::execSetDamageState },
			{ "UpdateHealth", &AFIT2097_AAA2Character::execUpdateHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AFIT2097_AAA2Character_getHealth()
	{
		struct FIT2097_AAA2Character_eventgetHealth_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FIT2097_AAA2Character_eventgetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Get health" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFIT2097_AAA2Character, "getHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FIT2097_AAA2Character_eventgetHealth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFIT2097_AAA2Character_getHealthInText()
	{
		struct FIT2097_AAA2Character_eventgetHealthInText_Parms
		{
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FIT2097_AAA2Character_eventgetHealthInText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Get health in text" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFIT2097_AAA2Character, "getHealthInText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FIT2097_AAA2Character_eventgetHealthInText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFIT2097_AAA2Character_PlayFlash()
	{
		struct FIT2097_AAA2Character_eventPlayFlash_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((FIT2097_AAA2Character_eventPlayFlash_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FIT2097_AAA2Character_eventPlayFlash_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Play red flash" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFIT2097_AAA2Character, "PlayFlash", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FIT2097_AAA2Character_eventPlayFlash_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFIT2097_AAA2Character_SetDamageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Set damage state" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFIT2097_AAA2Character, "SetDamageState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFIT2097_AAA2Character_UpdateHealth()
	{
		struct FIT2097_AAA2Character_eventUpdateHealth_Parms
		{
			float HealthChange;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthChange = { UE4CodeGen_Private::EPropertyClass::Float, "HealthChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FIT2097_AAA2Character_eventUpdateHealth_Parms, HealthChange), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthChange,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFIT2097_AAA2Character, "UpdateHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FIT2097_AAA2Character_eventUpdateHealth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFIT2097_AAA2Character_NoRegister()
	{
		return AFIT2097_AAA2Character::StaticClass();
	}
	UClass* Z_Construct_UClass_AFIT2097_AAA2Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_FIT2097_AAA2,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AFIT2097_AAA2Character_getHealth, "getHealth" }, // 615437554
				{ &Z_Construct_UFunction_AFIT2097_AAA2Character_getHealthInText, "getHealthInText" }, // 43426564
				{ &Z_Construct_UFunction_AFIT2097_AAA2Character_PlayFlash, "PlayFlash" }, // 3350164313
				{ &Z_Construct_UFunction_AFIT2097_AAA2Character_SetDamageState, "SetDamageState" }, // 2958162344
				{ &Z_Construct_UFunction_AFIT2097_AAA2Character_UpdateHealth, "UpdateHealth" }, // 3640015125
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "FIT2097_AAA2Character.h" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_redFlash_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
			};
#endif
			auto NewProp_redFlash_SetBit = [](void* Obj){ ((AFIT2097_AAA2Character*)Obj)->redFlash = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_redFlash = { UE4CodeGen_Private::EPropertyClass::Bool, "redFlash", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFIT2097_AAA2Character), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_redFlash_SetBit)>::SetBit, METADATA_PARAMS(NewProp_redFlash_MetaData, ARRAY_COUNT(NewProp_redFlash_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPercentage_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "HealthPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, HealthPercentage), METADATA_PARAMS(NewProp_HealthPercentage_MetaData, ARRAY_COUNT(NewProp_HealthPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, Health), METADATA_PARAMS(NewProp_Health_MetaData, ARRAY_COUNT(NewProp_Health_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullHealth_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "character related" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullHealth = { UE4CodeGen_Private::EPropertyClass::Float, "FullHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, FullHealth), METADATA_PARAMS(NewProp_FullHealth_MetaData, ARRAY_COUNT(NewProp_FullHealth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_comboCheck_MetaData[] = {
				{ "Category", "BinaryCombo" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "for key check" },
			};
#endif
			auto NewProp_comboCheck_SetBit = [](void* Obj){ ((AFIT2097_AAA2Character*)Obj)->comboCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_comboCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "comboCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFIT2097_AAA2Character), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_comboCheck_SetBit)>::SetBit, METADATA_PARAMS(NewProp_comboCheck_MetaData, ARRAY_COUNT(NewProp_comboCheck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "for key check" },
			};
#endif
			auto NewProp_key_SetBit = [](void* Obj){ ((AFIT2097_AAA2Character*)Obj)->key = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_key = { UE4CodeGen_Private::EPropertyClass::Bool, "key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFIT2097_AAA2Character), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_key_SetBit)>::SetBit, METADATA_PARAMS(NewProp_key_MetaData, ARRAY_COUNT(NewProp_key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fuse_MetaData[] = {
				{ "Category", "Fuse" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "for fuse check" },
			};
#endif
			auto NewProp_fuse_SetBit = [](void* Obj){ ((AFIT2097_AAA2Character*)Obj)->fuse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fuse = { UE4CodeGen_Private::EPropertyClass::Bool, "fuse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFIT2097_AAA2Character), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_fuse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_fuse_MetaData, ARRAY_COUNT(NewProp_fuse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Whether to use motion controller location for aiming." },
			};
#endif
			auto NewProp_bUsingMotionControllers_SetBit = [](void* Obj){ ((AFIT2097_AAA2Character*)Obj)->bUsingMotionControllers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsingMotionControllers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AFIT2097_AAA2Character), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsingMotionControllers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsingMotionControllers_MetaData, ARRAY_COUNT(NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "AnimMontage to play each time we fire" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "FireAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_FireAnimation_MetaData, ARRAY_COUNT(NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Sound to play each time we fire" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_FireSound_MetaData, ARRAY_COUNT(NewProp_FireSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Projectile class to spawn" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, ProjectileClass), Z_Construct_UClass_AFIT2097_AAA2Projectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileClass_MetaData, ARRAY_COUNT(NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Gun muzzle's offset from the characters location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "GunOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_GunOffset_MetaData, ARRAY_COUNT(NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, BaseLookUpRate), METADATA_PARAMS(NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, BaseTurnRate), METADATA_PARAMS(NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "FIT2097_AAA2Character" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Motion controller (left hand)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "L_MotionController", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_L_MotionController_MetaData, ARRAY_COUNT(NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "FIT2097_AAA2Character" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Motion controller (right hand)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "R_MotionController", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_R_MotionController_MetaData, ARRAY_COUNT(NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "First person camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "VR_MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_VR_MuzzleLocation_MetaData, ARRAY_COUNT(NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "VR_Gun", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_VR_Gun_MetaData, ARRAY_COUNT(NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "FP_MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_FP_MuzzleLocation_MetaData, ARRAY_COUNT(NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "FP_Gun", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_FP_Gun_MetaData, ARRAY_COUNT(NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FIT2097_AAA2Character.h" },
				{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh1P", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2Character, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh1P_MetaData, ARRAY_COUNT(NewProp_Mesh1P_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_redFlash,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullHealth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_comboCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fuse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsingMotionControllers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GunOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_L_MotionController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_R_MotionController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstPersonCameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VR_MuzzleLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VR_Gun,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FP_MuzzleLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FP_Gun,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh1P,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFIT2097_AAA2Character>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFIT2097_AAA2Character::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFIT2097_AAA2Character, 3634947253);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFIT2097_AAA2Character(Z_Construct_UClass_AFIT2097_AAA2Character, &AFIT2097_AAA2Character::StaticClass, TEXT("/Script/FIT2097_AAA2"), TEXT("AFIT2097_AAA2Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFIT2097_AAA2Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
