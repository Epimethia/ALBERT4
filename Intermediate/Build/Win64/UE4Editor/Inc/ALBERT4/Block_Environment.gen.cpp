// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Block_Environment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock_Environment() {}
// Cross Module References
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Environment_0_NoRegister();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Environment_0();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_NotWalkable();
	UPackage* Z_Construct_UPackage__Script_ALBERT4();
// End Cross Module References
	void ABlock_Environment_0::StaticRegisterNativesABlock_Environment_0()
	{
	}
	UClass* Z_Construct_UClass_ABlock_Environment_0_NoRegister()
	{
		return ABlock_Environment_0::StaticClass();
	}
	UClass* Z_Construct_UClass_ABlock_Environment_0()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABlock_NotWalkable,
				(UObject* (*)())Z_Construct_UPackage__Script_ALBERT4,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Block_Environment.h" },
				{ "ModuleRelativePath", "Block_Environment.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABlock_Environment_0>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABlock_Environment_0::StaticClass,
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
	IMPLEMENT_CLASS(ABlock_Environment_0, 1755745702);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock_Environment_0(Z_Construct_UClass_ABlock_Environment_0, &ABlock_Environment_0::StaticClass, TEXT("/Script/ALBERT4"), TEXT("ABlock_Environment_0"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock_Environment_0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
