// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SurvivalMan.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AStorageContainer;
class UInventoryComponent;
#ifdef ARRASISSURVIVAL_SurvivalMan_generated_h
#error "SurvivalMan.generated.h already included, missing '#pragma once' in SurvivalMan.h"
#endif
#define ARRASISSURVIVAL_SurvivalMan_generated_h

#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_SPARSE_DATA
#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_RPC_WRAPPERS \
	virtual bool Server_CloseInventory_Validate(); \
	virtual void Server_CloseInventory_Implementation(); \
	virtual bool Server_Interact_Validate(FVector , FVector ); \
	virtual void Server_Interact_Implementation(FVector Start, FVector End); \
 \
	DECLARE_FUNCTION(execGetOpenedContainer); \
	DECLARE_FUNCTION(execGetInventoryComponent); \
	DECLARE_FUNCTION(execReturnStats); \
	DECLARE_FUNCTION(execServer_CloseInventory); \
	DECLARE_FUNCTION(execServer_Interact); \
	DECLARE_FUNCTION(execOnRep_OpenCloseContainer);


#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOpenedContainer); \
	DECLARE_FUNCTION(execGetInventoryComponent); \
	DECLARE_FUNCTION(execReturnStats); \
	DECLARE_FUNCTION(execServer_CloseInventory); \
	DECLARE_FUNCTION(execServer_Interact); \
	DECLARE_FUNCTION(execOnRep_OpenCloseContainer);


#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_ACCESSORS
#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_CALLBACK_WRAPPERS
#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalMan(); \
	friend struct Z_Construct_UClass_ASurvivalMan_Statics; \
public: \
	DECLARE_CLASS(ASurvivalMan, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArrasisSurvival"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalMan) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OpenedContainer=NETFIELD_REP_START, \
		NETFIELD_REP_END=OpenedContainer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASurvivalMan(); \
	friend struct Z_Construct_UClass_ASurvivalMan_Statics; \
public: \
	DECLARE_CLASS(ASurvivalMan, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArrasisSurvival"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalMan) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OpenedContainer=NETFIELD_REP_START, \
		NETFIELD_REP_END=OpenedContainer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASurvivalMan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalMan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalMan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalMan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalMan(ASurvivalMan&&); \
	NO_API ASurvivalMan(const ASurvivalMan&); \
public: \
	NO_API virtual ~ASurvivalMan();


#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalMan(ASurvivalMan&&); \
	NO_API ASurvivalMan(const ASurvivalMan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalMan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalMan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalMan) \
	NO_API virtual ~ASurvivalMan();


#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_20_PROLOG
#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_SPARSE_DATA \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_RPC_WRAPPERS \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_ACCESSORS \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_CALLBACK_WRAPPERS \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_INCLASS \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_SPARSE_DATA \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_ACCESSORS \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_CALLBACK_WRAPPERS \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_INCLASS_NO_PURE_DECLS \
	FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRASISSURVIVAL_API UClass* StaticClass<class ASurvivalMan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameByKR_UE5_ArrasisSurvival_UE5_ArrasisSurvival_ArrasisSurvival_5_1_Source_ArrasisSurvival_SurvivalMan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
