// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManagerUI/Public/UILayerManagerFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUILayerManagerFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MANAGERUI_API UClass* Z_Construct_UClass_UUILayerManagerFunctionLibrary();
	MANAGERUI_API UClass* Z_Construct_UClass_UUILayerManagerFunctionLibrary_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ManagerUI();
// End Cross Module References
	DEFINE_FUNCTION(UUILayerManagerFunctionLibrary::execToggleWidgetVisibility)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_widget);
		P_GET_PROPERTY(FStrProperty,Z_Param_layerName);
		P_GET_OBJECT(APlayerController,Z_Param_controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUILayerManagerFunctionLibrary::ToggleWidgetVisibility(Z_Param_widget,Z_Param_layerName,Z_Param_controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUILayerManagerFunctionLibrary::execAddWidgetToLayer)
	{
		P_GET_OBJECT(UClass,Z_Param_widgetClass);
		P_GET_PROPERTY(FStrProperty,Z_Param_layerName);
		P_GET_OBJECT(APlayerController,Z_Param_controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=UUILayerManagerFunctionLibrary::AddWidgetToLayer(Z_Param_widgetClass,Z_Param_layerName,Z_Param_controller);
		P_NATIVE_END;
	}
	void UUILayerManagerFunctionLibrary::StaticRegisterNativesUUILayerManagerFunctionLibrary()
	{
		UClass* Class = UUILayerManagerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidgetToLayer", &UUILayerManagerFunctionLibrary::execAddWidgetToLayer },
			{ "ToggleWidgetVisibility", &UUILayerManagerFunctionLibrary::execToggleWidgetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics
	{
		struct UILayerManagerFunctionLibrary_eventAddWidgetToLayer_Parms
		{
			TSubclassOf<UUserWidget>  widgetClass;
			FString layerName;
			APlayerController* controller;
			UUserWidget* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_widgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_layerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_layerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_widgetClass = { "widgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UILayerManagerFunctionLibrary_eventAddWidgetToLayer_Parms, widgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_layerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_layerName = { "layerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UILayerManagerFunctionLibrary_eventAddWidgetToLayer_Parms, layerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_layerName_MetaData), Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_layerName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UILayerManagerFunctionLibrary_eventAddWidgetToLayer_Parms, controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UILayerManagerFunctionLibrary_eventAddWidgetToLayer_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_widgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_layerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Utils" },
		{ "Comment", "/**\n\x09 * Adds a widget to the specified layer.\n\x09 * @param WidgetClass The class of the widget to add.\n\x09 * @param LayerName The name of the layer to add the widget to.\n\x09 * @param Controller The player controller associated with the widget.\n\x09 * @return The created widget, or nullptr if unsuccessful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UILayerManagerFunctionLibrary.h" },
		{ "ToolTip", "Adds a widget to the specified layer.\n@param WidgetClass The class of the widget to add.\n@param LayerName The name of the layer to add the widget to.\n@param Controller The player controller associated with the widget.\n@return The created widget, or nullptr if unsuccessful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUILayerManagerFunctionLibrary, nullptr, "AddWidgetToLayer", nullptr, nullptr, Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::UILayerManagerFunctionLibrary_eventAddWidgetToLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::UILayerManagerFunctionLibrary_eventAddWidgetToLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics
	{
		struct UILayerManagerFunctionLibrary_eventToggleWidgetVisibility_Parms
		{
			UUserWidget* widget;
			FString layerName;
			APlayerController* controller;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_layerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_layerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UILayerManagerFunctionLibrary_eventToggleWidgetVisibility_Parms, widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_widget_MetaData), Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_widget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_layerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_layerName = { "layerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UILayerManagerFunctionLibrary_eventToggleWidgetVisibility_Parms, layerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_layerName_MetaData), Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_layerName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UILayerManagerFunctionLibrary_eventToggleWidgetVisibility_Parms, controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_layerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Utils" },
		{ "Comment", "/**\n\x09 * Toggles the visibility of a widget in the specified layer.\n\x09 * @param Widget The widget whose visibility to toggle.\n\x09 * @param LayerName The name of the layer containing the widget.\n\x09 * @param Controller The player controller associated with the widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UILayerManagerFunctionLibrary.h" },
		{ "ToolTip", "Toggles the visibility of a widget in the specified layer.\n@param Widget The widget whose visibility to toggle.\n@param LayerName The name of the layer containing the widget.\n@param Controller The player controller associated with the widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUILayerManagerFunctionLibrary, nullptr, "ToggleWidgetVisibility", nullptr, nullptr, Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::UILayerManagerFunctionLibrary_eventToggleWidgetVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::UILayerManagerFunctionLibrary_eventToggleWidgetVisibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUILayerManagerFunctionLibrary);
	UClass* Z_Construct_UClass_UUILayerManagerFunctionLibrary_NoRegister()
	{
		return UUILayerManagerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUILayerManagerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUILayerManagerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ManagerUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUILayerManagerFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUILayerManagerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUILayerManagerFunctionLibrary_AddWidgetToLayer, "AddWidgetToLayer" }, // 3008798253
		{ &Z_Construct_UFunction_UUILayerManagerFunctionLibrary_ToggleWidgetVisibility, "ToggleWidgetVisibility" }, // 305150504
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUILayerManagerFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUILayerManagerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Utility function library to simplify interacting with the LayerManagerHUD from outside the HUD class\n */" },
		{ "IncludePath", "UILayerManagerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/UILayerManagerFunctionLibrary.h" },
		{ "ToolTip", "Utility function library to simplify interacting with the LayerManagerHUD from outside the HUD class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUILayerManagerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUILayerManagerFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUILayerManagerFunctionLibrary_Statics::ClassParams = {
		&UUILayerManagerFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUILayerManagerFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUILayerManagerFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUILayerManagerFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UUILayerManagerFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUILayerManagerFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUILayerManagerFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUILayerManagerFunctionLibrary.OuterSingleton;
	}
	template<> MANAGERUI_API UClass* StaticClass<UUILayerManagerFunctionLibrary>()
	{
		return UUILayerManagerFunctionLibrary::StaticClass();
	}
	UUILayerManagerFunctionLibrary::UUILayerManagerFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUILayerManagerFunctionLibrary);
	UUILayerManagerFunctionLibrary::~UUILayerManagerFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_UILayerManagerFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_UILayerManagerFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUILayerManagerFunctionLibrary, UUILayerManagerFunctionLibrary::StaticClass, TEXT("UUILayerManagerFunctionLibrary"), &Z_Registration_Info_UClass_UUILayerManagerFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUILayerManagerFunctionLibrary), 2342866541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_UILayerManagerFunctionLibrary_h_1397840561(TEXT("/Script/ManagerUI"),
		Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_UILayerManagerFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_UILayerManagerFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
