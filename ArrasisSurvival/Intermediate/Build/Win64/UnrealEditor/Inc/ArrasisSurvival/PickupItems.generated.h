// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARRASISSURVIVAL_PickupItems_generated_h
#error "PickupItems.generated.h already included, missing '#pragma once' in PickupItems.h"
#endif
#define ARRASISSURVIVAL_PickupItems_generated_h

#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_SPARSE_DATA
#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_PickedUp);


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_PickedUp);


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupItems(); \
	friend struct Z_Construct_UClass_APickupItems_Statics; \
public: \
	DECLARE_CLASS(APickupItems, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArrasisSurvival"), NO_API) \
	DECLARE_SERIALIZER(APickupItems) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ObjectPickedUp=NETFIELD_REP_START, \
		NETFIELD_REP_END=ObjectPickedUp	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickupItems(); \
	friend struct Z_Construct_UClass_APickupItems_Statics; \
public: \
	DECLARE_CLASS(APickupItems, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArrasisSurvival"), NO_API) \
	DECLARE_SERIALIZER(APickupItems) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ObjectPickedUp=NETFIELD_REP_START, \
		NETFIELD_REP_END=ObjectPickedUp	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupItems(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupItems) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupItems); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupItems(APickupItems&&); \
	NO_API APickupItems(const APickupItems&); \
public:


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupItems(APickupItems&&); \
	NO_API APickupItems(const APickupItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupItems); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupItems)


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_12_PROLOG
#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_SPARSE_DATA \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_RPC_WRAPPERS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_INCLASS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_SPARSE_DATA \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_INCLASS_NO_PURE_DECLS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRASISSURVIVAL_API UClass* StaticClass<class APickupItems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArrasisSurvival_Source_ArrasisSurvival_Public_Actors_PickupItems_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
