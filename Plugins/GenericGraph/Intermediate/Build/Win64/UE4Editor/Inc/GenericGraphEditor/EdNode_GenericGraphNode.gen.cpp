// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphEditor/Private/GenericGraphAssetEditor/EdNode_GenericGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdNode_GenericGraphNode() {}
// Cross Module References
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UEdNode_GenericGraphNode_NoRegister();
	GENERICGRAPHEDITOR_API UClass* Z_Construct_UClass_UEdNode_GenericGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_GenericGraphEditor();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphNode_NoRegister();
// End Cross Module References
	void UEdNode_GenericGraphNode::StaticRegisterNativesUEdNode_GenericGraphNode()
	{
	}
	UClass* Z_Construct_UClass_UEdNode_GenericGraphNode_NoRegister()
	{
		return UEdNode_GenericGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UEdNode_GenericGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericGraphNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GenericGraphNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GenericGraphAssetEditor/EdNode_GenericGraphNode.h" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/EdNode_GenericGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::NewProp_GenericGraphNode_MetaData[] = {
		{ "Category", "GenericGraph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/GenericGraphAssetEditor/EdNode_GenericGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::NewProp_GenericGraphNode = { "GenericGraphNode", nullptr, (EPropertyFlags)0x00120000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdNode_GenericGraphNode, GenericGraphNode), Z_Construct_UClass_UGenericGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::NewProp_GenericGraphNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::NewProp_GenericGraphNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::NewProp_GenericGraphNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdNode_GenericGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::ClassParams = {
		&UEdNode_GenericGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdNode_GenericGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdNode_GenericGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdNode_GenericGraphNode, 253624461);
	template<> GENERICGRAPHEDITOR_API UClass* StaticClass<UEdNode_GenericGraphNode>()
	{
		return UEdNode_GenericGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdNode_GenericGraphNode(Z_Construct_UClass_UEdNode_GenericGraphNode, &UEdNode_GenericGraphNode::StaticClass, TEXT("/Script/GenericGraphEditor"), TEXT("UEdNode_GenericGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdNode_GenericGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
