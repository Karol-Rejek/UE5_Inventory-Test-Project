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
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AStorageContainer();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AStorageContainer_NoRegister();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArrasisSurvival();
// End Cross Module References
	DEFINE_FUNCTION(AStorageContainer::execGetInventoryComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInventoryComponent**)Z_Param__Result=P_THIS->GetInventoryComponent();
		P_NATIVE_END;
	}
	void AStorageContainer::StaticRegisterNativesAStorageContainer()
	{
		UClass* Class = AStorageContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInventoryComponent", &AStorageContainer::execGetInventoryComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics
	{
		struct StorageContainer_eventGetInventoryComponent_Parms
		{
			UInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StorageContainer_eventGetInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStorageContainer, nullptr, "GetInventoryComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::StorageContainer_eventGetInventoryComponent_Parms), Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStorageContainer_GetInventoryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStorageContainer_GetInventoryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStorageContainer);
	UClass* Z_Construct_UClass_AStorageContainer_NoRegister()
	{
		return AStorageContainer::StaticClass();
	}
	struct Z_Construct_UClass_AStorageContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MashComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MashComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStorageContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArrasisSurvival,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStorageContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStorageContainer_GetInventoryComponent, "GetInventoryComponent" }, // 563164531
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorageContainer_Statics::NewProp_MashComp = { "MashComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStorageContainer, MashComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStorageContainer_Statics::NewProp_MashComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorageContainer_Statics::NewProp_MashComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorageContainer_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "StorageContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorageContainer_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStorageContainer, Inventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStorageContainer_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorageContainer_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStorageContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorageContainer_Statics::NewProp_MashComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorageContainer_Statics::NewProp_Inventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStorageContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStorageContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStorageContainer_Statics::ClassParams = {
		&AStorageContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStorageContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	AStorageContainer::~AStorageContainer() {}
	struct Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_StorageContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_StorageContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStorageContainer, AStorageContainer::StaticClass, TEXT("AStorageContainer"), &Z_Registration_Info_UClass_AStorageContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStorageContainer), 660279165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_StorageContainer_h_2027162602(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_StorageContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_StorageContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
