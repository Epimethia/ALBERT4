// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALBERT4_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define ALBERT4_PlayerCharacter_generated_h

#define ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_RPC_WRAPPERS
#define ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend ALBERT4_API class UClass* Z_Construct_UClass_APlayerCharacter(); \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ALBERT4"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend ALBERT4_API class UClass* Z_Construct_UClass_APlayerCharacter(); \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ALBERT4"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET
#define ALBERT4_Source_ALBERT4_PlayerCharacter_h_10_PROLOG
#define ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_RPC_WRAPPERS \
	ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_INCLASS \
	ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
	ALBERT4_Source_ALBERT4_PlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ALBERT4_Source_ALBERT4_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
