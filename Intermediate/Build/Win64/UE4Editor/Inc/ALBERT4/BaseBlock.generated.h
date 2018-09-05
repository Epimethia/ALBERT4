// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALBERT4_BaseBlock_generated_h
#error "BaseBlock.generated.h already included, missing '#pragma once' in BaseBlock.h"
#endif
#define ALBERT4_BaseBlock_generated_h

#define ALBERT4_Source_ALBERT4_BaseBlock_h_14_RPC_WRAPPERS
#define ALBERT4_Source_ALBERT4_BaseBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ALBERT4_Source_ALBERT4_BaseBlock_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseBlock(); \
	friend ALBERT4_API class UClass* Z_Construct_UClass_ABaseBlock(); \
public: \
	DECLARE_CLASS(ABaseBlock, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ALBERT4"), NO_API) \
	DECLARE_SERIALIZER(ABaseBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ALBERT4_Source_ALBERT4_BaseBlock_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseBlock(); \
	friend ALBERT4_API class UClass* Z_Construct_UClass_ABaseBlock(); \
public: \
	DECLARE_CLASS(ABaseBlock, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ALBERT4"), NO_API) \
	DECLARE_SERIALIZER(ABaseBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ALBERT4_Source_ALBERT4_BaseBlock_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseBlock(ABaseBlock&&); \
	NO_API ABaseBlock(const ABaseBlock&); \
public:


#define ALBERT4_Source_ALBERT4_BaseBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseBlock(ABaseBlock&&); \
	NO_API ABaseBlock(const ABaseBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseBlock)


#define ALBERT4_Source_ALBERT4_BaseBlock_h_14_PRIVATE_PROPERTY_OFFSET
#define ALBERT4_Source_ALBERT4_BaseBlock_h_11_PROLOG
#define ALBERT4_Source_ALBERT4_BaseBlock_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALBERT4_Source_ALBERT4_BaseBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	ALBERT4_Source_ALBERT4_BaseBlock_h_14_RPC_WRAPPERS \
	ALBERT4_Source_ALBERT4_BaseBlock_h_14_INCLASS \
	ALBERT4_Source_ALBERT4_BaseBlock_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ALBERT4_Source_ALBERT4_BaseBlock_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALBERT4_Source_ALBERT4_BaseBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	ALBERT4_Source_ALBERT4_BaseBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ALBERT4_Source_ALBERT4_BaseBlock_h_14_INCLASS_NO_PURE_DECLS \
	ALBERT4_Source_ALBERT4_BaseBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ALBERT4_Source_ALBERT4_BaseBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
