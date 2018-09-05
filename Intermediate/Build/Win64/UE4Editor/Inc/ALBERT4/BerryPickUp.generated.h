// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ALBERT4_BerryPickUp_generated_h
#error "BerryPickUp.generated.h already included, missing '#pragma once' in BerryPickUp.h"
#endif
#define ALBERT4_BerryPickUp_generated_h

#define ALBERT4_Source_ALBERT4_BerryPickUp_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ALBERT4_Source_ALBERT4_BerryPickUp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ALBERT4_Source_ALBERT4_BerryPickUp_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABerryPickUp(); \
	friend ALBERT4_API class UClass* Z_Construct_UClass_ABerryPickUp(); \
public: \
	DECLARE_CLASS(ABerryPickUp, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ALBERT4"), NO_API) \
	DECLARE_SERIALIZER(ABerryPickUp) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ALBERT4_Source_ALBERT4_BerryPickUp_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABerryPickUp(); \
	friend ALBERT4_API class UClass* Z_Construct_UClass_ABerryPickUp(); \
public: \
	DECLARE_CLASS(ABerryPickUp, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ALBERT4"), NO_API) \
	DECLARE_SERIALIZER(ABerryPickUp) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ALBERT4_Source_ALBERT4_BerryPickUp_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABerryPickUp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABerryPickUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABerryPickUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABerryPickUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABerryPickUp(ABerryPickUp&&); \
	NO_API ABerryPickUp(const ABerryPickUp&); \
public:


#define ALBERT4_Source_ALBERT4_BerryPickUp_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABerryPickUp(ABerryPickUp&&); \
	NO_API ABerryPickUp(const ABerryPickUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABerryPickUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABerryPickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABerryPickUp)


#define ALBERT4_Source_ALBERT4_BerryPickUp_h_13_PRIVATE_PROPERTY_OFFSET
#define ALBERT4_Source_ALBERT4_BerryPickUp_h_10_PROLOG
#define ALBERT4_Source_ALBERT4_BerryPickUp_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALBERT4_Source_ALBERT4_BerryPickUp_h_13_PRIVATE_PROPERTY_OFFSET \
	ALBERT4_Source_ALBERT4_BerryPickUp_h_13_RPC_WRAPPERS \
	ALBERT4_Source_ALBERT4_BerryPickUp_h_13_INCLASS \
	ALBERT4_Source_ALBERT4_BerryPickUp_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ALBERT4_Source_ALBERT4_BerryPickUp_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALBERT4_Source_ALBERT4_BerryPickUp_h_13_PRIVATE_PROPERTY_OFFSET \
	ALBERT4_Source_ALBERT4_BerryPickUp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ALBERT4_Source_ALBERT4_BerryPickUp_h_13_INCLASS_NO_PURE_DECLS \
	ALBERT4_Source_ALBERT4_BerryPickUp_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ALBERT4_Source_ALBERT4_BerryPickUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
