// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphEditor/Private/GenericGraphAssetEditor/EdNode_GenericGraphEdge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdNode_GenericGraphEdge() {}
// Cross Module References
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UEdNode_GenericGraphEdge_NoRegister();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UEdNode_GenericGraphEdge();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_GenericGraphEditor();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphEdge_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	void UEdNode_GenericGraphEdge::StaticRegisterNativesUEdNode_GenericGraphEdge()
	{
	}
	UClass* Z_Construct_UClass_UEdNode_GenericGraphEdge_NoRegister()
	{
		return UEdNode_GenericGraphEdge::StaticClass();
	}
	struct Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericGraphEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GenericGraphEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GenericGraphAssetEditor/EdNode_GenericGraphEdge.h" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/EdNode_GenericGraphEdge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::NewProp_GenericGraphEdge_MetaData[] = {
		{ "Category", "GenericGraph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/EdNode_GenericGraphEdge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::NewProp_GenericGraphEdge = { "GenericGraphEdge", nullptr, (EPropertyFlags)0x00120000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdNode_GenericGraphEdge, GenericGraphEdge), Z_Construct_UClass_UGenericGraphEdge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::NewProp_GenericGraphEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::NewProp_GenericGraphEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/EdNode_GenericGraphEdge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdNode_GenericGraphEdge, Graph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::NewProp_Graph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::NewProp_GenericGraphEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::NewProp_Graph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdNode_GenericGraphEdge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::ClassParams = {
		&UEdNode_GenericGraphEdge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdNode_GenericGraphEdge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdNode_GenericGraphEdge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdNode_GenericGraphEdge, 3358521321);
	template<> GENERICGRAPHEDITOR_API UClass* StaticClass<UEdNode_GenericGraphEdge>()
	{
		return UEdNode_GenericGraphEdge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdNode_GenericGraphEdge(Z_Construct_UClass_UEdNode_GenericGraphEdge, &UEdNode_GenericGraphEdge::StaticClass, TEXT("/Script/GenericGraphEditor"), TEXT("UEdNode_GenericGraphEdge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdNode_GenericGraphEdge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
