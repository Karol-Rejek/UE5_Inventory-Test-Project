// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrasisSurvival/Public/StorageContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorageContainer() {}
// Cross Module References
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AStorageContainer();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AStorageContainer_NoRegister();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
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
	DEFINE_FUNCTION(AStorageContainer::execServer_OpenedChest)
	{
		P_GET_UBOOL(Z_Param_Opened);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OpenedChest_Validate(Z_Param_Opened))
		{
			RPC_ValidateFailed(TEXT("Server_OpenedChest_Validate"));
			return;
		}
		P_THIS->Server_OpenedChest_Implementation(Z_Param_Opened);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStorageContainer::execOnRep_CheckIsOpened)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CheckIsOpened();
		P_NATIVE_END;
	}
	struct StorageContainer_eventServer_OpenedChest_Parms
	{
		bool Opened;
	};
	static FName NAME_AStorageContainer_Server_OpenedChest = FName(TEXT("Server_OpenedChest"));
	void AStorageContainer::Server_OpenedChest(bool Opened)
	{
		StorageContainer_eventServer_OpenedChest_Parms Parms;
		Parms.Opened=Opened ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AStorageContainer_Server_OpenedChest),&Parms);
	}
	void AStorageContainer::StaticRegisterNativesAStorageContainer()
	{
		UClass* Class = AStorageContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInventoryComponent", &AStorageContainer::execGetInventoryComponent },
			{ "OnRep_CheckIsOpened", &AStorageContainer::execOnRep_CheckIsOpened },
			{ "Server_OpenedChest", &AStorageContainer::execServer_OpenedChest },
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
	struct Z_Construct_UFunction_AStorageContainer_OnRep_CheckIsOpened_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStorageContainer_OnRep_CheckIsOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStorageContainer_OnRep_CheckIsOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStorageContainer, nullptr, "OnRep_CheckIsOpened", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStorageContainer_OnRep_CheckIsOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStorageContainer_OnRep_CheckIsOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStorageContainer_OnRep_CheckIsOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStorageContainer_OnRep_CheckIsOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics
	{
		static void NewProp_Opened_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Opened;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::NewProp_Opened_SetBit(void* Obj)
	{
		((StorageContainer_eventServer_OpenedChest_Parms*)Obj)->Opened = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::NewProp_Opened = { "Opened", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StorageContainer_eventServer_OpenedChest_Parms), &Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::NewProp_Opened_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::NewProp_Opened,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStorageContainer, nullptr, "Server_OpenedChest", nullptr, nullptr, sizeof(StorageContainer_eventServer_OpenedChest_Parms), Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStorageContainer_Server_OpenedChest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStorageContainer_Server_OpenedChest_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsOpen_MetaData[];
#endif
		static void NewProp_IsOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOpen;
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
		{ &Z_Construct_UFunction_AStorageContainer_OnRep_CheckIsOpened, "OnRep_CheckIsOpened" }, // 1620225034
		{ &Z_Construct_UFunction_AStorageContainer_Server_OpenedChest, "Server_OpenedChest" }, // 1108258381
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorageContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StorageContainer.h" },
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorageContainer_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "StorageContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorageContainer_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStorageContainer, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStorageContainer_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorageContainer_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorageContainer_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "StorageContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorageContainer_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStorageContainer, Inventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStorageContainer_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorageContainer_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorageContainer_Statics::NewProp_OpenAnimation_MetaData[] = {
		{ "Category", "StorageContainer" },
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorageContainer_Statics::NewProp_OpenAnimation = { "OpenAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStorageContainer, OpenAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStorageContainer_Statics::NewProp_OpenAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorageContainer_Statics::NewProp_OpenAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorageContainer_Statics::NewProp_CloseAnimation_MetaData[] = {
		{ "Category", "StorageContainer" },
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorageContainer_Statics::NewProp_CloseAnimation = { "CloseAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStorageContainer, CloseAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStorageContainer_Statics::NewProp_CloseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorageContainer_Statics::NewProp_CloseAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorageContainer_Statics::NewProp_IsOpen_MetaData[] = {
		{ "ModuleRelativePath", "Public/StorageContainer.h" },
	};
#endif
	void Z_Construct_UClass_AStorageContainer_Statics::NewProp_IsOpen_SetBit(void* Obj)
	{
		((AStorageContainer*)Obj)->IsOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStorageContainer_Statics::NewProp_IsOpen = { "IsOpen", "OnRep_CheckIsOpened", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AStorageContainer), &Z_Construct_UClass_AStorageContainer_Statics::NewProp_IsOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStorageContainer_Statics::NewProp_IsOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorageContainer_Statics::NewProp_IsOpen_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStorageContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorageContainer_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorageContainer_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorageContainer_Statics::NewProp_OpenAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorageContainer_Statics::NewProp_CloseAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorageContainer_Statics::NewProp_IsOpen,
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

	void AStorageContainer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_IsOpen(TEXT("IsOpen"));

		const bool bIsValid = true
			&& Name_IsOpen == ClassReps[(int32)ENetFields_Private::IsOpen].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AStorageContainer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStorageContainer);
	AStorageContainer::~AStorageContainer() {}
	struct Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_StorageContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_StorageContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStorageContainer, AStorageContainer::StaticClass, TEXT("AStorageContainer"), &Z_Registration_Info_UClass_AStorageContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStorageContainer), 2063955683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_StorageContainer_h_706461433(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_StorageContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_Public_StorageContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
