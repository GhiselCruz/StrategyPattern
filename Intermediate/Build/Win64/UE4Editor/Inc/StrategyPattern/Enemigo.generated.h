// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGYPATTERN_Enemigo_generated_h
#error "Enemigo.generated.h already included, missing '#pragma once' in Enemigo.h"
#endif
#define STRATEGYPATTERN_Enemigo_generated_h

#define StrategyPattern_Source_StrategyPattern_Enemigo_h_12_SPARSE_DATA
#define StrategyPattern_Source_StrategyPattern_Enemigo_h_12_RPC_WRAPPERS
#define StrategyPattern_Source_StrategyPattern_Enemigo_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define StrategyPattern_Source_StrategyPattern_Enemigo_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrategyPattern"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo)


#define StrategyPattern_Source_StrategyPattern_Enemigo_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrategyPattern"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo)


#define StrategyPattern_Source_StrategyPattern_Enemigo_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemigo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemigo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo(AEnemigo&&); \
	NO_API AEnemigo(const AEnemigo&); \
public:


#define StrategyPattern_Source_StrategyPattern_Enemigo_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo(AEnemigo&&); \
	NO_API AEnemigo(const AEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigo)


#define StrategyPattern_Source_StrategyPattern_Enemigo_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshEnemigo() { return STRUCT_OFFSET(AEnemigo, MeshEnemigo); }


#define StrategyPattern_Source_StrategyPattern_Enemigo_h_9_PROLOG
#define StrategyPattern_Source_StrategyPattern_Enemigo_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StrategyPattern_Source_StrategyPattern_Enemigo_h_12_PRIVATE_PROPERTY_OFFSET \
	StrategyPattern_Source_StrategyPattern_Enemigo_h_12_SPARSE_DATA \
	StrategyPattern_Source_StrategyPattern_Enemigo_h_12_RPC_WRAPPERS \
	StrategyPattern_Source_StrategyPattern_Enemigo_h_12_INCLASS \
	StrategyPattern_Source_StrategyPattern_Enemigo_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StrategyPattern_Source_StrategyPattern_Enemigo_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StrategyPattern_Source_StrategyPattern_Enemigo_h_12_PRIVATE_PROPERTY_OFFSET \
	StrategyPattern_Source_StrategyPattern_Enemigo_h_12_SPARSE_DATA \
	StrategyPattern_Source_StrategyPattern_Enemigo_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StrategyPattern_Source_StrategyPattern_Enemigo_h_12_INCLASS_NO_PURE_DECLS \
	StrategyPattern_Source_StrategyPattern_Enemigo_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRATEGYPATTERN_API UClass* StaticClass<class AEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StrategyPattern_Source_StrategyPattern_Enemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
