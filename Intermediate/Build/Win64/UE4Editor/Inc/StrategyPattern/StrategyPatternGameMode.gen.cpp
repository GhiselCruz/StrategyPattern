// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyPattern/StrategyPatternGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyPatternGameMode() {}
// Cross Module References
	STRATEGYPATTERN_API UClass* Z_Construct_UClass_AStrategyPatternGameMode_NoRegister();
	STRATEGYPATTERN_API UClass* Z_Construct_UClass_AStrategyPatternGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_StrategyPattern();
// End Cross Module References
	void AStrategyPatternGameMode::StaticRegisterNativesAStrategyPatternGameMode()
	{
	}
	UClass* Z_Construct_UClass_AStrategyPatternGameMode_NoRegister()
	{
		return AStrategyPatternGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyPatternGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyPatternGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StrategyPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyPatternGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StrategyPatternGameMode.h" },
		{ "ModuleRelativePath", "StrategyPatternGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyPatternGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyPatternGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyPatternGameMode_Statics::ClassParams = {
		&AStrategyPatternGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStrategyPatternGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyPatternGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyPatternGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyPatternGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyPatternGameMode, 281429450);
	template<> STRATEGYPATTERN_API UClass* StaticClass<AStrategyPatternGameMode>()
	{
		return AStrategyPatternGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyPatternGameMode(Z_Construct_UClass_AStrategyPatternGameMode, &AStrategyPatternGameMode::StaticClass, TEXT("/Script/StrategyPattern"), TEXT("AStrategyPatternGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyPatternGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
