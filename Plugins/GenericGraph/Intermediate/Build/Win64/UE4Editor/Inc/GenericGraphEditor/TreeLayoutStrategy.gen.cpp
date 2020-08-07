// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphEditor/Private/AutoLayout/TreeLayoutStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeLayoutStrategy() {}
// Cross Module References
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UTreeLayoutStrategy_NoRegister();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UTreeLayoutStrategy();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UAutoLayoutStrategy();
	UPackage* Z_Construct_UPackage__Script_GenericGraphEditor();
// End Cross Module References
	void UTreeLayoutStrategy::StaticRegisterNativesUTreeLayoutStrategy()
	{
	}
	UClass* Z_Construct_UClass_UTreeLayoutStrategy_NoRegister()
	{
		return UTreeLayoutStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UTreeLayoutStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreeLayoutStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutoLayoutStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeLayoutStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoLayout/TreeLayoutStrategy.h" },
		{ "ModuleRelativePath", "Private/AutoLayout/TreeLayoutStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreeLayoutStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeLayoutStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTreeLayoutStrategy_Statics::ClassParams = {
		&UTreeLayoutStrategy::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTreeLayoutStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeLayoutStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreeLayoutStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTreeLayoutStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTreeLayoutStrategy, 2207266593);
	template<> GENERICGRAPHEDITOR_API UClass* StaticClass<UTreeLayoutStrategy>()
	{
		return UTreeLayoutStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTreeLayoutStrategy(Z_Construct_UClass_UTreeLayoutStrategy, &UTreeLayoutStrategy::StaticClass, TEXT("/Script/GenericGraphEditor"), TEXT("UTreeLayoutStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeLayoutStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
