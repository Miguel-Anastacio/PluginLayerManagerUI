// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LayerManagerHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULayerUI;
class UUserWidget;
#ifdef MANAGERUI_LayerManagerHUD_generated_h
#error "LayerManagerHUD.generated.h already included, missing '#pragma once' in LayerManagerHUD.h"
#endif
#define MANAGERUI_LayerManagerHUD_generated_h

#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_SPARSE_DATA
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsWidgetOnTopOfLayer); \
	DECLARE_FUNCTION(execPeekLayer); \
	DECLARE_FUNCTION(execGetCurrentLayerTag); \
	DECLARE_FUNCTION(execGetLayer); \
	DECLARE_FUNCTION(execClearLayer); \
	DECLARE_FUNCTION(execClearAllLayers); \
	DECLARE_FUNCTION(execPopFromCurrentLayer); \
	DECLARE_FUNCTION(execPopFromLayer); \
	DECLARE_FUNCTION(execPushToLayer); \
	DECLARE_FUNCTION(execRemoveLayer); \
	DECLARE_FUNCTION(execRegisterLayer); \
	DECLARE_FUNCTION(execRegisterDefaultLayer);


#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_ACCESSORS
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALayerManagerHUD(); \
	friend struct Z_Construct_UClass_ALayerManagerHUD_Statics; \
public: \
	DECLARE_CLASS(ALayerManagerHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ManagerUI"), NO_API) \
	DECLARE_SERIALIZER(ALayerManagerHUD)


#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALayerManagerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALayerManagerHUD(ALayerManagerHUD&&); \
	NO_API ALayerManagerHUD(const ALayerManagerHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALayerManagerHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALayerManagerHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALayerManagerHUD) \
	NO_API virtual ~ALayerManagerHUD();


#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_15_PROLOG
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_SPARSE_DATA \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_ACCESSORS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_INCLASS_NO_PURE_DECLS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANAGERUI_API UClass* StaticClass<class ALayerManagerHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
