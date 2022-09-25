// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARRASISSURVIVAL_PlayerStatComponent_generated_h
#error "PlayerStatComponent.generated.h already included, missing '#pragma once' in PlayerStatComponent.h"
#endif
#define ARRASISSURVIVAL_PlayerStatComponent_generated_h

#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_SPARSE_DATA
#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_RPC_WRAPPERS \
	virtual bool ServerControlSprintingTimer_Validate(bool ); \
	virtual void ServerControlSprintingTimer_Implementation(bool IsSprinting); \
	virtual bool ServerLowerStamina_Validate(float ); \
	virtual void ServerLowerStamina_Implementation(float Value); \
	virtual bool ServerLowerThirst_Validate(float ); \
	virtual void ServerLowerThirst_Implementation(float Value); \
	virtual bool ServerLowerHunger_Validate(float ); \
	virtual void ServerLowerHunger_Implementation(float Value); \
 \
	DECLARE_FUNCTION(execServerControlSprintingTimer); \
	DECLARE_FUNCTION(execServerLowerStamina); \
	DECLARE_FUNCTION(execServerLowerThirst); \
	DECLARE_FUNCTION(execServerLowerHunger);


#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerControlSprintingTimer); \
	DECLARE_FUNCTION(execServerLowerStamina); \
	DECLARE_FUNCTION(execServerLowerThirst); \
	DECLARE_FUNCTION(execServerLowerHunger);


#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_EVENT_PARMS \
	struct PlayerStatComponent_eventServerControlSprintingTimer_Parms \
	{ \
		bool IsSprinting; \
	}; \
	struct PlayerStatComponent_eventServerLowerHunger_Parms \
	{ \
		float Value; \
	}; \
	struct PlayerStatComponent_eventServerLowerStamina_Parms \
	{ \
		float Value; \
	}; \
	struct PlayerStatComponent_eventServerLowerThirst_Parms \
	{ \
		float Value; \
	};


#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_CALLBACK_WRAPPERS
#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerStatComponent(); \
	friend struct Z_Construct_UClass_UPlayerStatComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArrasisSurvival"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStatComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Hunger=NETFIELD_REP_START, \
		Thirst, \
		Health, \
		Stamina, \
		NETFIELD_REP_END=Stamina	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerStatComponent(); \
	friend struct Z_Construct_UClass_UPlayerStatComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArrasisSurvival"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStatComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Hunger=NETFIELD_REP_START, \
		Thirst, \
		Health, \
		Stamina, \
		NETFIELD_REP_END=Stamina	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerStatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStatComponent(UPlayerStatComponent&&); \
	NO_API UPlayerStatComponent(const UPlayerStatComponent&); \
public:


#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStatComponent(UPlayerStatComponent&&); \
	NO_API UPlayerStatComponent(const UPlayerStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerStatComponent)


#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_10_PROLOG \
	FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_EVENT_PARMS


#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_SPARSE_DATA \
	FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_RPC_WRAPPERS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_CALLBACK_WRAPPERS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_INCLASS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_SPARSE_DATA \
	FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_CALLBACK_WRAPPERS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRASISSURVIVAL_API UClass* StaticClass<class UPlayerStatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArrasisSurvival_Source_ArrasisSurvival_PlayerStatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
