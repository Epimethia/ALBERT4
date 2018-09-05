// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Block_NotWalkable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock_NotWalkable() {}
// Cross Module References
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_NotWalkable_NoRegister();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_NotWalkable();
	ALBERT4_API UClass* Z_Construct_UClass_ABaseBlock();
	UPackage* Z_Construct_UPackage__Script_ALBERT4();
// End Cross Module References
	void ABlock_NotWalkable::StaticRegisterNativesABlock_NotWalkable()
	{
	}
	UClass* Z_Construct_UClass_ABlock_NotWalkable_NoRegister()
	{
		return ABlock_NotWalkable::StaticClass();
	}
	UClass* Z_Construct_UClass_ABlock_NotWalkable()
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
				{ "IncludePath", "Block_NotWalkable.h" },
				{ "ModuleRelativePath", "Block_NotWalkable.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABlock_NotWalkable>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABlock_NotWalkable::StaticClass,
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
	IMPLEMENT_CLASS(ABlock_NotWalkable, 4040441884);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock_NotWalkable(Z_Construct_UClass_ABlock_NotWalkable, &ABlock_NotWalkable::StaticClass, TEXT("/Script/ALBERT4"), TEXT("ABlock_NotWalkable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock_NotWalkable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
