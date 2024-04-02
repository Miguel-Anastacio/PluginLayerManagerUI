// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/ButtonWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UButton;
class UButtonWidget;
#ifdef MANAGERUI_ButtonWidget_generated_h
#error "ButtonWidget.generated.h already included, missing '#pragma once' in ButtonWidget.h"
#endif
#define MANAGERUI_ButtonWidget_generated_h

#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_11_DELEGATE \
MANAGERUI_API void FCustomButtonClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& CustomButtonClickedSignature, UButtonWidget* Button);


#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_SPARSE_DATA
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnButtonClicked); \
	DECLARE_FUNCTION(execGetButton);


#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_ACCESSORS
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUButtonWidget(); \
	friend struct Z_Construct_UClass_UButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UButtonWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ManagerUI"), NO_API) \
	DECLARE_SERIALIZER(UButtonWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UButtonWidget*>(this); }


#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UButtonWidget(UButtonWidget&&); \
	NO_API UButtonWidget(const UButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButtonWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButtonWidget) \
	NO_API virtual ~UButtonWidget();


#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_15_PROLOG
#define FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_SPARSE_DATA \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_ACCESSORS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANAGERUI_API UClass* StaticClass<class UButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
