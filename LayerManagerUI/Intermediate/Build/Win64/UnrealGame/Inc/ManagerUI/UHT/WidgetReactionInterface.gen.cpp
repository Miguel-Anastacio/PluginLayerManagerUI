// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManagerUI/Public/WidgetReactionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetReactionInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MANAGERUI_API UClass* Z_Construct_UClass_UWidgetReactionInterface();
	MANAGERUI_API UClass* Z_Construct_UClass_UWidgetReactionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ManagerUI();
// End Cross Module References
	DEFINE_FUNCTION(IWidgetReactionInterface::execOnWidgetPopped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWidgetPopped_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWidgetReactionInterface::execOnWidgetPushed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWidgetPushed_Implementation();
		P_NATIVE_END;
	}
	void IWidgetReactionInterface::OnWidgetPopped()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnWidgetPopped instead.");
	}
	void IWidgetReactionInterface::OnWidgetPushed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnWidgetPushed instead.");
	}
	void UWidgetReactionInterface::StaticRegisterNativesUWidgetReactionInterface()
	{
		UClass* Class = UWidgetReactionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnWidgetPopped", &IWidgetReactionInterface::execOnWidgetPopped },
			{ "OnWidgetPushed", &IWidgetReactionInterface::execOnWidgetPushed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPopped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPopped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget Reaction" },
		{ "Comment", "/**\n\x09* Defines the reaction when the widget is popped.\n\x09* This function can be overridden to implement specific behavior.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WidgetReactionInterface.h" },
		{ "ToolTip", "Defines the reaction when the widget is popped.\nThis function can be overridden to implement specific behavior." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetReactionInterface, nullptr, "OnWidgetPopped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPopped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPopped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPushed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPushed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget Reaction" },
		{ "Comment", "/**\n\x09 * Defines the reaction when the widget is pushed.\n\x09 * This function can be overridden to implement specific behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WidgetReactionInterface.h" },
		{ "ToolTip", "Defines the reaction when the widget is pushed.\nThis function can be overridden to implement specific behavior." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPushed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetReactionInterface, nullptr, "OnWidgetPushed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPushed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPushed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPushed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPushed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetReactionInterface);
	UClass* Z_Construct_UClass_UWidgetReactionInterface_NoRegister()
	{
		return UWidgetReactionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetReactionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetReactionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ManagerUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetReactionInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetReactionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPopped, "OnWidgetPopped" }, // 847546030
		{ &Z_Construct_UFunction_UWidgetReactionInterface_OnWidgetPushed, "OnWidgetPushed" }, // 2716264345
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetReactionInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetReactionInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WidgetReactionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetReactionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWidgetReactionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetReactionInterface_Statics::ClassParams = {
		&UWidgetReactionInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetReactionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetReactionInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWidgetReactionInterface()
	{
		if (!Z_Registration_Info_UClass_UWidgetReactionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetReactionInterface.OuterSingleton, Z_Construct_UClass_UWidgetReactionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetReactionInterface.OuterSingleton;
	}
	template<> MANAGERUI_API UClass* StaticClass<UWidgetReactionInterface>()
	{
		return UWidgetReactionInterface::StaticClass();
	}
	UWidgetReactionInterface::UWidgetReactionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetReactionInterface);
	UWidgetReactionInterface::~UWidgetReactionInterface() {}
	static FName NAME_UWidgetReactionInterface_OnWidgetPopped = FName(TEXT("OnWidgetPopped"));
	void IWidgetReactionInterface::Execute_OnWidgetPopped(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWidgetReactionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UWidgetReactionInterface_OnWidgetPopped);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IWidgetReactionInterface*)(O->GetNativeInterfaceAddress(UWidgetReactionInterface::StaticClass())))
		{
			I->OnWidgetPopped_Implementation();
		}
	}
	static FName NAME_UWidgetReactionInterface_OnWidgetPushed = FName(TEXT("OnWidgetPushed"));
	void IWidgetReactionInterface::Execute_OnWidgetPushed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWidgetReactionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UWidgetReactionInterface_OnWidgetPushed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IWidgetReactionInterface*)(O->GetNativeInterfaceAddress(UWidgetReactionInterface::StaticClass())))
		{
			I->OnWidgetPushed_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_WidgetReactionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_WidgetReactionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetReactionInterface, UWidgetReactionInterface::StaticClass, TEXT("UWidgetReactionInterface"), &Z_Registration_Info_UClass_UWidgetReactionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetReactionInterface), 634161241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_WidgetReactionInterface_h_1482611416(TEXT("/Script/ManagerUI"),
		Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_WidgetReactionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_Unreal_FoundationUI_Build_BuiltPlugins_LayerManagerUI_5_3_HostProject_Plugins_ManagerUI_Source_ManagerUI_Public_WidgetReactionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
