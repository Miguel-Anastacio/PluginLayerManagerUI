// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManagerUI/Public/Widgets/ButtonWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonWidget() {}
// Cross Module References
	MANAGERUI_API UClass* Z_Construct_UClass_UButtonWidget();
	MANAGERUI_API UClass* Z_Construct_UClass_UButtonWidget_NoRegister();
	MANAGERUI_API UClass* Z_Construct_UClass_UWidgetReactionInterface_NoRegister();
	MANAGERUI_API UFunction* Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ManagerUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics
	{
		struct _Script_ManagerUI_eventCustomButtonClickedSignature_Parms
		{
			UButtonWidget* Button;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ManagerUI_eventCustomButtonClickedSignature_Parms, Button), Z_Construct_UClass_UButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::NewProp_Button_MetaData), Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::NewProp_Button_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Custom delegate to use if you nedd to know which button was clicked */" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWidget.h" },
		{ "ToolTip", "Custom delegate to use if you nedd to know which button was clicked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ManagerUI, nullptr, "CustomButtonClickedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::_Script_ManagerUI_eventCustomButtonClickedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::_Script_ManagerUI_eventCustomButtonClickedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCustomButtonClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& CustomButtonClickedSignature, UButtonWidget* Button)
{
	struct _Script_ManagerUI_eventCustomButtonClickedSignature_Parms
	{
		UButtonWidget* Button;
	};
	_Script_ManagerUI_eventCustomButtonClickedSignature_Parms Parms;
	Parms.Button=Button;
	CustomButtonClickedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UButtonWidget::execOnButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UButtonWidget::execGetButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UButton**)Z_Param__Result=P_THIS->GetButton();
		P_NATIVE_END;
	}
	void UButtonWidget::StaticRegisterNativesUButtonWidget()
	{
		UClass* Class = UButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetButton", &UButtonWidget::execGetButton },
			{ "OnButtonClicked", &UButtonWidget::execOnButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UButtonWidget_GetButton_Statics
	{
		struct ButtonWidget_eventGetButton_Parms
		{
			UButton* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButtonWidget_GetButton_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UButtonWidget_GetButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ButtonWidget_eventGetButton_Parms, ReturnValue), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonWidget_GetButton_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UButtonWidget_GetButton_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButtonWidget_GetButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButtonWidget_GetButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButtonWidget_GetButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Gets the button associated with this widget. */" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWidget.h" },
		{ "ToolTip", "Gets the button associated with this widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButtonWidget_GetButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButtonWidget, nullptr, "GetButton", nullptr, nullptr, Z_Construct_UFunction_UButtonWidget_GetButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonWidget_GetButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UButtonWidget_GetButton_Statics::ButtonWidget_eventGetButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonWidget_GetButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UButtonWidget_GetButton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonWidget_GetButton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UButtonWidget_GetButton_Statics::ButtonWidget_eventGetButton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UButtonWidget_GetButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButtonWidget_GetButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UButtonWidget_OnButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButtonWidget_OnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the button is clicked. */" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWidget.h" },
		{ "ToolTip", "Called when the button is clicked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButtonWidget_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButtonWidget, nullptr, "OnButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonWidget_OnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UButtonWidget_OnButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UButtonWidget_OnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButtonWidget_OnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UButtonWidget);
	UClass* Z_Construct_UClass_UButtonWidget_NoRegister()
	{
		return UButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ButtonText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ManagerUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UButtonWidget_GetButton, "GetButton" }, // 4035498631
		{ &Z_Construct_UFunction_UButtonWidget_OnButtonClicked, "OnButtonClicked" }, // 1406655510
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Custom Button - create custom looks for it by creating BP widgets that inherit from this one\n */" },
		{ "IncludePath", "Widgets/ButtonWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWidget.h" },
		{ "ToolTip", "Custom Button - create custom looks for it by creating BP widgets that inherit from this one" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWidget_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** The text displayed on the button. */" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWidget.h" },
		{ "ToolTip", "The text displayed on the button." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UButtonWidget_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButtonWidget, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::NewProp_Text_MetaData), Z_Construct_UClass_UButtonWidget_Statics::NewProp_Text_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "/** The button widget. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWidget.h" },
		{ "ToolTip", "The button widget." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButtonWidget, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button_MetaData), Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWidget_Statics::NewProp_ButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "/** The text block widget displaying the button text. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWidget.h" },
		{ "ToolTip", "The text block widget displaying the button text." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UButtonWidget_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButtonWidget, ButtonText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::NewProp_ButtonText_MetaData), Z_Construct_UClass_UButtonWidget_Statics::NewProp_ButtonText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWidget_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWidget_Statics::NewProp_ButtonText,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UButtonWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWidgetReactionInterface_NoRegister, (int32)VTABLE_OFFSET(UButtonWidget, IWidgetReactionInterface), false },  // 634161241
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UButtonWidget_Statics::ClassParams = {
		&UButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UButtonWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UButtonWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UButtonWidget()
	{
		if (!Z_Registration_Info_UClass_UButtonWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UButtonWidget.OuterSingleton, Z_Construct_UClass_UButtonWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UButtonWidget.OuterSingleton;
	}
	template<> MANAGERUI_API UClass* StaticClass<UButtonWidget>()
	{
		return UButtonWidget::StaticClass();
	}
	UButtonWidget::UButtonWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonWidget);
	UButtonWidget::~UButtonWidget() {}
	struct Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UButtonWidget, UButtonWidget::StaticClass, TEXT("UButtonWidget"), &Z_Registration_Info_UClass_UButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UButtonWidget), 2486934454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_337923928(TEXT("/Script/ManagerUI"),
		Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_ButtonWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
