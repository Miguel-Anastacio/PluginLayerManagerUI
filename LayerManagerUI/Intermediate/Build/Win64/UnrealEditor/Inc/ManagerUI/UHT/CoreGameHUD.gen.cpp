// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManagerUI/Public/CoreGameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreGameHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MANAGERUI_API UClass* Z_Construct_UClass_ACoreGameHUD();
	MANAGERUI_API UClass* Z_Construct_UClass_ACoreGameHUD_NoRegister();
	MANAGERUI_API UClass* Z_Construct_UClass_ALayerManagerHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ManagerUI();
// End Cross Module References
	DEFINE_FUNCTION(ACoreGameHUD::execTogglePause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TogglePause_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoreGameHUD::execToggleInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleInventory_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACoreGameHUD_ToggleInventory = FName(TEXT("ToggleInventory"));
	void ACoreGameHUD::ToggleInventory()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACoreGameHUD_ToggleInventory),NULL);
	}
	static FName NAME_ACoreGameHUD_TogglePause = FName(TEXT("TogglePause"));
	void ACoreGameHUD::TogglePause()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACoreGameHUD_TogglePause),NULL);
	}
	void ACoreGameHUD::StaticRegisterNativesACoreGameHUD()
	{
		UClass* Class = ACoreGameHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleInventory", &ACoreGameHUD::execToggleInventory },
			{ "TogglePause", &ACoreGameHUD::execTogglePause },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoreGameHUD_ToggleInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameHUD_ToggleInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Event" },
		{ "Comment", "// EXAMPLE ONLY\n// This is an example event for like an inventory widget\n" },
		{ "ModuleRelativePath", "Public/CoreGameHUD.h" },
		{ "ToolTip", "EXAMPLE ONLY\nThis is an example event for like an inventory widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameHUD_ToggleInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameHUD, nullptr, "ToggleInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameHUD_ToggleInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameHUD_ToggleInventory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACoreGameHUD_ToggleInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameHUD_ToggleInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoreGameHUD_TogglePause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameHUD_TogglePause_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Event" },
		{ "Comment", "// You can define the pause behaviour either in blueprint or c++\n" },
		{ "ModuleRelativePath", "Public/CoreGameHUD.h" },
		{ "ToolTip", "You can define the pause behaviour either in blueprint or c++" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameHUD_TogglePause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameHUD, nullptr, "TogglePause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameHUD_TogglePause_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameHUD_TogglePause_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACoreGameHUD_TogglePause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameHUD_TogglePause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoreGameHUD);
	UClass* Z_Construct_UClass_ACoreGameHUD_NoRegister()
	{
		return ACoreGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACoreGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionsMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OptionsMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmModalClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConfirmModalClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HUDWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoreGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALayerManagerHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ManagerUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACoreGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoreGameHUD_ToggleInventory, "ToggleInventory" }, // 2415549805
		{ &Z_Construct_UFunction_ACoreGameHUD_TogglePause, "TogglePause" }, // 1732009856
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Example HUD that inherits from the LayerManager HUD\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CoreGameHUD.h" },
		{ "ModuleRelativePath", "Public/CoreGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Example HUD that inherits from the LayerManager HUD" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_MainMenuClass_MetaData[] = {
		{ "Category", "Menus" },
		{ "Comment", "// This are classes of widgets that can be spawned in c++\n" },
		{ "ModuleRelativePath", "Public/CoreGameHUD.h" },
		{ "ToolTip", "This are classes of widgets that can be spawned in c++" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_MainMenuClass = { "MainMenuClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameHUD, MainMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_MainMenuClass_MetaData), Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_MainMenuClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_OptionsMenuClass_MetaData[] = {
		{ "Category", "Menus" },
		{ "ModuleRelativePath", "Public/CoreGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_OptionsMenuClass = { "OptionsMenuClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameHUD, OptionsMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_OptionsMenuClass_MetaData), Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_OptionsMenuClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/CoreGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameHUD, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_HUDClass_MetaData), Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_HUDClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_InventoryClass_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/CoreGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_InventoryClass = { "InventoryClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameHUD, InventoryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_InventoryClass_MetaData), Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_InventoryClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_ConfirmModalClass_MetaData[] = {
		{ "Category", "Modals" },
		{ "ModuleRelativePath", "Public/CoreGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_ConfirmModalClass = { "ConfirmModalClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameHUD, ConfirmModalClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_ConfirmModalClass_MetaData), Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_ConfirmModalClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "// References to specific widgets, only have to define in c++ and set if you wish to \n// use them in code\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGameHUD.h" },
		{ "ToolTip", "References to specific widgets, only have to define in c++ and set if you wish to\nuse them in code" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x002408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameHUD, HUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_HUDWidget_MetaData), Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_HUDWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_InventoryWidget_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_InventoryWidget = { "InventoryWidget", nullptr, (EPropertyFlags)0x002408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameHUD, InventoryWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_InventoryWidget_MetaData), Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_InventoryWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoreGameHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_MainMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_OptionsMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_HUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_InventoryClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_ConfirmModalClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_HUDWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameHUD_Statics::NewProp_InventoryWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoreGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoreGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoreGameHUD_Statics::ClassParams = {
		&ACoreGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACoreGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoreGameHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACoreGameHUD()
	{
		if (!Z_Registration_Info_UClass_ACoreGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoreGameHUD.OuterSingleton, Z_Construct_UClass_ACoreGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoreGameHUD.OuterSingleton;
	}
	template<> MANAGERUI_API UClass* StaticClass<ACoreGameHUD>()
	{
		return ACoreGameHUD::StaticClass();
	}
	ACoreGameHUD::ACoreGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoreGameHUD);
	ACoreGameHUD::~ACoreGameHUD() {}
	struct Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_CoreGameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_CoreGameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoreGameHUD, ACoreGameHUD::StaticClass, TEXT("ACoreGameHUD"), &Z_Registration_Info_UClass_ACoreGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoreGameHUD), 911839718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_CoreGameHUD_h_1847523353(TEXT("/Script/ManagerUI"),
		Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_CoreGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_CoreGameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
