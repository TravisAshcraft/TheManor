// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheManor/WorldPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPosition() {}
// Cross Module References
	THEMANOR_API UClass* Z_Construct_UClass_AWorldPosition_NoRegister();
	THEMANOR_API UClass* Z_Construct_UClass_AWorldPosition();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheManor();
// End Cross Module References
	void AWorldPosition::StaticRegisterNativesAWorldPosition()
	{
	}
	UClass* Z_Construct_UClass_AWorldPosition_NoRegister()
	{
		return AWorldPosition::StaticClass();
	}
	struct Z_Construct_UClass_AWorldPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheManor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPosition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPosition.h" },
		{ "ModuleRelativePath", "WorldPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorldPosition_Statics::ClassParams = {
		&AWorldPosition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWorldPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorldPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldPosition, 1227071953);
	template<> THEMANOR_API UClass* StaticClass<AWorldPosition>()
	{
		return AWorldPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldPosition(Z_Construct_UClass_AWorldPosition, &AWorldPosition::StaticClass, TEXT("/Script/TheManor"), TEXT("AWorldPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
