// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyPattern/EstrategiaMovimientoDos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaMovimientoDos() {}
// Cross Module References
	STRATEGYPATTERN_API UClass* Z_Construct_UClass_AEstrategiaMovimientoDos_NoRegister();
	STRATEGYPATTERN_API UClass* Z_Construct_UClass_AEstrategiaMovimientoDos();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StrategyPattern();
	STRATEGYPATTERN_API UClass* Z_Construct_UClass_UIEstrategias_NoRegister();
// End Cross Module References
	void AEstrategiaMovimientoDos::StaticRegisterNativesAEstrategiaMovimientoDos()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaMovimientoDos_NoRegister()
	{
		return AEstrategiaMovimientoDos::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaMovimientoDos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaMovimientoDos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StrategyPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaMovimientoDos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaMovimientoDos.h" },
		{ "ModuleRelativePath", "EstrategiaMovimientoDos.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaMovimientoDos_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstrategias_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaMovimientoDos, IIEstrategias), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaMovimientoDos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaMovimientoDos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaMovimientoDos_Statics::ClassParams = {
		&AEstrategiaMovimientoDos::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaMovimientoDos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaMovimientoDos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaMovimientoDos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaMovimientoDos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaMovimientoDos, 3304588765);
	template<> STRATEGYPATTERN_API UClass* StaticClass<AEstrategiaMovimientoDos>()
	{
		return AEstrategiaMovimientoDos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaMovimientoDos(Z_Construct_UClass_AEstrategiaMovimientoDos, &AEstrategiaMovimientoDos::StaticClass, TEXT("/Script/StrategyPattern"), TEXT("AEstrategiaMovimientoDos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaMovimientoDos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
