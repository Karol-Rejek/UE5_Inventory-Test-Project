// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrasisSurvival/SurvivalMan_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalMan_GameMode() {}
// Cross Module References
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_ASurvivalMan_GameMode();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_ASurvivalMan_GameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_ArrasisSurvival();
// End Cross Module References
	void ASurvivalMan_GameMode::StaticRegisterNativesASurvivalMan_GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivalMan_GameMode);
	UClass* Z_Construct_UClass_ASurvivalMan_GameMode_NoRegister()
	{
		return ASurvivalMan_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalMan_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalMan_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ArrasisSurvival,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalMan_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SurvivalMan_GameMode.h" },
		{ "ModuleRelativePath", "SurvivalMan_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalMan_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalMan_GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalMan_GameMode_Statics::ClassParams = {
		&ASurvivalMan_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalMan_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalMan_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalMan_GameMode()
	{
		if (!Z_Registration_Info_UClass_ASurvivalMan_GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalMan_GameMode.OuterSingleton, Z_Construct_UClass_ASurvivalMan_GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASurvivalMan_GameMode.OuterSingleton;
	}
	template<> ARRASISSURVIVAL_API UClass* StaticClass<ASurvivalMan_GameMode>()
	{
		return ASurvivalMan_GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalMan_GameMode);
	ASurvivalMan_GameMode::~ASurvivalMan_GameMode() {}
	struct Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalMan_GameMode, ASurvivalMan_GameMode::StaticClass, TEXT("ASurvivalMan_GameMode"), &Z_Registration_Info_UClass_ASurvivalMan_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalMan_GameMode), 626751365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_GameMode_h_832814589(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
