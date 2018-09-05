// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Block_Walkable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock_Walkable() {}
// Cross Module References
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Walkable_NoRegister();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Walkable();
	ALBERT4_API UClass* Z_Construct_UClass_ABaseBlock();
	UPackage* Z_Construct_UPackage__Script_ALBERT4();
// End Cross Module References
	void ABlock_Walkable::StaticRegisterNativesABlock_Walkable()
	{
	}
	UClass* Z_Construct_UClass_ABlock_Walkable_NoRegister()
	{
		return ABlock_Walkable::StaticClass();
	}
	UClass* Z_Construct_UClass_ABlock_Walkable()
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
				{ "IncludePath", "Block_Walkable.h" },
				{ "ModuleRelativePath", "Block_Walkable.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABlock_Walkable>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABlock_Walkable::StaticClass,
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
	IMPLEMENT_CLASS(ABlock_Walkable, 2415433151);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock_Walkable(Z_Construct_UClass_ABlock_Walkable, &ABlock_Walkable::StaticClass, TEXT("/Script/ALBERT4"), TEXT("ABlock_Walkable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock_Walkable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
