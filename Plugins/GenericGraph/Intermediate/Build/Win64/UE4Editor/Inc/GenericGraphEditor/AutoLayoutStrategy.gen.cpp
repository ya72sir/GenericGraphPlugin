// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphEditor/Private/AutoLayout/AutoLayoutStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoLayoutStrategy() {}
// Cross Module References
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UAutoLayoutStrategy_NoRegister();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UAutoLayoutStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GenericGraphEditor();
// End Cross Module References
	void UAutoLayoutStrategy::StaticRegisterNativesUAutoLayoutStrategy()
	{
	}
	UClass* Z_Construct_UClass_UAutoLayoutStrategy_NoRegister()
	{
		return UAutoLayoutStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UAutoLayoutStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoLayoutStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoLayoutStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoLayout/AutoLayoutStrategy.h" },
		{ "ModuleRelativePath", "Private/AutoLayout/AutoLayoutStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoLayoutStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoLayoutStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoLayoutStrategy_Statics::ClassParams = {
		&UAutoLayoutStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoLayoutStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoLayoutStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoLayoutStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoLayoutStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoLayoutStrategy, 3164769288);
	template<> GENERICGRAPHEDITOR_API UClass* StaticClass<UAutoLayoutStrategy>()
	{
		return UAutoLayoutStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoLayoutStrategy(Z_Construct_UClass_UAutoLayoutStrategy, &UAutoLayoutStrategy::StaticClass, TEXT("/Script/GenericGraphEditor"), TEXT("UAutoLayoutStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoLayoutStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
