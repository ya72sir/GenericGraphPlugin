// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphRuntime/Public/GenericGraphEdge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericGraphEdge() {}
// Cross Module References
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphEdge_NoRegister();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphEdge();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GenericGraphRuntime();
	GENERICGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UGenericGraphEdge_GetGraph();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraph_NoRegister();
	GENERICGRAPHRUNTIME_API UClass* Z_Construct_UClass_UGenericGraphNode_NoRegister();
// End Cross Module References
	void UGenericGraphEdge::StaticRegisterNativesUGenericGraphEdge()
	{
		UClass* Class = UGenericGraphEdge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGraph", &UGenericGraphEdge::execGetGraph },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenericGraphEdge_GetGraph_Statics
	{
		struct GenericGraphEdge_eventGetGraph_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericGraphEdge_GetGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericGraphEdge_eventGetGraph_Parms, ReturnValue), Z_Construct_UClass_UGenericGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericGraphEdge_GetGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericGraphEdge_GetGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericGraphEdge_GetGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "GenericGraphEdge" },
		{ "ModuleRelativePath", "Public/GenericGraphEdge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericGraphEdge_GetGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericGraphEdge, nullptr, "GetGraph", nullptr, nullptr, sizeof(GenericGraphEdge_eventGetGraph_Parms), Z_Construct_UFunction_UGenericGraphEdge_GetGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraphEdge_GetGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericGraphEdge_GetGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericGraphEdge_GetGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericGraphEdge_GetGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericGraphEdge_GetGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGenericGraphEdge_NoRegister()
	{
		return UGenericGraphEdge::StaticClass();
	}
	struct Z_Construct_UClass_UGenericGraphEdge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericGraphEdge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenericGraphEdge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenericGraphEdge_GetGraph, "GetGraph" }, // 1348196492
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEdge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GenericGraphEdge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GenericGraphEdge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_EndNode_MetaData[] = {
		{ "Category", "GenericGraphEdge" },
		{ "ModuleRelativePath", "Public/GenericGraphEdge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_EndNode = { "EndNode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphEdge, EndNode), Z_Construct_UClass_UGenericGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_EndNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_EndNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_StartNode_MetaData[] = {
		{ "Category", "GenericGraphEdge" },
		{ "ModuleRelativePath", "Public/GenericGraphEdge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphEdge, StartNode), Z_Construct_UClass_UGenericGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_StartNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_StartNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_Graph_MetaData[] = {
		{ "Category", "GenericGraphNode" },
		{ "ModuleRelativePath", "Public/GenericGraphEdge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericGraphEdge, Graph), Z_Construct_UClass_UGenericGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_Graph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenericGraphEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_EndNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_StartNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphEdge_Statics::NewProp_Graph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericGraphEdge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericGraphEdge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenericGraphEdge_Statics::ClassParams = {
		&UGenericGraphEdge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGenericGraphEdge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEdge_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenericGraphEdge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphEdge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericGraphEdge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenericGraphEdge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenericGraphEdge, 3274492903);
	template<> GENERICGRAPHRUNTIME_API UClass* StaticClass<UGenericGraphEdge>()
	{
		return UGenericGraphEdge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericGraphEdge(Z_Construct_UClass_UGenericGraphEdge, &UGenericGraphEdge::StaticClass, TEXT("/Script/GenericGraphRuntime"), TEXT("UGenericGraphEdge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericGraphEdge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
