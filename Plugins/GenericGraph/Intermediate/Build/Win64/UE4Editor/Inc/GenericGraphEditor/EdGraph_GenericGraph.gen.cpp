// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphEditor/Private/GenericGraphAssetEditor/EdGraph_GenericGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph_GenericGraph() {}
// Cross Module References
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UEdGraph_GenericGraph_NoRegister();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UEdGraph_GenericGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_GenericGraphEditor();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphEdge_NoRegister();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UEdNode_GenericGraphEdge_NoRegister();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphNode_NoRegister();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UEdNode_GenericGraphNode_NoRegister();
// End Cross Module References
	void UEdGraph_GenericGraph::StaticRegisterNativesUEdGraph_GenericGraph()
	{
	}
	UClass* Z_Construct_UClass_UEdGraph_GenericGraph_NoRegister()
	{
		return UEdGraph_GenericGraph::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraph_GenericGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EdgeMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EdgeMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EdgeMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraph_GenericGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_GenericGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GenericGraphAssetEditor/EdGraph_GenericGraph.h" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/EdGraph_GenericGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_EdgeMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/EdGraph_GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_EdgeMap = { "EdgeMap", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraph_GenericGraph, EdgeMap), METADATA_PARAMS(Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_EdgeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_EdgeMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_EdgeMap_Key_KeyProp = { "EdgeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGenericGraphEdge_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_EdgeMap_ValueProp = { "EdgeMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEdNode_GenericGraphEdge_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_NodeMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/EdGraph_GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_NodeMap = { "NodeMap", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraph_GenericGraph, NodeMap), METADATA_PARAMS(Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_NodeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_NodeMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_NodeMap_Key_KeyProp = { "NodeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGenericGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_NodeMap_ValueProp = { "NodeMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEdNode_GenericGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraph_GenericGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_EdgeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_EdgeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_EdgeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_NodeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_NodeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_GenericGraph_Statics::NewProp_NodeMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraph_GenericGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph_GenericGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_GenericGraph_Statics::ClassParams = {
		&UEdGraph_GenericGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraph_GenericGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_GenericGraph_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraph_GenericGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_GenericGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraph_GenericGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdGraph_GenericGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraph_GenericGraph, 2757226319);
	template<> GENERICGRAPHEDITOR_API UClass* StaticClass<UEdGraph_GenericGraph>()
	{
		return UEdGraph_GenericGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraph_GenericGraph(Z_Construct_UClass_UEdGraph_GenericGraph, &UEdGraph_GenericGraph::StaticClass, TEXT("/Script/GenericGraphEditor"), TEXT("UEdGraph_GenericGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph_GenericGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
