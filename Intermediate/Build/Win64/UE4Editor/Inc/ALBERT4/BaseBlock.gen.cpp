// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BaseBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBlock() {}
// Cross Module References
	ALBERT4_API UClass* Z_Construct_UClass_ABaseBlock_NoRegister();
	ALBERT4_API UClass* Z_Construct_UClass_ABaseBlock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ALBERT4();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABaseBlock::StaticRegisterNativesABaseBlock()
	{
	}
	UClass* Z_Construct_UClass_ABaseBlock_NoRegister()
	{
		return ABaseBlock::StaticClass();
	}
	UClass* Z_Construct_UClass_ABaseBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_ALBERT4,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BaseBlock.h" },
				{ "ModuleRelativePath", "BaseBlock.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
				{ "Category", "BaseBlock" },
				{ "ModuleRelativePath", "BaseBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerCharacter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABaseBlock, PlayerCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_PlayerCharacter_MetaData, ARRAY_COUNT(NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Walkable_MetaData[] = {
				{ "Category", "BaseBlock" },
				{ "ModuleRelativePath", "BaseBlock.h" },
			};
#endif
			auto NewProp_Walkable_SetBit = [](void* Obj){ ((ABaseBlock*)Obj)->Walkable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Walkable = { UE4CodeGen_Private::EPropertyClass::Bool, "Walkable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseBlock), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Walkable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Walkable_MetaData, ARRAY_COUNT(NewProp_Walkable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[] = {
				{ "Category", "BaseBlock" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "BaseBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMesh = { UE4CodeGen_Private::EPropertyClass::Object, "BlockMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ABaseBlock, BlockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_BlockMesh_MetaData, ARRAY_COUNT(NewProp_BlockMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerCharacter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Walkable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlockMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABaseBlock>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABaseBlock::StaticClass,
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
	IMPLEMENT_CLASS(ABaseBlock, 55309183);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseBlock(Z_Construct_UClass_ABaseBlock, &ABaseBlock::StaticClass, TEXT("/Script/ALBERT4"), TEXT("ABaseBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
