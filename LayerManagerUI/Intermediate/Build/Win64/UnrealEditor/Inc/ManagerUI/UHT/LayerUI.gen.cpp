// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManagerUI/Public/LayerUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayerUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MANAGERUI_API UClass* Z_Construct_UClass_ULayerUI();
	MANAGERUI_API UClass* Z_Construct_UClass_ULayerUI_NoRegister();
	MANAGERUI_API UEnum* Z_Construct_UEnum_ManagerUI_LayerType();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_ManagerUI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_LayerType;
	static UEnum* LayerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_LayerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_LayerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ManagerUI_LayerType, (UObject*)Z_Construct_UPackage__Script_ManagerUI(), TEXT("LayerType"));
		}
		return Z_Registration_Info_UEnum_LayerType.OuterSingleton;
	}
	template<> MANAGERUI_API UEnum* StaticEnum<LayerType>()
	{
		return LayerType_StaticEnum();
	}
	struct Z_Construct_UEnum_ManagerUI_LayerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ManagerUI_LayerType_Statics::Enumerators[] = {
		{ "LayerType::SINGLE", (int64)LayerType::SINGLE },
		{ "LayerType::MULTIPLE", (int64)LayerType::MULTIPLE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ManagerUI_LayerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// How many widgets can be visible at the same time\n// SINGLE - one\n// MULTIPLE - several\n" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "MULTIPLE.DisplayName", "Multiple" },
		{ "MULTIPLE.Name", "LayerType::MULTIPLE" },
		{ "SINGLE.DisplayName", "Single" },
		{ "SINGLE.Name", "LayerType::SINGLE" },
		{ "ToolTip", "How many widgets can be visible at the same time\nSINGLE - one\nMULTIPLE - several" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ManagerUI_LayerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ManagerUI,
		nullptr,
		"LayerType",
		"LayerType",
		Z_Construct_UEnum_ManagerUI_LayerType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ManagerUI_LayerType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ManagerUI_LayerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ManagerUI_LayerType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ManagerUI_LayerType()
	{
		if (!Z_Registration_Info_UEnum_LayerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_LayerType.InnerSingleton, Z_Construct_UEnum_ManagerUI_LayerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_LayerType.InnerSingleton;
	}
	DEFINE_FUNCTION(ULayerUI::execOnWidgetPopped)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWidgetPopped_Implementation(Z_Param_widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayerUI::execOnWidgetPushed)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWidgetPushed_Implementation(Z_Param_widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayerUI::execOnLayerCleared)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLayerCleared_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayerUI::execOnWidgetPoppedOthers)
	{
		P_GET_TARRAY_REF(ULayerUI*,Z_Param_Out_otherLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWidgetPoppedOthers_Implementation(Z_Param_Out_otherLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayerUI::execOnWidgetPushedOthers)
	{
		P_GET_TARRAY_REF(ULayerUI*,Z_Param_Out_otherLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWidgetPushedOthers_Implementation(Z_Param_Out_otherLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayerUI::execClearStack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearStack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayerUI::execGetVisibilityOfLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->GetVisibilityOfLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayerUI::execSetVisibilityOfLayer)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_visibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityOfLayer(ESlateVisibility(Z_Param_visibility));
		P_NATIVE_END;
	}
	struct LayerUI_eventOnWidgetPopped_Parms
	{
		UUserWidget* widget;
	};
	struct LayerUI_eventOnWidgetPoppedOthers_Parms
	{
		TArray<ULayerUI*> otherLayers;
	};
	struct LayerUI_eventOnWidgetPushed_Parms
	{
		UUserWidget* widget;
	};
	struct LayerUI_eventOnWidgetPushedOthers_Parms
	{
		TArray<ULayerUI*> otherLayers;
	};
	static FName NAME_ULayerUI_OnLayerCleared = FName(TEXT("OnLayerCleared"));
	void ULayerUI::OnLayerCleared()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULayerUI_OnLayerCleared),NULL);
	}
	static FName NAME_ULayerUI_OnWidgetPopped = FName(TEXT("OnWidgetPopped"));
	void ULayerUI::OnWidgetPopped(UUserWidget* widget)
	{
		LayerUI_eventOnWidgetPopped_Parms Parms;
		Parms.widget=widget;
		ProcessEvent(FindFunctionChecked(NAME_ULayerUI_OnWidgetPopped),&Parms);
	}
	static FName NAME_ULayerUI_OnWidgetPoppedOthers = FName(TEXT("OnWidgetPoppedOthers"));
	void ULayerUI::OnWidgetPoppedOthers(TArray<ULayerUI*> const& otherLayers)
	{
		LayerUI_eventOnWidgetPoppedOthers_Parms Parms;
		Parms.otherLayers=otherLayers;
		ProcessEvent(FindFunctionChecked(NAME_ULayerUI_OnWidgetPoppedOthers),&Parms);
	}
	static FName NAME_ULayerUI_OnWidgetPushed = FName(TEXT("OnWidgetPushed"));
	void ULayerUI::OnWidgetPushed(UUserWidget* widget)
	{
		LayerUI_eventOnWidgetPushed_Parms Parms;
		Parms.widget=widget;
		ProcessEvent(FindFunctionChecked(NAME_ULayerUI_OnWidgetPushed),&Parms);
	}
	static FName NAME_ULayerUI_OnWidgetPushedOthers = FName(TEXT("OnWidgetPushedOthers"));
	void ULayerUI::OnWidgetPushedOthers(TArray<ULayerUI*> const& otherLayers)
	{
		LayerUI_eventOnWidgetPushedOthers_Parms Parms;
		Parms.otherLayers=otherLayers;
		ProcessEvent(FindFunctionChecked(NAME_ULayerUI_OnWidgetPushedOthers),&Parms);
	}
	void ULayerUI::StaticRegisterNativesULayerUI()
	{
		UClass* Class = ULayerUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearStack", &ULayerUI::execClearStack },
			{ "GetVisibilityOfLayer", &ULayerUI::execGetVisibilityOfLayer },
			{ "OnLayerCleared", &ULayerUI::execOnLayerCleared },
			{ "OnWidgetPopped", &ULayerUI::execOnWidgetPopped },
			{ "OnWidgetPoppedOthers", &ULayerUI::execOnWidgetPoppedOthers },
			{ "OnWidgetPushed", &ULayerUI::execOnWidgetPushed },
			{ "OnWidgetPushedOthers", &ULayerUI::execOnWidgetPushedOthers },
			{ "SetVisibilityOfLayer", &ULayerUI::execSetVisibilityOfLayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULayerUI_ClearStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_ClearStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** Clears the stack of widgets in this layer. */" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "Clears the stack of widgets in this layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayerUI_ClearStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayerUI, nullptr, "ClearStack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_ClearStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayerUI_ClearStack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULayerUI_ClearStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayerUI_ClearStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics
	{
		struct LayerUI_eventGetVisibilityOfLayer_Parms
		{
			ESlateVisibility ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerUI_eventGetVisibilityOfLayer_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09 * Gets the visibility of the layer.\n\x09 * @return The visibility of the layer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "Gets the visibility of the layer.\n@return The visibility of the layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayerUI, nullptr, "GetVisibilityOfLayer", nullptr, nullptr, Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::LayerUI_eventGetVisibilityOfLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::LayerUI_eventGetVisibilityOfLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayerUI_OnLayerCleared_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_OnLayerCleared_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09 * Defines the impact that clearing this layer has on its widgets.\n\x09 * By default, it changes the widgets visibility to the hidden state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "Defines the impact that clearing this layer has on its widgets.\nBy default, it changes the widgets visibility to the hidden state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayerUI_OnLayerCleared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayerUI, nullptr, "OnLayerCleared", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnLayerCleared_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayerUI_OnLayerCleared_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULayerUI_OnLayerCleared()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayerUI_OnLayerCleared_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerUI_eventOnWidgetPopped_Parms, widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::NewProp_widget_MetaData), Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::NewProp_widget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::NewProp_widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09* Called when popping a widget from this layer.\n\x09* By default, it sets the widget visibility to HiddenState.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "Called when popping a widget from this layer.\nBy default, it sets the widget visibility to HiddenState." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayerUI, nullptr, "OnWidgetPopped", nullptr, nullptr, Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::PropPointers), sizeof(LayerUI_eventOnWidgetPopped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::PropPointers) < 2048);
	static_assert(sizeof(LayerUI_eventOnWidgetPopped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULayerUI_OnWidgetPopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayerUI_OnWidgetPopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_otherLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::NewProp_otherLayers_Inner = { "otherLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULayerUI_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::NewProp_otherLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::NewProp_otherLayers = { "otherLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerUI_eventOnWidgetPoppedOthers_Parms, otherLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::NewProp_otherLayers_MetaData), Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::NewProp_otherLayers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::NewProp_otherLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::NewProp_otherLayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09 * Defines the impact that popping a widget from this layer has on other layers.\n\x09 * @param OtherLayers Array of other layers affected by the pop operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "Defines the impact that popping a widget from this layer has on other layers.\n@param OtherLayers Array of other layers affected by the pop operation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayerUI, nullptr, "OnWidgetPoppedOthers", nullptr, nullptr, Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::PropPointers), sizeof(LayerUI_eventOnWidgetPoppedOthers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::PropPointers) < 2048);
	static_assert(sizeof(LayerUI_eventOnWidgetPoppedOthers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerUI_eventOnWidgetPushed_Parms, widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::NewProp_widget_MetaData), Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::NewProp_widget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::NewProp_widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09* Called when pushing a widget to this layer.\n\x09* By default, uses the layerType to determine visibility of other widgets.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "Called when pushing a widget to this layer.\nBy default, uses the layerType to determine visibility of other widgets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayerUI, nullptr, "OnWidgetPushed", nullptr, nullptr, Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::PropPointers), sizeof(LayerUI_eventOnWidgetPushed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::PropPointers) < 2048);
	static_assert(sizeof(LayerUI_eventOnWidgetPushed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULayerUI_OnWidgetPushed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayerUI_OnWidgetPushed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_otherLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::NewProp_otherLayers_Inner = { "otherLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULayerUI_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::NewProp_otherLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::NewProp_otherLayers = { "otherLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerUI_eventOnWidgetPushedOthers_Parms, otherLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::NewProp_otherLayers_MetaData), Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::NewProp_otherLayers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::NewProp_otherLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::NewProp_otherLayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer Reaction" },
		{ "Comment", "/**\n\x09 * Defines the impact that pushing a widget to this layer has on other layers.\n\x09 * @param OtherLayers Array of other layers affected by the push operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "Defines the impact that pushing a widget to this layer has on other layers.\n@param OtherLayers Array of other layers affected by the push operation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayerUI, nullptr, "OnWidgetPushedOthers", nullptr, nullptr, Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::PropPointers), sizeof(LayerUI_eventOnWidgetPushedOthers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::PropPointers) < 2048);
	static_assert(sizeof(LayerUI_eventOnWidgetPushedOthers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics
	{
		struct LayerUI_eventSetVisibilityOfLayer_Parms
		{
			ESlateVisibility visibility;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_visibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_visibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::NewProp_visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::NewProp_visibility = { "visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerUI_eventSetVisibilityOfLayer_Parms, visibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::NewProp_visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::NewProp_visibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09 * Sets the visibility of the layer.\n\x09 * @param Visibility The visibility to set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "Sets the visibility of the layer.\n@param Visibility The visibility to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayerUI, nullptr, "SetVisibilityOfLayer", nullptr, nullptr, Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::LayerUI_eventSetVisibilityOfLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::LayerUI_eventSetVisibilityOfLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULayerUI);
	UClass* Z_Construct_UClass_ULayerUI_NoRegister()
	{
		return ULayerUI::StaticClass();
	}
	struct Z_Construct_UClass_ULayerUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VisibleState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VisibleState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HiddenState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HiddenState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULayerUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ManagerUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerUI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULayerUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULayerUI_ClearStack, "ClearStack" }, // 2638034175
		{ &Z_Construct_UFunction_ULayerUI_GetVisibilityOfLayer, "GetVisibilityOfLayer" }, // 2283013594
		{ &Z_Construct_UFunction_ULayerUI_OnLayerCleared, "OnLayerCleared" }, // 3223181189
		{ &Z_Construct_UFunction_ULayerUI_OnWidgetPopped, "OnWidgetPopped" }, // 3090418497
		{ &Z_Construct_UFunction_ULayerUI_OnWidgetPoppedOthers, "OnWidgetPoppedOthers" }, // 659536625
		{ &Z_Construct_UFunction_ULayerUI_OnWidgetPushed, "OnWidgetPushed" }, // 1117453956
		{ &Z_Construct_UFunction_ULayerUI_OnWidgetPushedOthers, "OnWidgetPushedOthers" }, // 3333247911
		{ &Z_Construct_UFunction_ULayerUI_SetVisibilityOfLayer, "SetVisibilityOfLayer" }, // 695796328
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerUI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayerUI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UObject that keeps a stack of UserWidgets\n * Create layers that inherit from this to override the reactions when a widget is added or removed to a layer\n * It is also possible to define the impact that pushing/popping to a layer has on the other layers \n *\n */" },
		{ "IncludePath", "LayerUI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "UObject that keeps a stack of UserWidgets\nCreate layers that inherit from this to override the reactions when a widget is added or removed to a layer\nIt is also possible to define the impact that pushing/popping to a layer has on the other layers" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULayerUI_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayerUI_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** The type of the layer. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "The type of the layer." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULayerUI_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayerUI, Type), Z_Construct_UEnum_ManagerUI_LayerType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerUI_Statics::NewProp_Type_MetaData), Z_Construct_UClass_ULayerUI_Statics::NewProp_Type_MetaData) }; // 3344417023
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULayerUI_Statics::NewProp_VisibleState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayerUI_Statics::NewProp_VisibleState_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** The visibility state to set the widget when it is pushed to the layer. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "The visibility state to set the widget when it is pushed to the layer." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULayerUI_Statics::NewProp_VisibleState = { "VisibleState", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayerUI, VisibleState), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerUI_Statics::NewProp_VisibleState_MetaData), Z_Construct_UClass_ULayerUI_Statics::NewProp_VisibleState_MetaData) }; // 1295612096
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULayerUI_Statics::NewProp_HiddenState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayerUI_Statics::NewProp_HiddenState_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** The visibility state to set the widget when it is popped from the layer. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "The visibility state to set the widget when it is popped from the layer." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULayerUI_Statics::NewProp_HiddenState = { "HiddenState", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayerUI, HiddenState), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerUI_Statics::NewProp_HiddenState_MetaData), Z_Construct_UClass_ULayerUI_Statics::NewProp_HiddenState_MetaData) }; // 1295612096
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULayerUI_Statics::NewProp_WidgetStack_Inner = { "WidgetStack", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayerUI_Statics::NewProp_WidgetStack_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** Array of widgets stacked in this layer. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LayerUI.h" },
		{ "ToolTip", "Array of widgets stacked in this layer." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULayerUI_Statics::NewProp_WidgetStack = { "WidgetStack", nullptr, (EPropertyFlags)0x0020088000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayerUI, WidgetStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerUI_Statics::NewProp_WidgetStack_MetaData), Z_Construct_UClass_ULayerUI_Statics::NewProp_WidgetStack_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULayerUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerUI_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerUI_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerUI_Statics::NewProp_VisibleState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerUI_Statics::NewProp_VisibleState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerUI_Statics::NewProp_HiddenState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerUI_Statics::NewProp_HiddenState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerUI_Statics::NewProp_WidgetStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerUI_Statics::NewProp_WidgetStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULayerUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayerUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULayerUI_Statics::ClassParams = {
		&ULayerUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULayerUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULayerUI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerUI_Statics::Class_MetaDataParams), Z_Construct_UClass_ULayerUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULayerUI()
	{
		if (!Z_Registration_Info_UClass_ULayerUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULayerUI.OuterSingleton, Z_Construct_UClass_ULayerUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULayerUI.OuterSingleton;
	}
	template<> MANAGERUI_API UClass* StaticClass<ULayerUI>()
	{
		return ULayerUI::StaticClass();
	}
	ULayerUI::ULayerUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULayerUI);
	ULayerUI::~ULayerUI() {}
	struct Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_Statics::EnumInfo[] = {
		{ LayerType_StaticEnum, TEXT("LayerType"), &Z_Registration_Info_UEnum_LayerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3344417023U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULayerUI, ULayerUI::StaticClass, TEXT("ULayerUI"), &Z_Registration_Info_UClass_ULayerUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULayerUI), 249429832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_3773243476(TEXT("/Script/ManagerUI"),
		Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_LayerUI_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
