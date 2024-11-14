// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyPattern/EnemigoCuervo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoCuervo() {}
// Cross Module References
	STRATEGYPATTERN_API UClass* Z_Construct_UClass_AEnemigoCuervo_NoRegister();
	STRATEGYPATTERN_API UClass* Z_Construct_UClass_AEnemigoCuervo();
	STRATEGYPATTERN_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_StrategyPattern();
// End Cross Module References
	void AEnemigoCuervo::StaticRegisterNativesAEnemigoCuervo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoCuervo_NoRegister()
	{
		return AEnemigoCuervo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoCuervo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoCuervo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_StrategyPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoCuervo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoCuervo.h" },
		{ "ModuleRelativePath", "EnemigoCuervo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoCuervo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoCuervo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoCuervo_Statics::ClassParams = {
		&AEnemigoCuervo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoCuervo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoCuervo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoCuervo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoCuervo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoCuervo, 4067504736);
	template<> STRATEGYPATTERN_API UClass* StaticClass<AEnemigoCuervo>()
	{
		return AEnemigoCuervo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoCuervo(Z_Construct_UClass_AEnemigoCuervo, &AEnemigoCuervo::StaticClass, TEXT("/Script/StrategyPattern"), TEXT("AEnemigoCuervo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoCuervo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
