// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Block_Log.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock_Log() {}
// Cross Module References
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Log_NoRegister();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Log();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Interactable();
	UPackage* Z_Construct_UPackage__Script_ALBERT4();
// End Cross Module References
	void ABlock_Log::StaticRegisterNativesABlock_Log()
	{
	}
	UClass* Z_Construct_UClass_ABlock_Log_NoRegister()
	{
		return ABlock_Log::StaticClass();
	}
	UClass* Z_Construct_UClass_ABlock_Log()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABlock_Interactable,
				(UObject* (*)())Z_Construct_UPackage__Script_ALBERT4,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Block_Log.h" },
				{ "ModuleRelativePath", "Block_Log.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABlock_Log>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABlock_Log::StaticClass,
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
	IMPLEMENT_CLASS(ABlock_Log, 409532285);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock_Log(Z_Construct_UClass_ABlock_Log, &ABlock_Log::StaticClass, TEXT("/Script/ALBERT4"), TEXT("ABlock_Log"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock_Log);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
