// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManagerUI/Public/Widgets/GameHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUDWidget() {}
// Cross Module References
	MANAGERUI_API UClass* Z_Construct_UClass_UGameHUDWidget();
	MANAGERUI_API UClass* Z_Construct_UClass_UGameHUDWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ManagerUI();
// End Cross Module References
	void UGameHUDWidget::StaticRegisterNativesUGameHUDWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameHUDWidget);
	UClass* Z_Construct_UClass_UGameHUDWidget_NoRegister()
	{
		return UGameHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ManagerUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUDWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Example HUD\n */" },
		{ "IncludePath", "Widgets/GameHUDWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/GameHUDWidget.h" },
		{ "ToolTip", "Example HUD" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_PlayerName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// Here you would add widgets (text, images or other custom widgets) that you would \n// want to change through code \n// this is just an example\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameHUDWidget.h" },
		{ "ToolTip", "Here you would add widgets (text, images or other custom widgets) that you would\nwant to change through code\nthis is just an example" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameHUDWidget, PlayerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_PlayerName_MetaData), Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_PlayerName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameHUDWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_PlayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameHUDWidget_Statics::ClassParams = {
		&UGameHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUDWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameHUDWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUDWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameHUDWidget()
	{
		if (!Z_Registration_Info_UClass_UGameHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameHUDWidget.OuterSingleton, Z_Construct_UClass_UGameHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameHUDWidget.OuterSingleton;
	}
	template<> MANAGERUI_API UClass* StaticClass<UGameHUDWidget>()
	{
		return UGameHUDWidget::StaticClass();
	}
	UGameHUDWidget::UGameHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHUDWidget);
	UGameHUDWidget::~UGameHUDWidget() {}
	struct Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_GameHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_GameHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameHUDWidget, UGameHUDWidget::StaticClass, TEXT("UGameHUDWidget"), &Z_Registration_Info_UClass_UGameHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameHUDWidget), 80574146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_GameHUDWidget_h_3371556964(TEXT("/Script/ManagerUI"),
		Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_GameHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_GameHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
