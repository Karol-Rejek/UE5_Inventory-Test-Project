// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrasisSurvival/Public/StorageContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorageContainer() {}
// Cross Module References
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AStorageContainer_NoRegister();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AStorageContainer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArrasisSurvival();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AStorageContainer::StaticRegisterNativesAStorageContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStorageContainer);
	UClass* Z_Construct_UClass_AStorageContainer_NoRegister()
	{
		return AStorageContainer::StaticClass();
	}
	struct Z_Construct_UClass_AStorageContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MashComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MashComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStorageContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArrasisSurvival,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorageContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StorageContainer.h" },
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorageContainer_Statics::NewProp_MashComp_MetaData[] = {
		{ "Category", "StorageContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorageContainer_Statics::NewProp_MashComp = { "MashComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStorageContainer, MashComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStorageContainer_Statics::NewProp_MashComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorageContainer_Statics::NewProp_MashComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStorageContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorageContainer_Statics::NewProp_MashComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStorageContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStorageContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStorageContainer_Statics::ClassParams = {
		&AStorageContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStorageContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStorageContainer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStorageContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStorageContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStorageContainer()
	{
		if (!Z_Registration_Info_UClass_AStorageContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStorageContainer.OuterSingleton, Z_Construct_UClass_AStorageContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStorageContainer.OuterSingleton;
	}
	template<> ARRASISSURVIVAL_API UClass* StaticClass<AStorageContainer>()
	{
		return AStorageContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStorageContainer);
	struct Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_StorageContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_StorageContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStorageContainer, AStorageContainer::StaticClass, TEXT("AStorageContainer"), &Z_Registration_Info_UClass_AStorageContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStorageContainer), 1494485132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_StorageContainer_h_722169007(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_StorageContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_StorageContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
