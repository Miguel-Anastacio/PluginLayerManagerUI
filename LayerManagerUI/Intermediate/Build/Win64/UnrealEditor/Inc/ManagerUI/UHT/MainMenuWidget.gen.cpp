// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManagerUI/Public/Widgets/MainMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}
// Cross Module References
	MANAGERUI_API UClass* Z_Construct_UClass_UButtonWidget_NoRegister();
	MANAGERUI_API UClass* Z_Construct_UClass_UMainMenuWidget();
	MANAGERUI_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
	MANAGERUI_API UClass* Z_Construct_UClass_UWidgetReactionInterface_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ManagerUI();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenuWidget::execQuitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnPreheatFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreheatFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execAsyncLevelLoad)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelDir);
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncLevelLoad(Z_Param_LevelDir,Z_Param_LevelName);
		P_NATIVE_END;
	}
	void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
	{
		UClass* Class = UMainMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLevelLoad", &UMainMenuWidget::execAsyncLevelLoad },
			{ "OnPreheatFinished", &UMainMenuWidget::execOnPreheatFinished },
			{ "QuitGame", &UMainMenuWidget::execQuitGame },
			{ "StartGame", &UMainMenuWidget::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics
	{
		struct MainMenuWidget_eventAsyncLevelLoad_Parms
		{
			FString LevelDir;
			FString LevelName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::NewProp_LevelDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::NewProp_LevelDir = { "LevelDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuWidget_eventAsyncLevelLoad_Parms, LevelDir), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::NewProp_LevelDir_MetaData), Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::NewProp_LevelDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuWidget_eventAsyncLevelLoad_Parms, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::NewProp_LevelName_MetaData), Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::NewProp_LevelName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::NewProp_LevelDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::NewProp_LevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Load" },
		{ "Comment", "/**\n     * Asynchronously loads the specified level.\n     * @param LevelDir The directory of the level to load.\n     * @param LevelName The name of the level to load.\n     */" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenuWidget.h" },
		{ "ToolTip", "Asynchronously loads the specified level.\n@param LevelDir The directory of the level to load.\n@param LevelName The name of the level to load." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "AsyncLevelLoad", nullptr, nullptr, Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::MainMenuWidget_eventAsyncLevelLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::MainMenuWidget_eventAsyncLevelLoad_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnPreheatFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnPreheatFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when preheating finished. */" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenuWidget.h" },
		{ "ToolTip", "Called when preheating finished." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnPreheatFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnPreheatFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnPreheatFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnPreheatFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnPreheatFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnPreheatFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_QuitGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_QuitGame_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Quits the game. */" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenuWidget.h" },
		{ "ToolTip", "Quits the game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "QuitGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_QuitGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_QuitGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_QuitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_QuitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_StartGame_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Starts the game. */" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenuWidget.h" },
		{ "ToolTip", "Starts the game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_StartGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuWidget);
	UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
	{
		return UMainMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StartButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QuitButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartLevelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLevelLoadTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumLevelLoadTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ManagerUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_AsyncLevelLoad, "AsyncLevelLoad" }, // 2827551200
		{ &Z_Construct_UFunction_UMainMenuWidget_OnPreheatFinished, "OnPreheatFinished" }, // 4262530309
		{ &Z_Construct_UFunction_UMainMenuWidget_QuitGame, "QuitGame" }, // 747170696
		{ &Z_Construct_UFunction_UMainMenuWidget_StartGame, "StartGame" }, // 1740052553
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/MainMenuWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget" },
		{ "Comment", "/** The start button widget. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenuWidget.h" },
		{ "ToolTip", "The start button widget." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartButton = { "StartButton", nullptr, (EPropertyFlags)0x002408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, StartButton), Z_Construct_UClass_UButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartButton_MetaData), Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget" },
		{ "Comment", "/** The quit button widget. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenuWidget.h" },
		{ "ToolTip", "The quit button widget." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x002408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, QuitButton), Z_Construct_UClass_UButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton_MetaData), Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartLevelName_MetaData[] = {
		{ "Category", "Start Level" },
		{ "Comment", "/** The name of the level to load when pressing the start button. */" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenuWidget.h" },
		{ "ToolTip", "The name of the level to load when pressing the start button." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartLevelName = { "StartLevelName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, StartLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartLevelName_MetaData), Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartLevelName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LevelDirectory_MetaData[] = {
		{ "Category", "Start Level" },
		{ "Comment", "/** The directory of the level to load when pressing the start button. */" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenuWidget.h" },
		{ "ToolTip", "The directory of the level to load when pressing the start button." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LevelDirectory = { "LevelDirectory", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, LevelDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LevelDirectory_MetaData), Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LevelDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_MinimumLevelLoadTime_MetaData[] = {
		{ "Category", "Start Level" },
		{ "Comment", "/** The minimum time in seconds to wait for level loading. */" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenuWidget.h" },
		{ "ToolTip", "The minimum time in seconds to wait for level loading." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_MinimumLevelLoadTime = { "MinimumLevelLoadTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, MinimumLevelLoadTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_MinimumLevelLoadTime_MetaData), Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_MinimumLevelLoadTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartLevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LevelDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_MinimumLevelLoadTime,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMainMenuWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWidgetReactionInterface_NoRegister, (int32)VTABLE_OFFSET(UMainMenuWidget, IWidgetReactionInterface), false },  // 634161241
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
		&UMainMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMainMenuWidget()
	{
		if (!Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton;
	}
	template<> MANAGERUI_API UClass* StaticClass<UMainMenuWidget>()
	{
		return UMainMenuWidget::StaticClass();
	}
	UMainMenuWidget::UMainMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidget);
	UMainMenuWidget::~UMainMenuWidget() {}
	struct Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_MainMenuWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_MainMenuWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuWidget, UMainMenuWidget::StaticClass, TEXT("UMainMenuWidget"), &Z_Registration_Info_UClass_UMainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuWidget), 3526876187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_MainMenuWidget_h_3889862289(TEXT("/Script/ManagerUI"),
		Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_MainMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_Widgets_MainMenuWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
