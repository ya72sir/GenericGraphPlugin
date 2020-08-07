// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphEditor/Private/GenericGraphAssetEditor/AssetGraphSchema_GenericGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetGraphSchema_GenericGraph() {}
// Cross Module References
	GENERICGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge();
	UPackage* Z_Construct_UPackage__Script_GenericGraphEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	GENERICGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UAssetGraphSchema_GenericGraph_NoRegister();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UAssetGraphSchema_GenericGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FAssetSchemaAction_GenericGraph_NewEdge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGRAPHEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge, Z_Construct_UPackage__Script_GenericGraphEditor(), TEXT("AssetSchemaAction_GenericGraph_NewEdge"), sizeof(FAssetSchemaAction_GenericGraph_NewEdge), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Hash());
	}
	return Singleton;
}
template<> GENERICGRAPHEDITOR_API UScriptStruct* StaticStruct<FAssetSchemaAction_GenericGraph_NewEdge>()
{
	return FAssetSchemaAction_GenericGraph_NewEdge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge(FAssetSchemaAction_GenericGraph_NewEdge::StaticStruct, TEXT("/Script/GenericGraphEditor"), TEXT("AssetSchemaAction_GenericGraph_NewEdge"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGraphEditor_StaticRegisterNativesFAssetSchemaAction_GenericGraph_NewEdge
{
	FScriptStruct_GenericGraphEditor_StaticRegisterNativesFAssetSchemaAction_GenericGraph_NewEdge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetSchemaAction_GenericGraph_NewEdge")),new UScriptStruct::TCppStructOps<FAssetSchemaAction_GenericGraph_NewEdge>);
	}
} ScriptStruct_GenericGraphEditor_StaticRegisterNativesFAssetSchemaAction_GenericGraph_NewEdge;
	struct Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/AssetGraphSchema_GenericGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetSchemaAction_GenericGraph_NewEdge>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AssetSchemaAction_GenericGraph_NewEdge",
		sizeof(FAssetSchemaAction_GenericGraph_NewEdge),
		alignof(FAssetSchemaAction_GenericGraph_NewEdge),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGraphEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetSchemaAction_GenericGraph_NewEdge"), sizeof(FAssetSchemaAction_GenericGraph_NewEdge), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewEdge_Hash() { return 4212455229U; }
class UScriptStruct* FAssetSchemaAction_GenericGraph_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GENERICGRAPHEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode, Z_Construct_UPackage__Script_GenericGraphEditor(), TEXT("AssetSchemaAction_GenericGraph_NewNode"), sizeof(FAssetSchemaAction_GenericGraph_NewNode), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Hash());
	}
	return Singleton;
}
template<> GENERICGRAPHEDITOR_API UScriptStruct* StaticStruct<FAssetSchemaAction_GenericGraph_NewNode>()
{
	return FAssetSchemaAction_GenericGraph_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode(FAssetSchemaAction_GenericGraph_NewNode::StaticStruct, TEXT("/Script/GenericGraphEditor"), TEXT("AssetSchemaAction_GenericGraph_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_GenericGraphEditor_StaticRegisterNativesFAssetSchemaAction_GenericGraph_NewNode
{
	FScriptStruct_GenericGraphEditor_StaticRegisterNativesFAssetSchemaAction_GenericGraph_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetSchemaAction_GenericGraph_NewNode")),new UScriptStruct::TCppStructOps<FAssetSchemaAction_GenericGraph_NewNode>);
	}
} ScriptStruct_GenericGraphEditor_StaticRegisterNativesFAssetSchemaAction_GenericGraph_NewNode;
	struct Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/AssetGraphSchema_GenericGraph.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetSchemaAction_GenericGraph_NewNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AssetSchemaAction_GenericGraph_NewNode",
		sizeof(FAssetSchemaAction_GenericGraph_NewNode),
		alignof(FAssetSchemaAction_GenericGraph_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GenericGraphEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetSchemaAction_GenericGraph_NewNode"), sizeof(FAssetSchemaAction_GenericGraph_NewNode), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_GenericGraph_NewNode_Hash() { return 3351512760U; }
	void UAssetGraphSchema_GenericGraph::StaticRegisterNativesUAssetGraphSchema_GenericGraph()
	{
	}
	UClass* Z_Construct_UClass_UAssetGraphSchema_GenericGraph_NoRegister()
	{
		return UAssetGraphSchema_GenericGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAssetGraphSchema_GenericGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetGraphSchema_GenericGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGraphSchema_GenericGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GenericGraphAssetEditor/AssetGraphSchema_GenericGraph.h" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/AssetGraphSchema_GenericGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetGraphSchema_GenericGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetGraphSchema_GenericGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetGraphSchema_GenericGraph_Statics::ClassParams = {
		&UAssetGraphSchema_GenericGraph::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetGraphSchema_GenericGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGraphSchema_GenericGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetGraphSchema_GenericGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetGraphSchema_GenericGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetGraphSchema_GenericGraph, 1169131133);
	template<> GENERICGRAPHEDITOR_API UClass* StaticClass<UAssetGraphSchema_GenericGraph>()
	{
		return UAssetGraphSchema_GenericGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetGraphSchema_GenericGraph(Z_Construct_UClass_UAssetGraphSchema_GenericGraph, &UAssetGraphSchema_GenericGraph::StaticClass, TEXT("/Script/GenericGraphEditor"), TEXT("UAssetGraphSchema_GenericGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetGraphSchema_GenericGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
