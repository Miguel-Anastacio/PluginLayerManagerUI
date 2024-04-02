// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LayerUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULayerUI;
class UUserWidget;
enum class ESlateVisibility : uint8;
#ifdef MANAGERUI_LayerUI_generated_h
#error "LayerUI.generated.h already included, missing '#pragma once' in LayerUI.h"
#endif
#define MANAGERUI_LayerUI_generated_h

#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_SPARSE_DATA
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnWidgetPopped); \
	DECLARE_FUNCTION(execOnWidgetPushed); \
	DECLARE_FUNCTION(execOnLayerCleared); \
	DECLARE_FUNCTION(execOnWidgetPoppedOthers); \
	DECLARE_FUNCTION(execOnWidgetPushedOthers); \
	DECLARE_FUNCTION(execClearStack); \
	DECLARE_FUNCTION(execGetVisibilityOfLayer); \
	DECLARE_FUNCTION(execSetVisibilityOfLayer);


#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_ACCESSORS
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_CALLBACK_WRAPPERS
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULayerUI(); \
	friend struct Z_Construct_UClass_ULayerUI_Statics; \
public: \
	DECLARE_CLASS(ULayerUI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ManagerUI"), NO_API) \
	DECLARE_SERIALIZER(ULayerUI)


#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULayerUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULayerUI(ULayerUI&&); \
	NO_API ULayerUI(const ULayerUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayerUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayerUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayerUI) \
	NO_API virtual ~ULayerUI();


#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_28_PROLOG
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_SPARSE_DATA \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_ACCESSORS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_CALLBACK_WRAPPERS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_INCLASS_NO_PURE_DECLS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANAGERUI_API UClass* StaticClass<class ULayerUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h


#define FOREACH_ENUM_LAYERTYPE(op) \
	op(LayerType::SINGLE) \
	op(LayerType::MULTIPLE) 

enum class LayerType : uint8;
template<> struct TIsUEnumClass<LayerType> { enum { Value = true }; };
template<> MANAGERUI_API UEnum* StaticEnum<LayerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
