// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrasisSurvival/ArrasisSurvivalGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrasisSurvivalGameMode() {}
// Cross Module References
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AArrasisSurvivalGameMode_NoRegister();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AArrasisSurvivalGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArrasisSurvival();
// End Cross Module References
	void AArrasisSurvivalGameMode::StaticRegisterNativesAArrasisSurvivalGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArrasisSurvivalGameMode);
	UClass* Z_Construct_UClass_AArrasisSurvivalGameMode_NoRegister()
	{
		return AArrasisSurvivalGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AArrasisSurvivalGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArrasisSurvivalGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArrasisSurvival,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArrasisSurvivalGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ArrasisSurvivalGameMode.h" },
		{ "ModuleRelativePath", "ArrasisSurvivalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArrasisSurvivalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArrasisSurvivalGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArrasisSurvivalGameMode_Statics::ClassParams = {
		&AArrasisSurvivalGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArrasisSurvivalGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArrasisSurvivalGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArrasisSurvivalGameMode()
	{
		if (!Z_Registration_Info_UClass_AArrasisSurvivalGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArrasisSurvivalGameMode.OuterSingleton, Z_Construct_UClass_AArrasisSurvivalGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArrasisSurvivalGameMode.OuterSingleton;
	}
	template<> ARRASISSURVIVAL_API UClass* StaticClass<AArrasisSurvivalGameMode>()
	{
		return AArrasisSurvivalGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArrasisSurvivalGameMode);
	struct Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_ArrasisSurvivalGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_ArrasisSurvivalGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArrasisSurvivalGameMode, AArrasisSurvivalGameMode::StaticClass, TEXT("AArrasisSurvivalGameMode"), &Z_Registration_Info_UClass_AArrasisSurvivalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArrasisSurvivalGameMode), 1262943382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_ArrasisSurvivalGameMode_h_3670273901(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_ArrasisSurvivalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_ArrasisSurvivalGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
