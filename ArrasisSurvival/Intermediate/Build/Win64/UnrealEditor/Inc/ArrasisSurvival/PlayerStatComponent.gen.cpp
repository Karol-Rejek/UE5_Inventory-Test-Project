// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrasisSurvival/PlayerStatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatComponent() {}
// Cross Module References
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_UPlayerStatComponent_NoRegister();
	ARRASISSURVIVAL_API UClass* Z_Construct_UClass_UPlayerStatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ArrasisSurvival();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerStatComponent::execServerControlSprintingTimer)
	{
		P_GET_UBOOL(Z_Param_IsSprinting);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerControlSprintingTimer_Validate(Z_Param_IsSprinting))
		{
			RPC_ValidateFailed(TEXT("ServerControlSprintingTimer_Validate"));
			return;
		}
		P_THIS->ServerControlSprintingTimer_Implementation(Z_Param_IsSprinting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerStatComponent::execServerLowerStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerLowerStamina_Validate(Z_Param_Value))
		{
			RPC_ValidateFailed(TEXT("ServerLowerStamina_Validate"));
			return;
		}
		P_THIS->ServerLowerStamina_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerStatComponent::execServerLowerThirst)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerLowerThirst_Validate(Z_Param_Value))
		{
			RPC_ValidateFailed(TEXT("ServerLowerThirst_Validate"));
			return;
		}
		P_THIS->ServerLowerThirst_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerStatComponent::execServerLowerHunger)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerLowerHunger_Validate(Z_Param_Value))
		{
			RPC_ValidateFailed(TEXT("ServerLowerHunger_Validate"));
			return;
		}
		P_THIS->ServerLowerHunger_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	static FName NAME_UPlayerStatComponent_ServerControlSprintingTimer = FName(TEXT("ServerControlSprintingTimer"));
	void UPlayerStatComponent::ServerControlSprintingTimer(bool IsSprinting)
	{
		PlayerStatComponent_eventServerControlSprintingTimer_Parms Parms;
		Parms.IsSprinting=IsSprinting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerStatComponent_ServerControlSprintingTimer),&Parms);
	}
	static FName NAME_UPlayerStatComponent_ServerLowerHunger = FName(TEXT("ServerLowerHunger"));
	void UPlayerStatComponent::ServerLowerHunger(float Value)
	{
		PlayerStatComponent_eventServerLowerHunger_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerStatComponent_ServerLowerHunger),&Parms);
	}
	static FName NAME_UPlayerStatComponent_ServerLowerStamina = FName(TEXT("ServerLowerStamina"));
	void UPlayerStatComponent::ServerLowerStamina(float Value)
	{
		PlayerStatComponent_eventServerLowerStamina_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerStatComponent_ServerLowerStamina),&Parms);
	}
	static FName NAME_UPlayerStatComponent_ServerLowerThirst = FName(TEXT("ServerLowerThirst"));
	void UPlayerStatComponent::ServerLowerThirst(float Value)
	{
		PlayerStatComponent_eventServerLowerThirst_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerStatComponent_ServerLowerThirst),&Parms);
	}
	void UPlayerStatComponent::StaticRegisterNativesUPlayerStatComponent()
	{
		UClass* Class = UPlayerStatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerControlSprintingTimer", &UPlayerStatComponent::execServerControlSprintingTimer },
			{ "ServerLowerHunger", &UPlayerStatComponent::execServerLowerHunger },
			{ "ServerLowerStamina", &UPlayerStatComponent::execServerLowerStamina },
			{ "ServerLowerThirst", &UPlayerStatComponent::execServerLowerThirst },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics
	{
		static void NewProp_IsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSprinting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::NewProp_IsSprinting_SetBit(void* Obj)
	{
		((PlayerStatComponent_eventServerControlSprintingTimer_Parms*)Obj)->IsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::NewProp_IsSprinting = { "IsSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerStatComponent_eventServerControlSprintingTimer_Parms), &Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::NewProp_IsSprinting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::NewProp_IsSprinting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatComponent, nullptr, "ServerControlSprintingTimer", nullptr, nullptr, sizeof(PlayerStatComponent_eventServerControlSprintingTimer_Parms), Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatComponent_eventServerLowerHunger_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatComponent, nullptr, "ServerLowerHunger", nullptr, nullptr, sizeof(PlayerStatComponent_eventServerLowerHunger_Parms), Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatComponent_eventServerLowerStamina_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatComponent, nullptr, "ServerLowerStamina", nullptr, nullptr, sizeof(PlayerStatComponent_eventServerLowerStamina_Parms), Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatComponent_eventServerLowerThirst_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatComponent, nullptr, "ServerLowerThirst", nullptr, nullptr, sizeof(PlayerStatComponent_eventServerLowerThirst_Parms), Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerStatComponent);
	UClass* Z_Construct_UClass_UPlayerStatComponent_NoRegister()
	{
		return UPlayerStatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hunger_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hunger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HungerDecrementValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HungerDecrementValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thirst_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thirst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirstDecrementValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirstDecrementValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ArrasisSurvival,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerStatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerStatComponent_ServerControlSprintingTimer, "ServerControlSprintingTimer" }, // 638818046
		{ &Z_Construct_UFunction_UPlayerStatComponent_ServerLowerHunger, "ServerLowerHunger" }, // 3949448514
		{ &Z_Construct_UFunction_UPlayerStatComponent_ServerLowerStamina, "ServerLowerStamina" }, // 130375711
		{ &Z_Construct_UFunction_UPlayerStatComponent_ServerLowerThirst, "ServerLowerThirst" }, // 558963419
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerStatComponent.h" },
		{ "ModuleRelativePath", "PlayerStatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Hunger_MetaData[] = {
		{ "ModuleRelativePath", "PlayerStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Hunger = { "Hunger", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStatComponent, Hunger), METADATA_PARAMS(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Hunger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Hunger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_HungerDecrementValue_MetaData[] = {
		{ "Category", "S|PlayerStats" },
		{ "ModuleRelativePath", "PlayerStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_HungerDecrementValue = { "HungerDecrementValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStatComponent, HungerDecrementValue), METADATA_PARAMS(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_HungerDecrementValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_HungerDecrementValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Thirst_MetaData[] = {
		{ "ModuleRelativePath", "PlayerStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Thirst = { "Thirst", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStatComponent, Thirst), METADATA_PARAMS(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Thirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Thirst_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_ThirstDecrementValue_MetaData[] = {
		{ "Category", "S|PlayerStats" },
		{ "ModuleRelativePath", "PlayerStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_ThirstDecrementValue = { "ThirstDecrementValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStatComponent, ThirstDecrementValue), METADATA_PARAMS(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_ThirstDecrementValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_ThirstDecrementValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "PlayerStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStatComponent, Health), METADATA_PARAMS(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Stamina_MetaData[] = {
		{ "ModuleRelativePath", "PlayerStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStatComponent, Stamina), METADATA_PARAMS(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Stamina_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Hunger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_HungerDecrementValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Thirst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_ThirstDecrementValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatComponent_Statics::NewProp_Stamina,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStatComponent_Statics::ClassParams = {
		&UPlayerStatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerStatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerStatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerStatComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerStatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerStatComponent.OuterSingleton, Z_Construct_UClass_UPlayerStatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerStatComponent.OuterSingleton;
	}
	template<> ARRASISSURVIVAL_API UClass* StaticClass<UPlayerStatComponent>()
	{
		return UPlayerStatComponent::StaticClass();
	}

	void UPlayerStatComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Hunger(TEXT("Hunger"));
		static const FName Name_Thirst(TEXT("Thirst"));
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Stamina(TEXT("Stamina"));

		const bool bIsValid = true
			&& Name_Hunger == ClassReps[(int32)ENetFields_Private::Hunger].Property->GetFName()
			&& Name_Thirst == ClassReps[(int32)ENetFields_Private::Thirst].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlayerStatComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStatComponent);
	struct Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerStatComponent, UPlayerStatComponent::StaticClass, TEXT("UPlayerStatComponent"), &Z_Registration_Info_UClass_UPlayerStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerStatComponent), 3643323360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_269321629(TEXT("/Script/ArrasisSurvival"),
		Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
