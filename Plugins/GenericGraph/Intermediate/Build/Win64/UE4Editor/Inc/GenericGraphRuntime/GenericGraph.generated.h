// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGenericGraphNode;
#ifdef GENERICGRAPHRUNTIME_GenericGraph_generated_h
#error "GenericGraph.generated.h already included, missing '#pragma once' in GenericGraph.h"
#endif
#define GENERICGRAPHRUNTIME_GenericGraph_generated_h

#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_SPARSE_DATA
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNodesByLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Level); \
		P_GET_TARRAY_REF(UGenericGraphNode*,Z_Param_Out_Nodes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNodesByLevel(Z_Param_Level,Z_Param_Out_Nodes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLevelNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrint) \
	{ \
		P_GET_UBOOL(Z_Param_ToConsole); \
		P_GET_UBOOL(Z_Param_ToScreen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Print(Z_Param_ToConsole,Z_Param_ToScreen); \
		P_NATIVE_END; \
	}


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNodesByLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Level); \
		P_GET_TARRAY_REF(UGenericGraphNode*,Z_Param_Out_Nodes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNodesByLevel(Z_Param_Level,Z_Param_Out_Nodes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLevelNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrint) \
	{ \
		P_GET_UBOOL(Z_Param_ToConsole); \
		P_GET_UBOOL(Z_Param_ToScreen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Print(Z_Param_ToConsole,Z_Param_ToScreen); \
		P_NATIVE_END; \
	}


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenericGraph(); \
	friend struct Z_Construct_UClass_UGenericGraph_Statics; \
public: \
	DECLARE_CLASS(UGenericGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GenericGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGenericGraph)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUGenericGraph(); \
	friend struct Z_Construct_UClass_UGenericGraph_Statics; \
public: \
	DECLARE_CLASS(UGenericGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GenericGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGenericGraph)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericGraph(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericGraph(UGenericGraph&&); \
	NO_API UGenericGraph(const UGenericGraph&); \
public:


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericGraph(UGenericGraph&&); \
	NO_API UGenericGraph(const UGenericGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGenericGraph)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_PRIVATE_PROPERTY_OFFSET
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_9_PROLOG
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_PRIVATE_PROPERTY_OFFSET \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_SPARSE_DATA \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_RPC_WRAPPERS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_INCLASS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_PRIVATE_PROPERTY_OFFSET \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_SPARSE_DATA \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_INCLASS_NO_PURE_DECLS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GENERICGRAPHRUNTIME_API UClass* StaticClass<class UGenericGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphRuntime_Public_GenericGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
