// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/TabRestoreSettings.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTabRestoreSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
TABRESTORE_API UClass* Z_Construct_UClass_UTabRestoreSettings();
TABRESTORE_API UClass* Z_Construct_UClass_UTabRestoreSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_TabRestore();
// End Cross Module References

// Begin Class UTabRestoreSettings
void UTabRestoreSettings::StaticRegisterNativesUTabRestoreSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTabRestoreSettings);
UClass* Z_Construct_UClass_UTabRestoreSettings_NoRegister()
{
	return UTabRestoreSettings::StaticClass();
}
struct Z_Construct_UClass_UTabRestoreSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TabRestoreSettings.h" },
		{ "ModuleRelativePath", "Public/TabRestoreSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestoreClosedTab_MetaData[] = {
		{ "Category", "TabRestore" },
		{ "ModuleRelativePath", "Public/TabRestoreSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RestoreClosedTab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTabRestoreSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTabRestoreSettings_Statics::NewProp_RestoreClosedTab = { "RestoreClosedTab", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTabRestoreSettings, RestoreClosedTab), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestoreClosedTab_MetaData), NewProp_RestoreClosedTab_MetaData) }; // 4109060215
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTabRestoreSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabRestoreSettings_Statics::NewProp_RestoreClosedTab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTabRestoreSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTabRestoreSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TabRestore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTabRestoreSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTabRestoreSettings_Statics::ClassParams = {
	&UTabRestoreSettings::StaticClass,
	"TabRestoreSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTabRestoreSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTabRestoreSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTabRestoreSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UTabRestoreSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTabRestoreSettings()
{
	if (!Z_Registration_Info_UClass_UTabRestoreSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTabRestoreSettings.OuterSingleton, Z_Construct_UClass_UTabRestoreSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTabRestoreSettings.OuterSingleton;
}
template<> TABRESTORE_API UClass* StaticClass<UTabRestoreSettings>()
{
	return UTabRestoreSettings::StaticClass();
}
UTabRestoreSettings::UTabRestoreSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTabRestoreSettings);
UTabRestoreSettings::~UTabRestoreSettings() {}
// End Class UTabRestoreSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TabRestore_Source_Public_TabRestoreSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTabRestoreSettings, UTabRestoreSettings::StaticClass, TEXT("UTabRestoreSettings"), &Z_Registration_Info_UClass_UTabRestoreSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTabRestoreSettings), 702020367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TabRestore_Source_Public_TabRestoreSettings_h_1077322008(TEXT("/Script/TabRestore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TabRestore_Source_Public_TabRestoreSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TabRestore_Source_Public_TabRestoreSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
