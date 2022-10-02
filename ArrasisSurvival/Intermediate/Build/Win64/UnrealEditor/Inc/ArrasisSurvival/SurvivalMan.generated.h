// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryComponent;
#ifdef ARRASISSURVIVAL_SurvivalMan_generated_h
#error "SurvivalMan.generated.h already included, missing '#pragma once' in SurvivalMan.h"
#endif
#define ARRASISSURVIVAL_SurvivalMan_generated_h

#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_SPARSE_DATA
#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_RPC_WRAPPERS \
	virtual bool ServerInteract_Validate(FVector , FVector ); \
	virtual void ServerInteract_Implementation(FVector Start, FVector End); \
 \
	DECLARE_FUNCTION(execGetInventoryComp); \
	DECLARE_FUNCTION(execReturnStats); \
	DECLARE_FUNCTION(execServerInteract);


#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventoryComp); \
	DECLARE_FUNCTION(execReturnStats); \
	DECLARE_FUNCTION(execServerInteract);


#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_EVENT_PARMS \
	struct SurvivalMan_eventServerInteract_Parms \
	{ \
		FVector Start; \
		FVector End; \
	};


#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_CALLBACK_WRAPPERS
#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalMan(); \
	friend struct Z_Construct_UClass_ASurvivalMan_Statics; \
public: \
	DECLARE_CLASS(ASurvivalMan, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArrasisSurvival"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalMan)


#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASurvivalMan(); \
	friend struct Z_Construct_UClass_ASurvivalMan_Statics; \
public: \
	DECLARE_CLASS(ASurvivalMan, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArrasisSurvival"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalMan)


#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASurvivalMan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalMan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalMan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalMan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalMan(ASurvivalMan&&); \
	NO_API ASurvivalMan(const ASurvivalMan&); \
public:


#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalMan(ASurvivalMan&&); \
	NO_API ASurvivalMan(const ASurvivalMan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalMan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalMan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalMan)


#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_20_PROLOG \
	FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_EVENT_PARMS


#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_SPARSE_DATA \
	FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_RPC_WRAPPERS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_CALLBACK_WRAPPERS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_INCLASS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_SPARSE_DATA \
	FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_CALLBACK_WRAPPERS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_INCLASS_NO_PURE_DECLS \
	FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRASISSURVIVAL_API UClass* StaticClass<class ASurvivalMan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArrasisSurvival_Source_ArrasisSurvival_SurvivalMan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
