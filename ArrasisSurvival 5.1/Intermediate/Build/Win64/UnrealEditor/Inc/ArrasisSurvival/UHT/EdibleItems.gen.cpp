// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrasisSurvival/Public/Actors/PickUpItems/EdibleItems.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdibleItems() {}
// Cross Module References
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AEdibleItems();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AEdibleItems_NoRegister();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_APickupItems();
	ARRASISSURVIVAL_API UEnum* Z_Construct_UEnum_ArrasisSurvival_EPikupType();
	UPackage* Z_Construct_UPackage__Script_ArrasisSurvival();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPikupType;
	static UEnum* EPikupType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPikupType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPikupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArrasisSurvival_EPikupType, Z_Construct_UPackage__Script_ArrasisSurvival(), TEXT("EPikupType"));
		}
		return Z_Registration_Info_UEnum_EPikupType.OuterSingleton;
	}
	template<> ARRASISSURVIVAL_API UEnum* StaticEnum<EPikupType>()
	{
		return EPikupType_StaticEnum();
	}
	struct Z_Construct_UEnum_ArrasisSurvival_EPikupType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ArrasisSurvival_EPikupType_Statics::Enumerators[] = {
		{ "EPikupType::EFoodCan", (int64)EPikupType::EFoodCan },
		{ "EPikupType::EWaterBottle", (int64)EPikupType::EWaterBottle },
		{ "EPikupType::EHealth", (int64)EPikupType::EHealth },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ArrasisSurvival_EPikupType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EFoodCan.DisplayName", "FoodCan" },
		{ "EFoodCan.Name", "EPikupType::EFoodCan" },
		{ "EHealth.DisplayName", "Medpack" },
		{ "EHealth.Name", "EPikupType::EHealth" },
		{ "EWaterBottle.DisplayName", "WaterBottle" },
		{ "EWaterBottle.Name", "EPikupType::EWaterBottle" },
		{ "ModuleRelativePath", "Public/Actors/PickUpItems/EdibleItems.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArrasisSurvival_EPikupType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ArrasisSurvival,
		nullptr,
		"EPikupType",
		"EPikupType",
		Z_Construct_UEnum_ArrasisSurvival_EPikupType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ArrasisSurvival_EPikupType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ArrasisSurvival_EPikupType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ArrasisSurvival_EPikupType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ArrasisSurvival_EPikupType()
	{
		if (!Z_Registration_Info_UEnum_EPikupType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPikupType.InnerSingleton, Z_Construct_UEnum_ArrasisSurvival_EPikupType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPikupType.InnerSingleton;
	}
	void AEdibleItems::StaticRegisterNativesAEdibleItems()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEdibleItems);
	UClass* Z_Construct_UClass_AEdibleItems_NoRegister()
	{
		return AEdibleItems::StaticClass();
	}
	struct Z_Construct_UClass_AEdibleItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PickupType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PickupType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEdibleItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupItems,
		(UObject* (*)())Z_Construct_UPackage__Script_ArrasisSurvival,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEdibleItems_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PickUpItems/EdibleItems.h" },
		{ "ModuleRelativePath", "Public/Actors/PickUpItems/EdibleItems.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEdibleItems_Statics::NewProp_PickupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEdibleItems_Statics::NewProp_PickupType_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "Public/Actors/PickUpItems/EdibleItems.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEdibleItems_Statics::NewProp_PickupType = { "PickupType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEdibleItems, PickupType), Z_Construct_UEnum_ArrasisSurvival_EPikupType, METADATA_PARAMS(Z_Construct_UClass_AEdibleItems_Statics::NewProp_PickupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEdibleItems_Statics::NewProp_PickupType_MetaData)) }; // 204210704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEdibleItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEdibleItems_Statics::NewProp_PickupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEdibleItems_Statics::NewProp_PickupType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEdibleItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEdibleItems>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEdibleItems_Statics::ClassParams = {
		&AEdibleItems::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEdibleItems_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEdibleItems_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEdibleItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEdibleItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEdibleItems()
	{
		if (!Z_Registration_Info_UClass_AEdibleItems.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEdibleItems.OuterSingleton, Z_Construct_UClass_AEdibleItems_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEdibleItems.OuterSingleton;
	}
	template<> ARRASISSURVIVAL_API UClass* StaticClass<AEdibleItems>()
	{
		return AEdibleItems::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEdibleItems);
	AEdibleItems::~AEdibleItems() {}
	struct Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_Actors_PickUpItems_EdibleItems_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_Actors_PickUpItems_EdibleItems_h_Statics::EnumInfo[] = {
		{ EPikupType_StaticEnum, TEXT("EPikupType"), &Z_Registration_Info_UEnum_EPikupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 204210704U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_Actors_PickUpItems_EdibleItems_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEdibleItems, AEdibleItems::StaticClass, TEXT("AEdibleItems"), &Z_Registration_Info_UClass_AEdibleItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEdibleItems), 3824168192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_Actors_PickUpItems_EdibleItems_h_1147565290(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_Actors_PickUpItems_EdibleItems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_Actors_PickUpItems_EdibleItems_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_Actors_PickUpItems_EdibleItems_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_Actors_PickUpItems_EdibleItems_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
