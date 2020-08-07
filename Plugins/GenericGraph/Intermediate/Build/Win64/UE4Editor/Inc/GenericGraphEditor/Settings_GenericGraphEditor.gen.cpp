// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphEditor/Private/GenericGraphAssetEditor/Settings_GenericGraphEditor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettings_GenericGraphEditor() {}
// Cross Module References
	GENERICGRAPHEDITOR_API UEnum* Z_Construct_UEnum_GenericGraphEditor_EAutoLayoutStrategy();
	UPackage* Z_Construct_UPackage__Script_GenericGraphEditor();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UGenericGraphEditorSettings_NoRegister();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UGenericGraphEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAutoLayoutStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GenericGraphEditor_EAutoLayoutStrategy, Z_Construct_UPackage__Script_GenericGraphEditor(), TEXT("EAutoLayoutStrategy"));
		}
		return Singleton;
	}
	template<> GENERICGRAPHEDITOR_API UEnum* StaticEnum<EAutoLayoutStrategy>()
	{
		return EAutoLayoutStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutoLayoutStrategy(EAutoLayoutStrategy_StaticEnum, TEXT("/Script/GenericGraphEditor"), TEXT("EAutoLayoutStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GenericGraphEditor_EAutoLayoutStrategy_Hash() { return 1923422988U; }
	UEnum* Z_Construct_UEnum_GenericGraphEditor_EAutoLayoutStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGraphEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutoLayoutStrategy"), 0, Get_Z_Construct_UEnum_GenericGraphEditor_EAutoLayoutStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutoLayoutStrategy::Tree", (int64)EAutoLayoutStrategy::Tree },
				{ "EAutoLayoutStrategy::ForceDirected", (int64)EAutoLayoutStrategy::ForceDirected },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ForceDirected.Name", "EAutoLayoutStrategy::ForceDirected" },
				{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/Settings_GenericGraphEditor.h" },
				{ "Tree.Name", "EAutoLayoutStrategy::Tree" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GenericGraphEditor,
				nullptr,
				"EAutoLayoutStrategy",
				"EAutoLayoutStrategy",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UGenericGraphEditorSettings::StaticRegisterNativesUGenericGraphEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UGenericGraphEditorSettings_NoRegister()
	{
		return UGenericGraphEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGenericGraphEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDownRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDownRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitTemperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitTemperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomInit_MetaData[];
#endif
		static void NewProp_bRandomInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstPassOnly_MetaData[];
#endif
		static void NewProp_bFirstPassOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstPassOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIteration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxIteration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoLayoutStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoLayoutStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoLayoutStrategy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OptimalDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericGraphEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GenericGraphAssetEditor/Settings_GenericGraphEditor.h" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/Settings_GenericGraphEditor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_CoolDownRate_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/Settings_GenericGraphEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_CoolDownRate = { "CoolDownRate", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphEditorSettings, CoolDownRate), METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_CoolDownRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_CoolDownRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_InitTemperature_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/Settings_GenericGraphEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_InitTemperature = { "InitTemperature", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphEditorSettings, InitTemperature), METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_InitTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_InitTemperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bRandomInit_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/Settings_GenericGraphEditor.h" },
	};
#endif
	void Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bRandomInit_SetBit(void* Obj)
	{
		((UGenericGraphEditorSettings*)Obj)->bRandomInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bRandomInit = { "bRandomInit", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGenericGraphEditorSettings), &Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bRandomInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bRandomInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bRandomInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bFirstPassOnly_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/Settings_GenericGraphEditor.h" },
	};
#endif
	void Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bFirstPassOnly_SetBit(void* Obj)
	{
		((UGenericGraphEditorSettings*)Obj)->bFirstPassOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bFirstPassOnly = { "bFirstPassOnly", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGenericGraphEditorSettings), &Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bFirstPassOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bFirstPassOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bFirstPassOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_MaxIteration_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/Settings_GenericGraphEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_MaxIteration = { "MaxIteration", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphEditorSettings, MaxIteration), METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_MaxIteration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_MaxIteration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/Settings_GenericGraphEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy = { "AutoLayoutStrategy", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphEditorSettings, AutoLayoutStrategy), Z_Construct_UEnum_GenericGraphEditor_EAutoLayoutStrategy, METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_OptimalDistance_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/Settings_GenericGraphEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_OptimalDistance = { "OptimalDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphEditorSettings, OptimalDistance), METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_OptimalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_OptimalDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenericGraphEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_CoolDownRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_InitTemperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bRandomInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_bFirstPassOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_MaxIteration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphEditorSettings_Statics::NewProp_OptimalDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericGraphEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericGraphEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenericGraphEditorSettings_Statics::ClassParams = {
		&UGenericGraphEditorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenericGraphEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericGraphEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenericGraphEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenericGraphEditorSettings, 2851150133);
	template<> GENERICGRAPHEDITOR_API UClass* StaticClass<UGenericGraphEditorSettings>()
	{
		return UGenericGraphEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericGraphEditorSettings(Z_Construct_UClass_UGenericGraphEditorSettings, &UGenericGraphEditorSettings::StaticClass, TEXT("/Script/GenericGraphEditor"), TEXT("UGenericGraphEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericGraphEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
