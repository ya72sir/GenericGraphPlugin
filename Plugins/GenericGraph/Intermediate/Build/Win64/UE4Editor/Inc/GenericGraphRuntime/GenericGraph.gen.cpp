// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphRuntime/Public/GenericGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericGraph() {}
// Cross Module References
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraph_NoRegister();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GenericGraphRuntime();
	GENERICGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UGenericGraph_GetLevelNum();
	GENERICGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UGenericGraph_GetNodesByLevel();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphNode_NoRegister();
	GENERICGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UGenericGraph_Print();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphEdge_NoRegister();
// End Cross Module References
	void UGenericGraph::StaticRegisterNativesUGenericGraph()
	{
		UClass* Class = UGenericGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevelNum", &UGenericGraph::execGetLevelNum },
			{ "GetNodesByLevel", &UGenericGraph::execGetNodesByLevel },
			{ "Print", &UGenericGraph::execPrint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenericGraph_GetLevelNum_Statics
	{
		struct GenericGraph_eventGetLevelNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGenericGraph_GetLevelNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericGraph_eventGetLevelNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericGraph_GetLevelNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraph_GetLevelNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericGraph_GetLevelNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "GenericGraph" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericGraph_GetLevelNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericGraph, nullptr, "GetLevelNum", nullptr, nullptr, sizeof(GenericGraph_eventGetLevelNum_Parms), Z_Construct_UFunction_UGenericGraph_GetLevelNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraph_GetLevelNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericGraph_GetLevelNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraph_GetLevelNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericGraph_GetLevelNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericGraph_GetLevelNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics
	{
		struct GenericGraph_eventGetNodesByLevel_Parms
		{
			int32 Level;
			TArray<UGenericGraphNode*> Nodes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericGraph_eventGetNodesByLevel_Parms, Nodes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGenericGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericGraph_eventGetNodesByLevel_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "GenericGraph" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericGraph, nullptr, "GetNodesByLevel", nullptr, nullptr, sizeof(GenericGraph_eventGetNodesByLevel_Parms), Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericGraph_GetNodesByLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericGraph_GetNodesByLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenericGraph_Print_Statics
	{
		struct GenericGraph_eventPrint_Parms
		{
			bool ToConsole;
			bool ToScreen;
		};
		static void NewProp_ToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToScreen;
		static void NewProp_ToConsole_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToConsole;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGenericGraph_Print_Statics::NewProp_ToScreen_SetBit(void* Obj)
	{
		((GenericGraph_eventPrint_Parms*)Obj)->ToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenericGraph_Print_Statics::NewProp_ToScreen = { "ToScreen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GenericGraph_eventPrint_Parms), &Z_Construct_UFunction_UGenericGraph_Print_Statics::NewProp_ToScreen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGenericGraph_Print_Statics::NewProp_ToConsole_SetBit(void* Obj)
	{
		((GenericGraph_eventPrint_Parms*)Obj)->ToConsole = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenericGraph_Print_Statics::NewProp_ToConsole = { "ToConsole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GenericGraph_eventPrint_Parms), &Z_Construct_UFunction_UGenericGraph_Print_Statics::NewProp_ToConsole_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericGraph_Print_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraph_Print_Statics::NewProp_ToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraph_Print_Statics::NewProp_ToConsole,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericGraph_Print_Statics::Function_MetaDataParams[] = {
		{ "Category", "GenericGraph" },
		{ "CPP_Default_ToConsole", "true" },
		{ "CPP_Default_ToScreen", "true" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericGraph_Print_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericGraph, nullptr, "Print", nullptr, nullptr, sizeof(GenericGraph_eventPrint_Parms), Z_Construct_UFunction_UGenericGraph_Print_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraph_Print_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericGraph_Print_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraph_Print_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericGraph_Print()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericGraph_Print_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGenericGraph_NoRegister()
	{
		return UGenericGraph::StaticClass();
	}
	struct Z_Construct_UClass_UGenericGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRenameNode_MetaData[];
#endif
		static void NewProp_bCanRenameNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRenameNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EdGraph;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEdgeEnabled_MetaData[];
#endif
		static void NewProp_bEdgeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEdgeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EdgeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NodeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenericGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenericGraph_GetLevelNum, "GetLevelNum" }, // 548497670
		{ &Z_Construct_UFunction_UGenericGraph_GetNodesByLevel, "GetNodesByLevel" }, // 1002209549
		{ &Z_Construct_UFunction_UGenericGraph_Print, "Print" }, // 2252888048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GenericGraph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraph_Statics::NewProp_bCanRenameNode_MetaData[] = {
		{ "Category", "GenericGraph_Editor" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	void Z_Construct_UClass_UGenericGraph_Statics::NewProp_bCanRenameNode_SetBit(void* Obj)
	{
		((UGenericGraph*)Obj)->bCanRenameNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenericGraph_Statics::NewProp_bCanRenameNode = { "bCanRenameNode", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGenericGraph), &Z_Construct_UClass_UGenericGraph_Statics::NewProp_bCanRenameNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenericGraph_Statics::NewProp_bCanRenameNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraph_Statics::NewProp_bCanRenameNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraph_Statics::NewProp_EdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericGraph_Statics::NewProp_EdGraph = { "EdGraph", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraph, EdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenericGraph_Statics::NewProp_EdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraph_Statics::NewProp_EdGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraph_Statics::NewProp_bEdgeEnabled_MetaData[] = {
		{ "Category", "GenericGraph" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	void Z_Construct_UClass_UGenericGraph_Statics::NewProp_bEdgeEnabled_SetBit(void* Obj)
	{
		((UGenericGraph*)Obj)->bEdgeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenericGraph_Statics::NewProp_bEdgeEnabled = { "bEdgeEnabled", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGenericGraph), &Z_Construct_UClass_UGenericGraph_Statics::NewProp_bEdgeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenericGraph_Statics::NewProp_bEdgeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraph_Statics::NewProp_bEdgeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraph_Statics::NewProp_AllNodes_MetaData[] = {
		{ "Category", "GenericGraph" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenericGraph_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraph, AllNodes), METADATA_PARAMS(Z_Construct_UClass_UGenericGraph_Statics::NewProp_AllNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraph_Statics::NewProp_AllNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericGraph_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGenericGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraph_Statics::NewProp_RootNodes_MetaData[] = {
		{ "Category", "GenericGraph" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenericGraph_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraph, RootNodes), METADATA_PARAMS(Z_Construct_UClass_UGenericGraph_Statics::NewProp_RootNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraph_Statics::NewProp_RootNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericGraph_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGenericGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraph_Statics::NewProp_GraphTags_MetaData[] = {
		{ "Category", "GenericGraph" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenericGraph_Statics::NewProp_GraphTags = { "GraphTags", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraph, GraphTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGenericGraph_Statics::NewProp_GraphTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraph_Statics::NewProp_GraphTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraph_Statics::NewProp_EdgeType_MetaData[] = {
		{ "Category", "GenericGraph" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenericGraph_Statics::NewProp_EdgeType = { "EdgeType", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraph, EdgeType), Z_Construct_UClass_UGenericGraphEdge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenericGraph_Statics::NewProp_EdgeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraph_Statics::NewProp_EdgeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraph_Statics::NewProp_NodeType_MetaData[] = {
		{ "Category", "GenericGraph" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenericGraph_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraph, NodeType), Z_Construct_UClass_UGenericGraphNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenericGraph_Statics::NewProp_NodeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraph_Statics::NewProp_NodeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraph_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GenericGraph" },
		{ "ModuleRelativePath", "Public/GenericGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenericGraph_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraph, Name), METADATA_PARAMS(Z_Construct_UClass_UGenericGraph_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraph_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenericGraph_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraph_Statics::NewProp_bCanRenameNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraph_Statics::NewProp_EdGraph,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraph_Statics::NewProp_bEdgeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraph_Statics::NewProp_AllNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraph_Statics::NewProp_AllNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraph_Statics::NewProp_RootNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraph_Statics::NewProp_RootNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraph_Statics::NewProp_GraphTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraph_Statics::NewProp_EdgeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraph_Statics::NewProp_NodeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraph_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenericGraph_Statics::ClassParams = {
		&UGenericGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGenericGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenericGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenericGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenericGraph, 1797599810);
	template<> GENERICGRAPHRUNTIME_API UClass* StaticClass<UGenericGraph>()
	{
		return UGenericGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericGraph(Z_Construct_UClass_UGenericGraph, &UGenericGraph::StaticClass, TEXT("/Script/GenericGraphRuntime"), TEXT("UGenericGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
