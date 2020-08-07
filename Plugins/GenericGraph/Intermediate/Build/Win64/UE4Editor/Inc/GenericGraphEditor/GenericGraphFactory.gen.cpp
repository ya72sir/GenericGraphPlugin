// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphEditor/Private/GenericGraphFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericGraphFactory() {}
// Cross Module References
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UGenericGraphFactory_NoRegister();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UGenericGraphFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_GenericGraphEditor();
// End Cross Module References
	void UGenericGraphFactory::StaticRegisterNativesUGenericGraphFactory()
	{
	}
	UClass* Z_Construct_UClass_UGenericGraphFactory_NoRegister()
	{
		return UGenericGraphFactory::StaticClass();
	}
	struct Z_Construct_UClass_UGenericGraphFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericGraphFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GenericGraphFactory.h" },
		{ "ModuleRelativePath", "Private/GenericGraphFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericGraphFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericGraphFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenericGraphFactory_Statics::ClassParams = {
		&UGenericGraphFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenericGraphFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericGraphFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenericGraphFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenericGraphFactory, 2857365815);
	template<> GENERICGRAPHEDITOR_API UClass* StaticClass<UGenericGraphFactory>()
	{
		return UGenericGraphFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericGraphFactory(Z_Construct_UClass_UGenericGraphFactory, &UGenericGraphFactory::StaticClass, TEXT("/Script/GenericGraphEditor"), TEXT("UGenericGraphFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericGraphFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
