// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphRuntime/Public/GenericGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericGraphNode() {}
// Cross Module References
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphNode_NoRegister();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GenericGraphRuntime();
	GENERICGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UGenericGraphNode_GetDescription();
	GENERICGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UGenericGraphNode_GetEdge();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphEdge_NoRegister();
	GENERICGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UGenericGraphNode_GetGraph();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraph_NoRegister();
	GENERICGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UGenericGraphNode_IsLeafNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_UGenericGraphNode_GetDescription = FName(TEXT("GetDescription"));
	FText UGenericGraphNode::GetDescription() const
	{
		GenericGraphNode_eventGetDescription_Parms Parms;
		const_cast<UGenericGraphNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGenericGraphNode_GetDescription),&Parms);
		return Parms.ReturnValue;
	}
	void UGenericGraphNode::StaticRegisterNativesUGenericGraphNode()
	{
		UClass* Class = UGenericGraphNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDescription", &UGenericGraphNode::execGetDescription },
			{ "GetEdge", &UGenericGraphNode::execGetEdge },
			{ "GetGraph", &UGenericGraphNode::execGetGraph },
			{ "IsLeafNode", &UGenericGraphNode::execIsLeafNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenericGraphNode_GetDescription_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGenericGraphNode_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericGraphNode_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericGraphNode_GetDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraphNode_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericGraphNode_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "MissionNode" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericGraphNode_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericGraphNode, nullptr, "GetDescription", nullptr, nullptr, sizeof(GenericGraphNode_eventGetDescription_Parms), Z_Construct_UFunction_UGenericGraphNode_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraphNode_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericGraphNode_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraphNode_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericGraphNode_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericGraphNode_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics
	{
		struct GenericGraphNode_eventGetEdge_Parms
		{
			UGenericGraphNode* ChildNode;
			UGenericGraphEdge* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericGraphNode_eventGetEdge_Parms, ReturnValue), Z_Construct_UClass_UGenericGraphEdge_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::NewProp_ChildNode = { "ChildNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericGraphNode_eventGetEdge_Parms, ChildNode), Z_Construct_UClass_UGenericGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::NewProp_ChildNode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "GenericGraphNode" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericGraphNode, nullptr, "GetEdge", nullptr, nullptr, sizeof(GenericGraphNode_eventGetEdge_Parms), Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericGraphNode_GetEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericGraphNode_GetEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenericGraphNode_GetGraph_Statics
	{
		struct GenericGraphNode_eventGetGraph_Parms
		{
			UGenericGraph* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericGraphNode_GetGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericGraphNode_eventGetGraph_Parms, ReturnValue), Z_Construct_UClass_UGenericGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericGraphNode_GetGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraphNode_GetGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericGraphNode_GetGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "GenericGraphNode" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericGraphNode_GetGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericGraphNode, nullptr, "GetGraph", nullptr, nullptr, sizeof(GenericGraphNode_eventGetGraph_Parms), Z_Construct_UFunction_UGenericGraphNode_GetGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraphNode_GetGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericGraphNode_GetGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraphNode_GetGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericGraphNode_GetGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericGraphNode_GetGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics
	{
		struct GenericGraphNode_eventIsLeafNode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GenericGraphNode_eventIsLeafNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GenericGraphNode_eventIsLeafNode_Parms), &Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "GenericGraphNode" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericGraphNode, nullptr, "IsLeafNode", nullptr, nullptr, sizeof(GenericGraphNode_eventIsLeafNode_Parms), Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericGraphNode_IsLeafNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericGraphNode_IsLeafNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGenericGraphNode_NoRegister()
	{
		return UGenericGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UGenericGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextMenuName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ContextMenuName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompatibleGraphType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CompatibleGraphType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NodeTitle;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Edges;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Edges_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Edges_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildrenNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildrenNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildrenNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenericGraphNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenericGraphNode_GetDescription, "GetDescription" }, // 2268051782
		{ &Z_Construct_UFunction_UGenericGraphNode_GetEdge, "GetEdge" }, // 867768313
		{ &Z_Construct_UFunction_UGenericGraphNode_GetGraph, "GetGraph" }, // 898802135
		{ &Z_Construct_UFunction_UGenericGraphNode_IsLeafNode, "IsLeafNode" }, // 1524153620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GenericGraphNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ContextMenuName_MetaData[] = {
		{ "Category", "GenericGraphNode_Editor" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ContextMenuName = { "ContextMenuName", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphNode, ContextMenuName), METADATA_PARAMS(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ContextMenuName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ContextMenuName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "GenericGraphNode_Editor" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphNode, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_CompatibleGraphType_MetaData[] = {
		{ "Category", "GenericGraphNode_Editor" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_CompatibleGraphType = { "CompatibleGraphType", nullptr, (EPropertyFlags)0x0014000800030001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphNode, CompatibleGraphType), Z_Construct_UClass_UGenericGraph_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_CompatibleGraphType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_CompatibleGraphType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_NodeTitle_MetaData[] = {
		{ "Category", "GenericGraphNode_Editor" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_NodeTitle = { "NodeTitle", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphNode, NodeTitle), METADATA_PARAMS(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_NodeTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_NodeTitle_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Edges_MetaData[] = {
		{ "Category", "GenericGraphNode" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphNode, Edges), METADATA_PARAMS(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Edges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Edges_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Edges_Key_KeyProp = { "Edges_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGenericGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Edges_ValueProp = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UGenericGraphEdge_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ChildrenNodes_MetaData[] = {
		{ "Category", "GenericGraphNode" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ChildrenNodes = { "ChildrenNodes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphNode, ChildrenNodes), METADATA_PARAMS(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ChildrenNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ChildrenNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ChildrenNodes_Inner = { "ChildrenNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGenericGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ParentNodes_MetaData[] = {
		{ "Category", "GenericGraphNode" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ParentNodes = { "ParentNodes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphNode, ParentNodes), METADATA_PARAMS(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ParentNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ParentNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ParentNodes_Inner = { "ParentNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGenericGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Graph_MetaData[] = {
		{ "Category", "GenericGraphNode" },
		{ "ModuleRelativePath", "Public/GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000030001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphNode, Graph), Z_Construct_UClass_UGenericGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Graph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenericGraphNode_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ContextMenuName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_BackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_CompatibleGraphType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_NodeTitle,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Edges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Edges_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Edges_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ChildrenNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ChildrenNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ParentNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_ParentNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphNode_Statics::NewProp_Graph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenericGraphNode_Statics::ClassParams = {
		&UGenericGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGenericGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenericGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenericGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenericGraphNode, 2541256232);
	template<> GENERICGRAPHRUNTIME_API UClass* StaticClass<UGenericGraphNode>()
	{
		return UGenericGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericGraphNode(Z_Construct_UClass_UGenericGraphNode, &UGenericGraphNode::StaticClass, TEXT("/Script/GenericGraphRuntime"), TEXT("UGenericGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
