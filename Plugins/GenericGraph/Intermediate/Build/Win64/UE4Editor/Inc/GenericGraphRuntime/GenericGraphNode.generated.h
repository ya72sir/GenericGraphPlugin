// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGenericGraph;
class UGenericGraphNode;
class UGenericGraphEdge;
#ifdef GENERICGRAPHRUNTIME_GenericGraphNode_generated_h
#error "GenericGraphNode.generated.h already included, missing '#pragma once' in GenericGraphNode.h"
#endif
#define GENERICGRAPHRUNTIME_GenericGraphNode_generated_h

#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_SPARSE_DATA
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_RPC_WRAPPERS \
	virtual FText GetDescription_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetDescription) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetDescription_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGraph) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGenericGraph**)Z_Param__Result=P_THIS->GetGraph(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeafNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLeafNode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdge) \
	{ \
		P_GET_OBJECT(UGenericGraphNode,Z_Param_ChildNode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGenericGraphEdge**)Z_Param__Result=P_THIS->GetEdge(Z_Param_ChildNode); \
		P_NATIVE_END; \
	}


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDescription) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetDescription_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGraph) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGenericGraph**)Z_Param__Result=P_THIS->GetGraph(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeafNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLeafNode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdge) \
	{ \
		P_GET_OBJECT(UGenericGraphNode,Z_Param_ChildNode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGenericGraphEdge**)Z_Param__Result=P_THIS->GetEdge(Z_Param_ChildNode); \
		P_NATIVE_END; \
	}


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_EVENT_PARMS \
	struct GenericGraphNode_eventGetDescription_Parms \
	{ \
		FText ReturnValue; \
	};


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_CALLBACK_WRAPPERS
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenericGraphNode(); \
	friend struct Z_Construct_UClass_UGenericGraphNode_Statics; \
public: \
	DECLARE_CLASS(UGenericGraphNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GenericGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGenericGraphNode)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGenericGraphNode(); \
	friend struct Z_Construct_UClass_UGenericGraphNode_Statics; \
public: \
	DECLARE_CLASS(UGenericGraphNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GenericGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGenericGraphNode)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericGraphNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericGraphNode(UGenericGraphNode&&); \
	NO_API UGenericGraphNode(const UGenericGraphNode&); \
public:


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericGraphNode(UGenericGraphNode&&); \
	NO_API UGenericGraphNode(const UGenericGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericGraphNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGenericGraphNode)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_PRIVATE_PROPERTY_OFFSET
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_10_PROLOG \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_EVENT_PARMS


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_PRIVATE_PROPERTY_OFFSET \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_SPARSE_DATA \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_RPC_WRAPPERS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_CALLBACK_WRAPPERS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_INCLASS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_PRIVATE_PROPERTY_OFFSET \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_SPARSE_DATA \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_CALLBACK_WRAPPERS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_INCLASS_NO_PURE_DECLS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GENERICGRAPHRUNTIME_API UClass* StaticClass<class UGenericGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
