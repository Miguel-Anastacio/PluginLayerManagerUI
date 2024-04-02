// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManagerUI/Public/LayerManagerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayerManagerHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	MANAGERUI_API UClass* Z_Construct_UClass_ALayerManagerHUD();
	MANAGERUI_API UClass* Z_Construct_UClass_ALayerManagerHUD_NoRegister();
	MANAGERUI_API UClass* Z_Construct_UClass_ULayerUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ManagerUI();
// End Cross Module References
	DEFINE_FUNCTION(ALayerManagerHUD::execIsWidgetOnTopOfLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWidgetOnTopOfLayer(Z_Param_Name,Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALayerManagerHUD::execPeekLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->PeekLayer(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALayerManagerHUD::execGetCurrentLayerTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentLayerTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALayerManagerHUD::execGetLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULayerUI**)Z_Param__Result=P_THIS->GetLayer(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALayerManagerHUD::execClearLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearLayer(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALayerManagerHUD::execClearAllLayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllLayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALayerManagerHUD::execPopFromCurrentLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->PopFromCurrentLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALayerManagerHUD::execPopFromLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->PopFromLayer(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALayerManagerHUD::execPushToLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushToLayer(Z_Param_Name,Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALayerManagerHUD::execRemoveLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveLayer(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALayerManagerHUD::execRegisterLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(ULayerUI,Z_Param_Layer);
		P_GET_UBOOL(Z_Param_bCurrent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterLayer(Z_Param_Name,Z_Param_Layer,Z_Param_bCurrent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALayerManagerHUD::execRegisterDefaultLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterDefaultLayer(Z_Param_Name);
		P_NATIVE_END;
	}
	void ALayerManagerHUD::StaticRegisterNativesALayerManagerHUD()
	{
		UClass* Class = ALayerManagerHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllLayers", &ALayerManagerHUD::execClearAllLayers },
			{ "ClearLayer", &ALayerManagerHUD::execClearLayer },
			{ "GetCurrentLayerTag", &ALayerManagerHUD::execGetCurrentLayerTag },
			{ "GetLayer", &ALayerManagerHUD::execGetLayer },
			{ "IsWidgetOnTopOfLayer", &ALayerManagerHUD::execIsWidgetOnTopOfLayer },
			{ "PeekLayer", &ALayerManagerHUD::execPeekLayer },
			{ "PopFromCurrentLayer", &ALayerManagerHUD::execPopFromCurrentLayer },
			{ "PopFromLayer", &ALayerManagerHUD::execPopFromLayer },
			{ "PushToLayer", &ALayerManagerHUD::execPushToLayer },
			{ "RegisterDefaultLayer", &ALayerManagerHUD::execRegisterDefaultLayer },
			{ "RegisterLayer", &ALayerManagerHUD::execRegisterLayer },
			{ "RemoveLayer", &ALayerManagerHUD::execRemoveLayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_ClearAllLayers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_ClearAllLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** Clears all layers. */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Clears all layers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_ClearAllLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "ClearAllLayers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_ClearAllLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_ClearAllLayers_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_ClearAllLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_ClearAllLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics
	{
		struct LayerManagerHUD_eventClearLayer_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventClearLayer_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** Clears the layer with the specified name. */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Clears the layer with the specified name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "ClearLayer", nullptr, nullptr, Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::LayerManagerHUD_eventClearLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::LayerManagerHUD_eventClearLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_ClearLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_ClearLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics
	{
		struct LayerManagerHUD_eventGetCurrentLayerTag_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventGetCurrentLayerTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n     * Gets the tag of the current layer.\n     * @return The tag of the current layer.\n     */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Gets the tag of the current layer.\n@return The tag of the current layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "GetCurrentLayerTag", nullptr, nullptr, Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::LayerManagerHUD_eventGetCurrentLayerTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::LayerManagerHUD_eventGetCurrentLayerTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics
	{
		struct LayerManagerHUD_eventGetLayer_Parms
		{
			FString Name;
			ULayerUI* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventGetLayer_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventGetLayer_Parms, ReturnValue), Z_Construct_UClass_ULayerUI_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n     * Gets the layer with the specified name.\n     * @param Name The name of the layer to retrieve.\n     * @return The ULayerUI associated with the specified name, or nullptr if not found.\n     */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Gets the layer with the specified name.\n@param Name The name of the layer to retrieve.\n@return The ULayerUI associated with the specified name, or nullptr if not found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "GetLayer", nullptr, nullptr, Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::LayerManagerHUD_eventGetLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::LayerManagerHUD_eventGetLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_GetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_GetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics
	{
		struct LayerManagerHUD_eventIsWidgetOnTopOfLayer_Parms
		{
			FString Name;
			UUserWidget* Widget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventIsWidgetOnTopOfLayer_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventIsWidgetOnTopOfLayer_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_Widget_MetaData), Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_Widget_MetaData) };
	void Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayerManagerHUD_eventIsWidgetOnTopOfLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LayerManagerHUD_eventIsWidgetOnTopOfLayer_Parms), &Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n     * Checks if a widget is on top of the specified layer.\n     * @param Name The name of the layer.\n     * @param Widget The widget to check.\n     * @return True if the widget is on top of the specified layer, false otherwise.\n     */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Checks if a widget is on top of the specified layer.\n@param Name The name of the layer.\n@param Widget The widget to check.\n@return True if the widget is on top of the specified layer, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "IsWidgetOnTopOfLayer", nullptr, nullptr, Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::LayerManagerHUD_eventIsWidgetOnTopOfLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::LayerManagerHUD_eventIsWidgetOnTopOfLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics
	{
		struct LayerManagerHUD_eventPeekLayer_Parms
		{
			FString Name;
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventPeekLayer_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventPeekLayer_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n     * Retrieves the widget from the top of the specified layer without removing it.\n     * @param Name The name of the layer.\n     * @return The widget at the top of the specified layer, or nullptr if the layer is empty.\n     */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Retrieves the widget from the top of the specified layer without removing it.\n@param Name The name of the layer.\n@return The widget at the top of the specified layer, or nullptr if the layer is empty." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "PeekLayer", nullptr, nullptr, Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::LayerManagerHUD_eventPeekLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::LayerManagerHUD_eventPeekLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_PeekLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_PeekLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics
	{
		struct LayerManagerHUD_eventPopFromCurrentLayer_Parms
		{
			UUserWidget* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventPopFromCurrentLayer_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n     * Removes and returns the widget from the top of the current layer.\n     * @return The widget removed from the top of the current layer, or nullptr if the current layer is empty.\n     */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Removes and returns the widget from the top of the current layer.\n@return The widget removed from the top of the current layer, or nullptr if the current layer is empty." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "PopFromCurrentLayer", nullptr, nullptr, Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::LayerManagerHUD_eventPopFromCurrentLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::LayerManagerHUD_eventPopFromCurrentLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics
	{
		struct LayerManagerHUD_eventPopFromLayer_Parms
		{
			FString Name;
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventPopFromLayer_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventPopFromLayer_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n     * Removes and returns the widget from the top of the specified layer.\n     * @param Name The name of the layer.\n     * @return The widget removed from the top of the layer, or nullptr if the layer is empty.\n     */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Removes and returns the widget from the top of the specified layer.\n@param Name The name of the layer.\n@return The widget removed from the top of the layer, or nullptr if the layer is empty." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "PopFromLayer", nullptr, nullptr, Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::LayerManagerHUD_eventPopFromLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::LayerManagerHUD_eventPopFromLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics
	{
		struct LayerManagerHUD_eventPushToLayer_Parms
		{
			FString Name;
			UUserWidget* Widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventPushToLayer_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventPushToLayer_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::NewProp_Widget_MetaData), Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::NewProp_Widget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n     * Adds a widget to the specified layer. If the layer does not exist, a new one is created.\n     * @param Name The name of the layer.\n     * @param Widget The widget to add to the layer.\n     */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Adds a widget to the specified layer. If the layer does not exist, a new one is created.\n@param Name The name of the layer.\n@param Widget The widget to add to the layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "PushToLayer", nullptr, nullptr, Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::LayerManagerHUD_eventPushToLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::LayerManagerHUD_eventPushToLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_PushToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_PushToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics
	{
		struct LayerManagerHUD_eventRegisterDefaultLayer_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventRegisterDefaultLayer_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** Registers a default layer with the specified name. */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Registers a default layer with the specified name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "RegisterDefaultLayer", nullptr, nullptr, Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::LayerManagerHUD_eventRegisterDefaultLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::LayerManagerHUD_eventRegisterDefaultLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics
	{
		struct LayerManagerHUD_eventRegisterLayer_Parms
		{
			FString Name;
			ULayerUI* Layer;
			bool bCurrent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Layer;
		static void NewProp_bCurrent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurrent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventRegisterLayer_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventRegisterLayer_Parms, Layer), Z_Construct_UClass_ULayerUI_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::NewProp_bCurrent_SetBit(void* Obj)
	{
		((LayerManagerHUD_eventRegisterLayer_Parms*)Obj)->bCurrent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::NewProp_bCurrent = { "bCurrent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LayerManagerHUD_eventRegisterLayer_Parms), &Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::NewProp_bCurrent_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::NewProp_Layer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::NewProp_bCurrent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n     * Registers a layer with the specified name and associated ULayerUI.\n     * @param Name The name of the layer.\n     * @param Layer The ULayerUI associated with the layer.\n     * @param bCurrent Indicates whether this layer should be set as the current layer.\n     */" },
		{ "CPP_Default_bCurrent", "false" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Registers a layer with the specified name and associated ULayerUI.\n@param Name The name of the layer.\n@param Layer The ULayerUI associated with the layer.\n@param bCurrent Indicates whether this layer should be set as the current layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "RegisterLayer", nullptr, nullptr, Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::LayerManagerHUD_eventRegisterLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::LayerManagerHUD_eventRegisterLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics
	{
		struct LayerManagerHUD_eventRemoveLayer_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerManagerHUD_eventRemoveLayer_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** Removes the layer with the specified name. */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Removes the layer with the specified name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerManagerHUD, nullptr, "RemoveLayer", nullptr, nullptr, Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::LayerManagerHUD_eventRemoveLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::LayerManagerHUD_eventRemoveLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALayerManagerHUD);
	UClass* Z_Construct_UClass_ALayerManagerHUD_NoRegister()
	{
		return ALayerManagerHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALayerManagerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLayerID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentLayerID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LayersUI_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LayersUI_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayersUI_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LayersUI;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LayerOrder_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerOrder_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALayerManagerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ManagerUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALayerManagerHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALayerManagerHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALayerManagerHUD_ClearAllLayers, "ClearAllLayers" }, // 1086844341
		{ &Z_Construct_UFunction_ALayerManagerHUD_ClearLayer, "ClearLayer" }, // 1450295382
		{ &Z_Construct_UFunction_ALayerManagerHUD_GetCurrentLayerTag, "GetCurrentLayerTag" }, // 1789159958
		{ &Z_Construct_UFunction_ALayerManagerHUD_GetLayer, "GetLayer" }, // 1310597323
		{ &Z_Construct_UFunction_ALayerManagerHUD_IsWidgetOnTopOfLayer, "IsWidgetOnTopOfLayer" }, // 500701010
		{ &Z_Construct_UFunction_ALayerManagerHUD_PeekLayer, "PeekLayer" }, // 2190004316
		{ &Z_Construct_UFunction_ALayerManagerHUD_PopFromCurrentLayer, "PopFromCurrentLayer" }, // 3978951242
		{ &Z_Construct_UFunction_ALayerManagerHUD_PopFromLayer, "PopFromLayer" }, // 1698816423
		{ &Z_Construct_UFunction_ALayerManagerHUD_PushToLayer, "PushToLayer" }, // 2591452518
		{ &Z_Construct_UFunction_ALayerManagerHUD_RegisterDefaultLayer, "RegisterDefaultLayer" }, // 4209828249
		{ &Z_Construct_UFunction_ALayerManagerHUD_RegisterLayer, "RegisterLayer" }, // 517015198
		{ &Z_Construct_UFunction_ALayerManagerHUD_RemoveLayer, "RemoveLayer" }, // 1198259183
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALayerManagerHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALayerManagerHUD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//class LayerUI\n" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "LayerManagerHUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "class LayerUI" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_CurrentLayerID_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** The ID of the current layer. */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "The ID of the current layer." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_CurrentLayerID = { "CurrentLayerID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALayerManagerHUD, CurrentLayerID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_CurrentLayerID_MetaData), Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_CurrentLayerID_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayersUI_ValueProp = { "LayersUI", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ULayerUI_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayersUI_Key_KeyProp = { "LayersUI_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayersUI_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** Map of layer names to ULayerUI instances. */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Map of layer names to ULayerUI instances." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayersUI = { "LayersUI", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALayerManagerHUD, LayersUI), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayersUI_MetaData), Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayersUI_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayerOrder_Inner = { "LayerOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayerOrder_MetaData[] = {
		{ "Comment", "/** Array that keeps track of the order of layers visible on the viewport. */" },
		{ "ModuleRelativePath", "Public/LayerManagerHUD.h" },
		{ "ToolTip", "Array that keeps track of the order of layers visible on the viewport." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayerOrder = { "LayerOrder", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALayerManagerHUD, LayerOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayerOrder_MetaData), Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayerOrder_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALayerManagerHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_CurrentLayerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayersUI_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayersUI_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayersUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayerOrder_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerManagerHUD_Statics::NewProp_LayerOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALayerManagerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALayerManagerHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALayerManagerHUD_Statics::ClassParams = {
		&ALayerManagerHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALayerManagerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALayerManagerHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALayerManagerHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ALayerManagerHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALayerManagerHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALayerManagerHUD()
	{
		if (!Z_Registration_Info_UClass_ALayerManagerHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALayerManagerHUD.OuterSingleton, Z_Construct_UClass_ALayerManagerHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALayerManagerHUD.OuterSingleton;
	}
	template<> MANAGERUI_API UClass* StaticClass<ALayerManagerHUD>()
	{
		return ALayerManagerHUD::StaticClass();
	}
	ALayerManagerHUD::ALayerManagerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALayerManagerHUD);
	ALayerManagerHUD::~ALayerManagerHUD() {}
	struct Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALayerManagerHUD, ALayerManagerHUD::StaticClass, TEXT("ALayerManagerHUD"), &Z_Registration_Info_UClass_ALayerManagerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALayerManagerHUD), 3451639555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_346741318(TEXT("/Script/ManagerUI"),
		Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerManagerHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
