// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Block_Start.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock_Start() {}
// Cross Module References
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Start_NoRegister();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Start();
	ALBERT4_API UClass* Z_Construct_UClass_ABaseBlock();
	UPackage* Z_Construct_UPackage__Script_ALBERT4();
// End Cross Module References
	void ABlock_Start::StaticRegisterNativesABlock_Start()
	{
	}
	UClass* Z_Construct_UClass_ABlock_Start_NoRegister()
	{
		return ABlock_Start::StaticClass();
	}
	UClass* Z_Construct_UClass_ABlock_Start()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABaseBlock,
				(UObject* (*)())Z_Construct_UPackage__Script_ALBERT4,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Block_Start.h" },
				{ "ModuleRelativePath", "Block_Start.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABlock_Start>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABlock_Start::StaticClass,
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
	IMPLEMENT_CLASS(ABlock_Start, 1020955782);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock_Start(Z_Construct_UClass_ABlock_Start, &ABlock_Start::StaticClass, TEXT("/Script/ALBERT4"), TEXT("ABlock_Start"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock_Start);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
