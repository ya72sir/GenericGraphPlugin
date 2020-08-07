// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GENERICGRAPHEDITOR_Settings_GenericGraphEditor_generated_h
#error "Settings_GenericGraphEditor.generated.h already included, missing '#pragma once' in Settings_GenericGraphEditor.h"
#endif
#define GENERICGRAPHEDITOR_Settings_GenericGraphEditor_generated_h

#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_SPARSE_DATA
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_RPC_WRAPPERS
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenericGraphEditorSettings(); \
	friend struct Z_Construct_UClass_UGenericGraphEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UGenericGraphEditorSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GenericGraphEditor"), NO_API) \
	DECLARE_SERIALIZER(UGenericGraphEditorSettings)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGenericGraphEditorSettings(); \
	friend struct Z_Construct_UClass_UGenericGraphEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UGenericGraphEditorSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GenericGraphEditor"), NO_API) \
	DECLARE_SERIALIZER(UGenericGraphEditorSettings)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericGraphEditorSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericGraphEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericGraphEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericGraphEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericGraphEditorSettings(UGenericGraphEditorSettings&&); \
	NO_API UGenericGraphEditorSettings(const UGenericGraphEditorSettings&); \
public:


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericGraphEditorSettings(UGenericGraphEditorSettings&&); \
	NO_API UGenericGraphEditorSettings(const UGenericGraphEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericGraphEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericGraphEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGenericGraphEditorSettings)


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_PRIVATE_PROPERTY_OFFSET
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_13_PROLOG
#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_PRIVATE_PROPERTY_OFFSET \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_SPARSE_DATA \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_RPC_WRAPPERS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_INCLASS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_PRIVATE_PROPERTY_OFFSET \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_SPARSE_DATA \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_INCLASS_NO_PURE_DECLS \
	DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GENERICGRAPHEDITOR_API UClass* StaticClass<class UGenericGraphEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueSystem___Copy_Plugins_GenericGraph_Source_GenericGraphEditor_Private_GenericGraphAssetEditor_Settings_GenericGraphEditor_h


#define FOREACH_ENUM_EAUTOLAYOUTSTRATEGY(op) \
	op(EAutoLayoutStrategy::Tree) \
	op(EAutoLayoutStrategy::ForceDirected) 

enum class EAutoLayoutStrategy : uint8;
template<> GENERICGRAPHEDITOR_API UEnum* StaticEnum<EAutoLayoutStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
