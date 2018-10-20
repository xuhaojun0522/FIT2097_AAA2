// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FIT2097_AAA2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFIT2097_AAA2GameMode() {}
// Cross Module References
	FIT2097_AAA2_API UEnum* Z_Construct_UEnum_FIT2097_AAA2_EGamePlayState();
	UPackage* Z_Construct_UPackage__Script_FIT2097_AAA2();
	FIT2097_AAA2_API UClass* Z_Construct_UClass_AFIT2097_AAA2GameMode_NoRegister();
	FIT2097_AAA2_API UClass* Z_Construct_UClass_AFIT2097_AAA2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FIT2097_AAA2_API UFunction* Z_Construct_UFunction_AFIT2097_AAA2GameMode_GetCurrentState();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EGamePlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FIT2097_AAA2_EGamePlayState, Z_Construct_UPackage__Script_FIT2097_AAA2(), TEXT("EGamePlayState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGamePlayState(EGamePlayState_StaticEnum, TEXT("/Script/FIT2097_AAA2"), TEXT("EGamePlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FIT2097_AAA2_EGamePlayState_CRC() { return 4095308829U; }
	UEnum* Z_Construct_UEnum_FIT2097_AAA2_EGamePlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FIT2097_AAA2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGamePlayState"), 0, Get_Z_Construct_UEnum_FIT2097_AAA2_EGamePlayState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGamePlayState::EPlaying", (int64)EGamePlayState::EPlaying },
				{ "EGamePlayState::EGameOver", (int64)EGamePlayState::EGameOver },
				{ "EGamePlayState::EUnknown", (int64)EGamePlayState::EUnknown },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "FIT2097_AAA2GameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FIT2097_AAA2,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGamePlayState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGamePlayState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AFIT2097_AAA2GameMode::StaticRegisterNativesAFIT2097_AAA2GameMode()
	{
		UClass* Class = AFIT2097_AAA2GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &AFIT2097_AAA2GameMode::execGetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AFIT2097_AAA2GameMode_GetCurrentState()
	{
		struct FIT2097_AAA2GameMode_eventGetCurrentState_Parms
		{
			EGamePlayState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FIT2097_AAA2GameMode_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_FIT2097_AAA2_EGamePlayState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Int, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "FIT2097_AAA2GameMode.h" },
				{ "ToolTip", "Returns the current playing state" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFIT2097_AAA2GameMode, "GetCurrentState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FIT2097_AAA2GameMode_eventGetCurrentState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFIT2097_AAA2GameMode_NoRegister()
	{
		return AFIT2097_AAA2GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFIT2097_AAA2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_FIT2097_AAA2,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AFIT2097_AAA2GameMode_GetCurrentState, "GetCurrentState" }, // 2224452224
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "FIT2097_AAA2GameMode.h" },
				{ "ModuleRelativePath", "FIT2097_AAA2GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
				{ "Category", "Health" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FIT2097_AAA2GameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2GameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_CurrentWidget_MetaData, ARRAY_COUNT(NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "FIT2097_AAA2GameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "HUDWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(AFIT2097_AAA2GameMode, HUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_HUDWidgetClass_MetaData, ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HUDWidgetClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFIT2097_AAA2GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFIT2097_AAA2GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFIT2097_AAA2GameMode, 2661148818);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFIT2097_AAA2GameMode(Z_Construct_UClass_AFIT2097_AAA2GameMode, &AFIT2097_AAA2GameMode::StaticClass, TEXT("/Script/FIT2097_AAA2"), TEXT("AFIT2097_AAA2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFIT2097_AAA2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
