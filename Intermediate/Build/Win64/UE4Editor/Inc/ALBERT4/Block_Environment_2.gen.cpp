// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Block_Environment_2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock_Environment_2() {}
// Cross Module References
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Environment_2_NoRegister();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Environment_2();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Environment_0();
	UPackage* Z_Construct_UPackage__Script_ALBERT4();
// End Cross Module References
	void ABlock_Environment_2::StaticRegisterNativesABlock_Environment_2()
	{
	}
	UClass* Z_Construct_UClass_ABlock_Environment_2_NoRegister()
	{
		return ABlock_Environment_2::StaticClass();
	}
	UClass* Z_Construct_UClass_ABlock_Environment_2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABlock_Environment_0,
				(UObject* (*)())Z_Construct_UPackage__Script_ALBERT4,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Block_Environment_2.h" },
				{ "ModuleRelativePath", "Block_Environment_2.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABlock_Environment_2>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABlock_Environment_2::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlock_Environment_2, 1406454792);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock_Environment_2(Z_Construct_UClass_ABlock_Environment_2, &ABlock_Environment_2::StaticClass, TEXT("/Script/ALBERT4"), TEXT("ABlock_Environment_2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock_Environment_2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
