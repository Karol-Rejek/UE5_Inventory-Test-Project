// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ARRASISSURVIVAL_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define ARRASISSURVIVAL_InventoryComponent_generated_h

#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_SPARSE_DATA
#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_RPC_WRAPPERS \
	virtual bool Server_DropItem_Validate(AActor* ); \
	virtual void Server_DropItem_Implementation(AActor* Item); \
 \
	DECLARE_FUNCTION(execGetCurrentInventoryCount); \
	DECLARE_FUNCTION(execGetInventoryItems); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execServer_DropItem);


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentInventoryCount); \
	DECLARE_FUNCTION(execGetInventoryItems); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execServer_DropItem);


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_EVENT_PARMS \
	struct InventoryComponent_eventServer_DropItem_Parms \
	{ \
		AActor* Item; \
	};


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_CALLBACK_WRAPPERS
#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArrasisSurvival"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Items=NETFIELD_REP_START, \
		NETFIELD_REP_END=Items	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArrasisSurvival"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Items=NETFIELD_REP_START, \
		NETFIELD_REP_END=Items	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_10_PROLOG \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_EVENT_PARMS


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_SPARSE_DATA \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_RPC_WRAPPERS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_CALLBACK_WRAPPERS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_INCLASS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_SPARSE_DATA \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_CALLBACK_WRAPPERS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRASISSURVIVAL_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArrasisSurvival_Source_ArrasisSurvival_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
