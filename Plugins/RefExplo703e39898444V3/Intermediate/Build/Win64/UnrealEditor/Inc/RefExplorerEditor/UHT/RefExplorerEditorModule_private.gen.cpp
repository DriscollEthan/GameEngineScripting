// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RefExplorer/Private/RefExplorerEditorModule_private.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRefExplorerEditorModule_private() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
REFEXPLOREREDITOR_API UClass* Z_Construct_UClass_UEdGraph_RefExplorer();
REFEXPLOREREDITOR_API UClass* Z_Construct_UClass_UEdGraph_RefExplorer_NoRegister();
REFEXPLOREREDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_RefExplorer();
REFEXPLOREREDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_RefExplorer_NoRegister();
REFEXPLOREREDITOR_API UClass* Z_Construct_UClass_URefExplorerSchema();
REFEXPLOREREDITOR_API UClass* Z_Construct_UClass_URefExplorerSchema_NoRegister();
UPackage* Z_Construct_UPackage__Script_RefExplorerEditor();
// End Cross Module References

// Begin Class URefExplorerSchema
void URefExplorerSchema::StaticRegisterNativesURefExplorerSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URefExplorerSchema);
UClass* Z_Construct_UClass_URefExplorerSchema_NoRegister()
{
	return URefExplorerSchema::StaticClass();
}
struct Z_Construct_UClass_URefExplorerSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//--------------------------------------------------------------------\n// URefExplorerSchema\n//--------------------------------------------------------------------\n" },
		{ "IncludePath", "RefExplorerEditorModule_private.h" },
		{ "ModuleRelativePath", "Private/RefExplorerEditorModule_private.h" },
		{ "ToolTip", "URefExplorerSchema" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URefExplorerSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URefExplorerSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_RefExplorerEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefExplorerSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URefExplorerSchema_Statics::ClassParams = {
	&URefExplorerSchema::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URefExplorerSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_URefExplorerSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URefExplorerSchema()
{
	if (!Z_Registration_Info_UClass_URefExplorerSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URefExplorerSchema.OuterSingleton, Z_Construct_UClass_URefExplorerSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URefExplorerSchema.OuterSingleton;
}
template<> REFEXPLOREREDITOR_API UClass* StaticClass<URefExplorerSchema>()
{
	return URefExplorerSchema::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URefExplorerSchema);
URefExplorerSchema::~URefExplorerSchema() {}
// End Class URefExplorerSchema

// Begin Class UEdGraphNode_RefExplorer
void UEdGraphNode_RefExplorer::StaticRegisterNativesUEdGraphNode_RefExplorer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_RefExplorer);
UClass* Z_Construct_UClass_UEdGraphNode_RefExplorer_NoRegister()
{
	return UEdGraphNode_RefExplorer::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_RefExplorer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//--------------------------------------------------------------------\n// UEdGraphNode_RefExplorer\n//--------------------------------------------------------------------\n" },
		{ "IncludePath", "RefExplorerEditorModule_private.h" },
		{ "ModuleRelativePath", "Private/RefExplorerEditorModule_private.h" },
		{ "ToolTip", "UEdGraphNode_RefExplorer" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_RefExplorer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEdGraphNode_RefExplorer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_RefExplorerEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_RefExplorer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_RefExplorer_Statics::ClassParams = {
	&UEdGraphNode_RefExplorer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_RefExplorer_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_RefExplorer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode_RefExplorer()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode_RefExplorer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_RefExplorer.OuterSingleton, Z_Construct_UClass_UEdGraphNode_RefExplorer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode_RefExplorer.OuterSingleton;
}
template<> REFEXPLOREREDITOR_API UClass* StaticClass<UEdGraphNode_RefExplorer>()
{
	return UEdGraphNode_RefExplorer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_RefExplorer);
UEdGraphNode_RefExplorer::~UEdGraphNode_RefExplorer() {}
// End Class UEdGraphNode_RefExplorer

// Begin Class UEdGraph_RefExplorer
void UEdGraph_RefExplorer::StaticRegisterNativesUEdGraph_RefExplorer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph_RefExplorer);
UClass* Z_Construct_UClass_UEdGraph_RefExplorer_NoRegister()
{
	return UEdGraph_RefExplorer::StaticClass();
}
struct Z_Construct_UClass_UEdGraph_RefExplorer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//--------------------------------------------------------------------\n// UEdGraph_RefExplorer\n//--------------------------------------------------------------------\n" },
		{ "IncludePath", "RefExplorerEditorModule_private.h" },
		{ "ModuleRelativePath", "Private/RefExplorerEditorModule_private.h" },
		{ "ToolTip", "UEdGraph_RefExplorer" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph_RefExplorer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEdGraph_RefExplorer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_RefExplorerEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_RefExplorer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_RefExplorer_Statics::ClassParams = {
	&UEdGraph_RefExplorer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_RefExplorer_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraph_RefExplorer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraph_RefExplorer()
{
	if (!Z_Registration_Info_UClass_UEdGraph_RefExplorer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph_RefExplorer.OuterSingleton, Z_Construct_UClass_UEdGraph_RefExplorer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraph_RefExplorer.OuterSingleton;
}
template<> REFEXPLOREREDITOR_API UClass* StaticClass<UEdGraph_RefExplorer>()
{
	return UEdGraph_RefExplorer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph_RefExplorer);
UEdGraph_RefExplorer::~UEdGraph_RefExplorer() {}
// End Class UEdGraph_RefExplorer

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RefExplorer_Source_RefExplorer_Private_RefExplorerEditorModule_private_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URefExplorerSchema, URefExplorerSchema::StaticClass, TEXT("URefExplorerSchema"), &Z_Registration_Info_UClass_URefExplorerSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URefExplorerSchema), 638910629U) },
		{ Z_Construct_UClass_UEdGraphNode_RefExplorer, UEdGraphNode_RefExplorer::StaticClass, TEXT("UEdGraphNode_RefExplorer"), &Z_Registration_Info_UClass_UEdGraphNode_RefExplorer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_RefExplorer), 3867285062U) },
		{ Z_Construct_UClass_UEdGraph_RefExplorer, UEdGraph_RefExplorer::StaticClass, TEXT("UEdGraph_RefExplorer"), &Z_Registration_Info_UClass_UEdGraph_RefExplorer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph_RefExplorer), 2109655747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RefExplorer_Source_RefExplorer_Private_RefExplorerEditorModule_private_h_264045979(TEXT("/Script/RefExplorerEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RefExplorer_Source_RefExplorer_Private_RefExplorerEditorModule_private_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RefExplorer_Source_RefExplorer_Private_RefExplorerEditorModule_private_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
