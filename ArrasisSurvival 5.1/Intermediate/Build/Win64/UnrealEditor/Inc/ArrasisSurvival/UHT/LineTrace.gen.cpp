// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrasisSurvival/Public/LineTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineTrace() {}
// Cross Module References
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_ULineTrace();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_ULineTrace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ArrasisSurvival();
// End Cross Module References
	void ULineTrace::StaticRegisterNativesULineTrace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULineTrace);
	UClass* Z_Construct_UClass_ULineTrace_NoRegister()
	{
		return ULineTrace::StaticClass();
	}
	struct Z_Construct_UClass_ULineTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULineTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ArrasisSurvival,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineTrace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LineTrace.h" },
		{ "ModuleRelativePath", "Public/LineTrace.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULineTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULineTrace_Statics::ClassParams = {
		&ULineTrace::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULineTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULineTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULineTrace()
	{
		if (!Z_Registration_Info_UClass_ULineTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULineTrace.OuterSingleton, Z_Construct_UClass_ULineTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULineTrace.OuterSingleton;
	}
	template<> ARRASISSURVIVAL_API UClass* StaticClass<ULineTrace>()
	{
		return ULineTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULineTrace);
	ULineTrace::~ULineTrace() {}
	struct Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_LineTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_LineTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULineTrace, ULineTrace::StaticClass, TEXT("ULineTrace"), &Z_Registration_Info_UClass_ULineTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULineTrace), 3208882967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_LineTrace_h_2994984262(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_LineTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_LineTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
