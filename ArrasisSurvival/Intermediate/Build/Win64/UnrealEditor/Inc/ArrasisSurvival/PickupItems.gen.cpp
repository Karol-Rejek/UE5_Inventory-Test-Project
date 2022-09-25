// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrasisSurvival/Public/Actors/PickupItems.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupItems() {}
// Cross Module References
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_APickupItems_NoRegister();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_APickupItems();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_ArrasisSurvival();
// End Cross Module References
	void APickupItems::StaticRegisterNativesAPickupItems()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupItems);
	UClass* Z_Construct_UClass_APickupItems_NoRegister()
	{
		return APickupItems::StaticClass();
	}
	struct Z_Construct_UClass_APickupItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ArrasisSurvival,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItems_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actors/PickupItems.h" },
		{ "ModuleRelativePath", "Public/Actors/PickupItems.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupItems>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupItems_Statics::ClassParams = {
		&APickupItems::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupItems()
	{
		if (!Z_Registration_Info_UClass_APickupItems.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupItems.OuterSingleton, Z_Construct_UClass_APickupItems_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupItems.OuterSingleton;
	}
	template<> ARRASISSURVIVAL_API UClass* StaticClass<APickupItems>()
	{
		return APickupItems::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupItems);
	struct Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupItems, APickupItems::StaticClass, TEXT("APickupItems"), &Z_Registration_Info_UClass_APickupItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupItems), 274395540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_80426358(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
