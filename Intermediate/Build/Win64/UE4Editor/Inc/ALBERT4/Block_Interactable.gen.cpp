// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Block_Interactable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock_Interactable() {}
// Cross Module References
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Interactable_NoRegister();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Interactable();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Walkable();
	UPackage* Z_Construct_UPackage__Script_ALBERT4();
// End Cross Module References
	void ABlock_Interactable::StaticRegisterNativesABlock_Interactable()
	{
	}
	UClass* Z_Construct_UClass_ABlock_Interactable_NoRegister()
	{
		return ABlock_Interactable::StaticClass();
	}
	UClass* Z_Construct_UClass_ABlock_Interactable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABlock_Walkable,
				(UObject* (*)())Z_Construct_UPackage__Script_ALBERT4,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Block_Interactable.h" },
				{ "ModuleRelativePath", "Block_Interactable.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABlock_Interactable>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABlock_Interactable::StaticClass,
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
	IMPLEMENT_CLASS(ABlock_Interactable, 738539547);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock_Interactable(Z_Construct_UClass_ABlock_Interactable, &ABlock_Interactable::StaticClass, TEXT("/Script/ALBERT4"), TEXT("ABlock_Interactable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock_Interactable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
