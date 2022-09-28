// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrasisSurvival/SurvivalMan.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalMan() {}
// Cross Module References
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_ASurvivalMan_NoRegister();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_ASurvivalMan();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ArrasisSurvival();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASurvivalMan::execGetInventoryComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInventoryComponent**)Z_Param__Result=P_THIS->GetInventoryComp();
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
	DEFINE_FUNCTION(ASurvivalMan::execServerInteract)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerInteract_Validate(Z_Param_Start,Z_Param_End))
		{
			RPC_ValidateFailed(TEXT("ServerInteract_Validate"));
			return;
		}
		P_THIS->ServerInteract_Implementation(Z_Param_Start,Z_Param_End);
		P_NATIVE_END;
	}
	static FName NAME_ASurvivalMan_AddItemToInventoryWidget = FName(TEXT("AddItemToInventoryWidget"));
	void ASurvivalMan::AddItemToInventoryWidget(AActor* Item)
	{
		SurvivalMan_eventAddItemToInventoryWidget_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalMan_AddItemToInventoryWidget),&Parms);
	}
	static FName NAME_ASurvivalMan_ServerInteract = FName(TEXT("ServerInteract"));
	void ASurvivalMan::ServerInteract(FVector Start, FVector End)
	{
		SurvivalMan_eventServerInteract_Parms Parms;
		Parms.Start=Start;
		Parms.End=End;
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalMan_ServerInteract),&Parms);
	}
	void ASurvivalMan::StaticRegisterNativesASurvivalMan()
	{
		UClass* Class = ASurvivalMan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInventoryComp", &ASurvivalMan::execGetInventoryComp },
			{ "ReturnStats", &ASurvivalMan::execReturnStats },
			{ "ServerInteract", &ASurvivalMan::execServerInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalMan_eventAddItemToInventoryWidget_Parms, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalMan, nullptr, "AddItemToInventoryWidget", nullptr, nullptr, sizeof(SurvivalMan_eventAddItemToInventoryWidget_Parms), Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics
	{
		struct SurvivalMan_eventGetInventoryComp_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalMan_eventGetInventoryComp_Parms, ReturnValue), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalMan, nullptr, "GetInventoryComp", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::SurvivalMan_eventGetInventoryComp_Parms), Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalMan_GetInventoryComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalMan_GetInventoryComp_Statics::FuncParams);
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalMan_eventReturnStats_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASurvivalMan_ReturnStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalMan_eventReturnStats_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
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
	struct Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalMan_eventServerInteract_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalMan_eventServerInteract_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::NewProp_End,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalMan, nullptr, "ServerInteract", nullptr, nullptr, sizeof(SurvivalMan_eventServerInteract_Parms), Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalMan_ServerInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalMan_ServerInteract_Statics::FuncParams);
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalMan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ArrasisSurvival,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASurvivalMan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASurvivalMan_AddItemToInventoryWidget, "AddItemToInventoryWidget" }, // 2592308725
		{ &Z_Construct_UFunction_ASurvivalMan_GetInventoryComp, "GetInventoryComp" }, // 3446484214
		{ &Z_Construct_UFunction_ASurvivalMan_ReturnStats, "ReturnStats" }, // 2292696375
		{ &Z_Construct_UFunction_ASurvivalMan_ServerInteract, "ServerInteract" }, // 2724358520
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalMan_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalMan, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalMan_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalMan_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalMan_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SurvivalMan.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalMan_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalMan, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalMan_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalMan_Statics::NewProp_FollowCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivalMan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalMan_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalMan_Statics::NewProp_FollowCamera,
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalMan);
	struct Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalMan, ASurvivalMan::StaticClass, TEXT("ASurvivalMan"), &Z_Registration_Info_UClass_ASurvivalMan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalMan), 3197789881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_4101208248(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
