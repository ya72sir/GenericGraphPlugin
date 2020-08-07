// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGenericGraph;
#ifdef GENERICGRAPHRUNTIME_GenericGraphEdge_generated_h
#error "GenericGraphEdge.generated.h already included, missing '#pragma once' in GenericGraphEdge.h"
#endif
#define GENERICGRAPHRUNTIME_GenericGraphEdge_generated_h

#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_SPARSE_DATA
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGraph) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGenericGraph**)Z_Param__Result=P_THIS->GetGraph(); \
		P_NATIVE_END; \
	}


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGraph) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGenericGraph**)Z_Param__Result=P_THIS->GetGraph(); \
		P_NATIVE_END; \
	}


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenericGraphEdge(); \
	friend struct Z_Construct_UClass_UGenericGraphEdge_Statics; \
public: \
	DECLARE_CLASS(UGenericGraphEdge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GenericGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGenericGraphEdge)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUGenericGraphEdge(); \
	friend struct Z_Construct_UClass_UGenericGraphEdge_Statics; \
public: \
	DECLARE_CLASS(UGenericGraphEdge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GenericGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGenericGraphEdge)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericGraphEdge(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericGraphEdge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericGraphEdge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericGraphEdge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericGraphEdge(UGenericGraphEdge&&); \
	NO_API UGenericGraphEdge(const UGenericGraphEdge&); \
public:


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericGraphEdge(UGenericGraphEdge&&); \
	NO_API UGenericGraphEdge(const UGenericGraphEdge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericGraphEdge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericGraphEdge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGenericGraphEdge)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_PRIVATE_PROPERTY_OFFSET
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_9_PROLOG
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_PRIVATE_PROPERTY_OFFSET \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_SPARSE_DATA \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_RPC_WRAPPERS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_INCLASS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_PRIVATE_PROPERTY_OFFSET \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_SPARSE_DATA \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_INCLASS_NO_PURE_DECLS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GENERICGRAPHRUNTIME_API UClass* StaticClass<class UGenericGraphEdge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraphEdge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
