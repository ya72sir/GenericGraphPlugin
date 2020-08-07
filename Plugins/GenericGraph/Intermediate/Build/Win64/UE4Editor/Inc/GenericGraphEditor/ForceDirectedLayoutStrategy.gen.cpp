// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphEditor/Private/AutoLayout/ForceDirectedLayoutStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceDirectedLayoutStrategy() {}
// Cross Module References
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UForceDirectedLayoutStrategy_NoRegister();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UForceDirectedLayoutStrategy();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UAutoLayoutStrategy();
	UPackage* Z_Construct_UPackage__Script_GenericGraphEditor();
// End Cross Module References
	void UForceDirectedLayoutStrategy::StaticRegisterNativesUForceDirectedLayoutStrategy()
	{
	}
	UClass* Z_Construct_UClass_UForceDirectedLayoutStrategy_NoRegister()
	{
		return UForceDirectedLayoutStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UForceDirectedLayoutStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceDirectedLayoutStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutoLayoutStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceDirectedLayoutStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoLayout/ForceDirectedLayoutStrategy.h" },
		{ "ModuleRelativePath", "Private/AutoLayout/ForceDirectedLayoutStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceDirectedLayoutStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceDirectedLayoutStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForceDirectedLayoutStrategy_Statics::ClassParams = {
		&UForceDirectedLayoutStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UForceDirectedLayoutStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UForceDirectedLayoutStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceDirectedLayoutStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForceDirectedLayoutStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForceDirectedLayoutStrategy, 588508669);
	template<> GENERICGRAPHEDITOR_API UClass* StaticClass<UForceDirectedLayoutStrategy>()
	{
		return UForceDirectedLayoutStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceDirectedLayoutStrategy(Z_Construct_UClass_UForceDirectedLayoutStrategy, &UForceDirectedLayoutStrategy::StaticClass, TEXT("/Script/GenericGraphEditor"), TEXT("UForceDirectedLayoutStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceDirectedLayoutStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
