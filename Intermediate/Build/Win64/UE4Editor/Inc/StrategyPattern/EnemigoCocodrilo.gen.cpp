// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyPattern/EnemigoCocodrilo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoCocodrilo() {}
// Cross Module References
	STRATEGYPATTERN_API UClass* Z_Construct_UClass_AEnemigoCocodrilo_NoRegister();
	STRATEGYPATTERN_API UClass* Z_Construct_UClass_AEnemigoCocodrilo();
	STRATEGYPATTERN_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_StrategyPattern();
// End Cross Module References
	void AEnemigoCocodrilo::StaticRegisterNativesAEnemigoCocodrilo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoCocodrilo_NoRegister()
	{
		return AEnemigoCocodrilo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoCocodrilo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoCocodrilo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_StrategyPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoCocodrilo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoCocodrilo.h" },
		{ "ModuleRelativePath", "EnemigoCocodrilo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoCocodrilo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoCocodrilo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoCocodrilo_Statics::ClassParams = {
		&AEnemigoCocodrilo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoCocodrilo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoCocodrilo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoCocodrilo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoCocodrilo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoCocodrilo, 3000435638);
	template<> STRATEGYPATTERN_API UClass* StaticClass<AEnemigoCocodrilo>()
	{
		return AEnemigoCocodrilo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoCocodrilo(Z_Construct_UClass_AEnemigoCocodrilo, &AEnemigoCocodrilo::StaticClass, TEXT("/Script/StrategyPattern"), TEXT("AEnemigoCocodrilo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoCocodrilo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
