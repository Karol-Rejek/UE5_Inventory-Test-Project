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
	DEFINE_FUNCTION(APickupItems::execOnRep_PickedUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PickedUp();
		P_NATIVE_END;
	}
	void APickupItems::StaticRegisterNativesAPickupItems()
	{
		UClass* Class = APickupItems::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_PickedUp", &APickupItems::execOnRep_PickedUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupItems_OnRep_PickedUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItems_OnRep_PickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/PickupItems.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItems_OnRep_PickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItems, nullptr, "OnRep_PickedUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItems_OnRep_PickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItems_OnRep_PickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItems_OnRep_PickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupItems_OnRep_PickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupItems);
	UClass* Z_Construct_UClass_APickupItems_NoRegister()
	{
		return APickupItems::StaticClass();
	}
	struct Z_Construct_UClass_APickupItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPickedUp_MetaData[];
#endif
		static void NewProp_ObjectPickedUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ObjectPickedUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ArrasisSurvival,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupItems_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupItems_OnRep_PickedUp, "OnRep_PickedUp" }, // 2008498605
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItems_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actors/PickupItems.h" },
		{ "ModuleRelativePath", "Public/Actors/PickupItems.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItems_Statics::NewProp_ObjectPickedUp_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/PickupItems.h" },
	};
#endif
	void Z_Construct_UClass_APickupItems_Statics::NewProp_ObjectPickedUp_SetBit(void* Obj)
	{
		((APickupItems*)Obj)->ObjectPickedUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickupItems_Statics::NewProp_ObjectPickedUp = { "ObjectPickedUp", "OnRep_PickedUp", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APickupItems), &Z_Construct_UClass_APickupItems_Statics::NewProp_ObjectPickedUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_APickupItems_Statics::NewProp_ObjectPickedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItems_Statics::NewProp_ObjectPickedUp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItems_Statics::NewProp_ObjectPickedUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupItems>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupItems_Statics::ClassParams = {
		&APickupItems::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupItems_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupItems_Statics::PropPointers),
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

	void APickupItems::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ObjectPickedUp(TEXT("ObjectPickedUp"));

		const bool bIsValid = true
			&& Name_ObjectPickedUp == ClassReps[(int32)ENetFields_Private::ObjectPickedUp].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APickupItems"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupItems);
	struct Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupItems, APickupItems::StaticClass, TEXT("APickupItems"), &Z_Registration_Info_UClass_APickupItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupItems), 1484329453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_3212423118(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
