// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Block_Water.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock_Water() {}
// Cross Module References
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Water_NoRegister();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_Water();
	ALBERT4_API UClass* Z_Construct_UClass_ABlock_NotWalkable();
	UPackage* Z_Construct_UPackage__Script_ALBERT4();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void ABlock_Water::StaticRegisterNativesABlock_Water()
	{
	}
	UClass* Z_Construct_UClass_ABlock_Water_NoRegister()
	{
		return ABlock_Water::StaticClass();
	}
	UClass* Z_Construct_UClass_ABlock_Water()
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
				{ "IncludePath", "Block_Water.h" },
				{ "ModuleRelativePath", "Block_Water.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioCompo_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Block_Water.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioCompo = { UE4CodeGen_Private::EPropertyClass::Object, "AudioCompo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABlock_Water, AudioCompo), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_AudioCompo_MetaData, ARRAY_COUNT(NewProp_AudioCompo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioCompo,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABlock_Water>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABlock_Water::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlock_Water, 1860761088);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock_Water(Z_Construct_UClass_ABlock_Water, &ABlock_Water::StaticClass, TEXT("/Script/ALBERT4"), TEXT("ABlock_Water"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock_Water);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
