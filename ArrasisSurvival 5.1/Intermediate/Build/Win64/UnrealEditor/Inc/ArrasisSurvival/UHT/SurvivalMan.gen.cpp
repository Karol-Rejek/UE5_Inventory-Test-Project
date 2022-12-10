// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrasisSurvival/SurvivalMan.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalMan() {}
// Cross Module References
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_AStorageContainer_NoRegister();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_ASurvivalMan();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_ASurvivalMan_NoRegister();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArrasisSurvival();
// End Cross Module References
	DEFINE_FUNCTION(ASurvivalMan::execGetInventoryComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInventoryComponent**)Z_Param__Result=P_THIS->GetInventoryComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalMan::execGetOpenedContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AStorageContainer**)Z_Param__Result=P_THIS->GetOpenedContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalMan::execReturnStats)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ReturnStats(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalMan::execServer_CloseInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_CloseInventory_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_CloseInventory_Validate"));
			return;
		}
		P_THIS->Server_CloseInventory_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalMan::execServer_Interact)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Interact_Validate(Z_Param_Start,Z_Param_End))
		{
			RPC_ValidateFailed(TEXT("Server_Interact_Validate"));
			return;
		}
		P_THIS->Server_Interact_Implementation(Z_Param_Start,Z_Param_End);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalMan::execOnRep_OpenCloseContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OpenCloseContainer();
		P_NATIVE_END;
	}
	struct SurvivalMan_eventServer_Interact_Parms
	{
		FVector Start;
		FVector End;
	};
	static FName NAME_ASurvivalMan_Server_CloseInventory = FName(TEXT("Server_CloseInventory"));
	void ASurvivalMan::Server_CloseInventory()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalMan_Server_CloseInventory),NULL);
	}
	static FName NAME_ASurvivalMan_Server_Interact = FName(TEXT("Server_Interact"));
	void ASurvivalMan::Server_Interact(FVector Start, FVector End)
	{
		SurvivalMan_eventServer_Interact_Parms Parms;
		Parms.Start=Start;
		Parms.End=End;
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalMan_Server_Interact),&Parms);
	}
	void ASurvivalMan::StaticRegisterNativesASurvivalMan()
	{
		UClass* Class = ASurvivalMan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInventoryComponent", &ASurvivalMan::execGetInventoryComponent },
			{ "GetOpenedContainer", &ASurvivalMan::execGetOpenedContainer },
			{ "OnRep_OpenCloseContainer", &ASurvivalMan::execOnRep_OpenCloseContainer },
			{ "ReturnStats", &ASurvivalMan::execReturnStats },
			{ "Server_CloseInventory", &ASurvivalMan::execServer_CloseInventory },
			{ "Server_Interact", &ASurvivalMan::execServer_Interact },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics
	{
		struct SurvivalMan_eventGetInventoryComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalMan_eventGetInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalMan, nullptr, "GetInventoryComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::SurvivalMan_eventGetInventoryComponent_Parms), Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics
	{
		struct SurvivalMan_eventGetOpenedContainer_Parms
		{
			AStorageContainer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalMan_eventGetOpenedContainer_Parms, ReturnValue), Z_Construct_UClass_AStorageContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalMan, nullptr, "GetOpenedContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics::SurvivalMan_eventGetOpenedContainer_Parms), Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalMan_OnRep_OpenCloseContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalMan_OnRep_OpenCloseContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalMan_OnRep_OpenCloseContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalMan, nullptr, "OnRep_OpenCloseContainer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalMan_OnRep_OpenCloseContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_OnRep_OpenCloseContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalMan_OnRep_OpenCloseContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalMan_OnRep_OpenCloseContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics
	{
		struct SurvivalMan_eventReturnStats_Parms
		{
			int32 index;
			float ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalMan_eventReturnStats_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalMan_eventReturnStats_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalMan, nullptr, "ReturnStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::SurvivalMan_eventReturnStats_Parms), Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalMan_ReturnStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalMan_Server_CloseInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalMan_Server_CloseInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalMan_Server_CloseInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalMan, nullptr, "Server_CloseInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalMan_Server_CloseInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_Server_CloseInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalMan_Server_CloseInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalMan_Server_CloseInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalMan_eventServer_Interact_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalMan_eventServer_Interact_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::NewProp_End,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalMan, nullptr, "Server_Interact", nullptr, nullptr, sizeof(SurvivalMan_eventServer_Interact_Parms), Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalMan_Server_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalMan_Server_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivalMan);
	UClass* Z_Construct_UClass_ASurvivalMan_NoRegister()
	{
		return ASurvivalMan::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalMan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenedContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenedContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalMan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ArrasisSurvival,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASurvivalMan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASurvivalMan_GetInventoryComponent, "GetInventoryComponent" }, // 2738846109
		{ &Z_Construct_UFunction_ASurvivalMan_GetOpenedContainer, "GetOpenedContainer" }, // 4034332182
		{ &Z_Construct_UFunction_ASurvivalMan_OnRep_OpenCloseContainer, "OnRep_OpenCloseContainer" }, // 4175123832
		{ &Z_Construct_UFunction_ASurvivalMan_ReturnStats, "ReturnStats" }, // 454184654
		{ &Z_Construct_UFunction_ASurvivalMan_Server_CloseInventory, "Server_CloseInventory" }, // 3393736465
		{ &Z_Construct_UFunction_ASurvivalMan_Server_Interact, "Server_Interact" }, // 1698043428
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalMan_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SurvivalMan.h" },
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalMan_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalMan_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASurvivalMan, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalMan_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalMan_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalMan_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalMan_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASurvivalMan, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalMan_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalMan_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalMan_Statics::NewProp_OpenedContainer_MetaData[] = {
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalMan_Statics::NewProp_OpenedContainer = { "OpenedContainer", "OnRep_OpenCloseContainer", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASurvivalMan, OpenedContainer), Z_Construct_UClass_AStorageContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalMan_Statics::NewProp_OpenedContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalMan_Statics::NewProp_OpenedContainer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivalMan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalMan_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalMan_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalMan_Statics::NewProp_OpenedContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalMan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalMan>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalMan_Statics::ClassParams = {
		&ASurvivalMan::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASurvivalMan_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalMan_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalMan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalMan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalMan()
	{
		if (!Z_Registration_Info_UClass_ASurvivalMan.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalMan.OuterSingleton, Z_Construct_UClass_ASurvivalMan_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASurvivalMan.OuterSingleton;
	}
	template<> ARRASISSURVIVAL_API UClass* StaticClass<ASurvivalMan>()
	{
		return ASurvivalMan::StaticClass();
	}

	void ASurvivalMan::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OpenedContainer(TEXT("OpenedContainer"));

		const bool bIsValid = true
			&& Name_OpenedContainer == ClassReps[(int32)ENetFields_Private::OpenedContainer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASurvivalMan"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalMan);
	ASurvivalMan::~ASurvivalMan() {}
	struct Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalMan, ASurvivalMan::StaticClass, TEXT("ASurvivalMan"), &Z_Registration_Info_UClass_ASurvivalMan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalMan), 2146631944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_2134153042(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
