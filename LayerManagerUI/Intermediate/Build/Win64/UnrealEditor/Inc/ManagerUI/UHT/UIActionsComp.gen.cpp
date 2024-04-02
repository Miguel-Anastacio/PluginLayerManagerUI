// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManagerUI/Public/UIActionsComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIActionsComp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	MANAGERUI_API UClass* Z_Construct_UClass_UUIActionsComp();
	MANAGERUI_API UClass* Z_Construct_UClass_UUIActionsComp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ManagerUI();
// End Cross Module References
	DEFINE_FUNCTION(UUIActionsComp::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIActionsComp::execToggleInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIActionsComp::execRemoveUIMappingContext)
	{
		P_GET_OBJECT(UEnhancedInputLocalPlayerSubsystem,Z_Param_subsystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveUIMappingContext(Z_Param_subsystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIActionsComp::execAddUIMappingContext)
	{
		P_GET_OBJECT(UEnhancedInputLocalPlayerSubsystem,Z_Param_subsystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddUIMappingContext(Z_Param_subsystem);
		P_NATIVE_END;
	}
	void UUIActionsComp::StaticRegisterNativesUUIActionsComp()
	{
		UClass* Class = UUIActionsComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddUIMappingContext", &UUIActionsComp::execAddUIMappingContext },
			{ "Pause", &UUIActionsComp::execPause },
			{ "RemoveUIMappingContext", &UUIActionsComp::execRemoveUIMappingContext },
			{ "ToggleInventory", &UUIActionsComp::execToggleInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics
	{
		struct UIActionsComp_eventAddUIMappingContext_Parms
		{
			UEnhancedInputLocalPlayerSubsystem* subsystem;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_subsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::NewProp_subsystem = { "subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIActionsComp_eventAddUIMappingContext_Parms, subsystem), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::NewProp_subsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action Mapping" },
		{ "Comment", "/**\n\x09 * Adds a UI mapping context to the specified subsystem.\n\x09 * @param Subsystem The subsystem to add the mapping context to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UIActionsComp.h" },
		{ "ToolTip", "Adds a UI mapping context to the specified subsystem.\n@param Subsystem The subsystem to add the mapping context to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIActionsComp, nullptr, "AddUIMappingContext", nullptr, nullptr, Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::UIActionsComp_eventAddUIMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::UIActionsComp_eventAddUIMappingContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIActionsComp_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIActionsComp_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "Comment", "/** Pauses the game. - Example function action */" },
		{ "ModuleRelativePath", "Public/UIActionsComp.h" },
		{ "ToolTip", "Pauses the game. - Example function action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIActionsComp_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIActionsComp, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIActionsComp_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIActionsComp_Pause_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUIActionsComp_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIActionsComp_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics
	{
		struct UIActionsComp_eventRemoveUIMappingContext_Parms
		{
			UEnhancedInputLocalPlayerSubsystem* subsystem;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_subsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::NewProp_subsystem = { "subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIActionsComp_eventRemoveUIMappingContext_Parms, subsystem), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::NewProp_subsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action Mapping" },
		{ "Comment", "/**\n\x09 * Removes a UI mapping context from the specified subsystem.\n\x09 * @param Subsystem The subsystem to remove the mapping context from.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UIActionsComp.h" },
		{ "ToolTip", "Removes a UI mapping context from the specified subsystem.\n@param Subsystem The subsystem to remove the mapping context from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIActionsComp, nullptr, "RemoveUIMappingContext", nullptr, nullptr, Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::UIActionsComp_eventRemoveUIMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::UIActionsComp_eventRemoveUIMappingContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIActionsComp_ToggleInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIActionsComp_ToggleInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "Comment", "/** Toggles the inventory. - Example function action */" },
		{ "ModuleRelativePath", "Public/UIActionsComp.h" },
		{ "ToolTip", "Toggles the inventory. - Example function action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIActionsComp_ToggleInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIActionsComp, nullptr, "ToggleInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIActionsComp_ToggleInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIActionsComp_ToggleInventory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUIActionsComp_ToggleInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIActionsComp_ToggleInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIActionsComp);
	UClass* Z_Construct_UClass_UUIActionsComp_NoRegister()
	{
		return UUIActionsComp::StaticClass();
	}
	struct Z_Construct_UClass_UUIActionsComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContextPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MappingContextPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIActionsComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ManagerUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIActionsComp_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIActionsComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIActionsComp_AddUIMappingContext, "AddUIMappingContext" }, // 3020004701
		{ &Z_Construct_UFunction_UUIActionsComp_Pause, "Pause" }, // 1810425328
		{ &Z_Construct_UFunction_UUIActionsComp_RemoveUIMappingContext, "RemoveUIMappingContext" }, // 2423992456
		{ &Z_Construct_UFunction_UUIActionsComp_ToggleInventory, "ToggleInventory" }, // 3425659196
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIActionsComp_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIActionsComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UIActionsComp.h" },
		{ "ModuleRelativePath", "Public/UIActionsComp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIActionsComp_Statics::NewProp_MappingContextPriority_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** The priority of the mapping context. */" },
		{ "ModuleRelativePath", "Public/UIActionsComp.h" },
		{ "ToolTip", "The priority of the mapping context." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIActionsComp_Statics::NewProp_MappingContextPriority = { "MappingContextPriority", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIActionsComp, MappingContextPriority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIActionsComp_Statics::NewProp_MappingContextPriority_MetaData), Z_Construct_UClass_UUIActionsComp_Statics::NewProp_MappingContextPriority_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIActionsComp_Statics::NewProp_UIMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** The UI mapping context. */" },
		{ "ModuleRelativePath", "Public/UIActionsComp.h" },
		{ "ToolTip", "The UI mapping context." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIActionsComp_Statics::NewProp_UIMappingContext = { "UIMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIActionsComp, UIMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIActionsComp_Statics::NewProp_UIMappingContext_MetaData), Z_Construct_UClass_UUIActionsComp_Statics::NewProp_UIMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIActionsComp_Statics::NewProp_PauseAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** The action for pausing the game. - Example action */" },
		{ "ModuleRelativePath", "Public/UIActionsComp.h" },
		{ "ToolTip", "The action for pausing the game. - Example action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIActionsComp_Statics::NewProp_PauseAction = { "PauseAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIActionsComp, PauseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIActionsComp_Statics::NewProp_PauseAction_MetaData), Z_Construct_UClass_UUIActionsComp_Statics::NewProp_PauseAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIActionsComp_Statics::NewProp_InventoryAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** The action for toggling the inventory. - Example action */" },
		{ "ModuleRelativePath", "Public/UIActionsComp.h" },
		{ "ToolTip", "The action for toggling the inventory. - Example action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIActionsComp_Statics::NewProp_InventoryAction = { "InventoryAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIActionsComp, InventoryAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIActionsComp_Statics::NewProp_InventoryAction_MetaData), Z_Construct_UClass_UUIActionsComp_Statics::NewProp_InventoryAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIActionsComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIActionsComp_Statics::NewProp_MappingContextPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIActionsComp_Statics::NewProp_UIMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIActionsComp_Statics::NewProp_PauseAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIActionsComp_Statics::NewProp_InventoryAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIActionsComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIActionsComp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIActionsComp_Statics::ClassParams = {
		&UUIActionsComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIActionsComp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIActionsComp_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIActionsComp_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIActionsComp_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIActionsComp_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUIActionsComp()
	{
		if (!Z_Registration_Info_UClass_UUIActionsComp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIActionsComp.OuterSingleton, Z_Construct_UClass_UUIActionsComp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIActionsComp.OuterSingleton;
	}
	template<> MANAGERUI_API UClass* StaticClass<UUIActionsComp>()
	{
		return UUIActionsComp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIActionsComp);
	UUIActionsComp::~UUIActionsComp() {}
	struct Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_UIActionsComp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_UIActionsComp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIActionsComp, UUIActionsComp::StaticClass, TEXT("UUIActionsComp"), &Z_Registration_Info_UClass_UUIActionsComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIActionsComp), 433524604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_UIActionsComp_h_889044656(TEXT("/Script/ManagerUI"),
		Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_UIActionsComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_UIActionsComp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
