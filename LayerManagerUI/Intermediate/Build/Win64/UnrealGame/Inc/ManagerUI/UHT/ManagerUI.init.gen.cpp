// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManagerUI_init() {}
	MANAGERUI_API UFunction* Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ManagerUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ManagerUI()
	{
		if (!Z_Registration_Info_UPackage__Script_ManagerUI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ManagerUI_CustomButtonClickedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ManagerUI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x58B3290E,
				0xEF582D7D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ManagerUI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ManagerUI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ManagerUI(Z_Construct_UPackage__Script_ManagerUI, TEXT("/Script/ManagerUI"), Z_Registration_Info_UPackage__Script_ManagerUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x58B3290E, 0xEF582D7D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
