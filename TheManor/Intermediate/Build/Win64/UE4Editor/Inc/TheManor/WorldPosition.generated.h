// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEMANOR_WorldPosition_generated_h
#error "WorldPosition.generated.h already included, missing '#pragma once' in WorldPosition.h"
#endif
#define THEMANOR_WorldPosition_generated_h

#define TheManor_Source_TheManor_WorldPosition_h_12_SPARSE_DATA
#define TheManor_Source_TheManor_WorldPosition_h_12_RPC_WRAPPERS
#define TheManor_Source_TheManor_WorldPosition_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TheManor_Source_TheManor_WorldPosition_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldPosition(); \
	friend struct Z_Construct_UClass_AWorldPosition_Statics; \
public: \
	DECLARE_CLASS(AWorldPosition, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheManor"), NO_API) \
	DECLARE_SERIALIZER(AWorldPosition)


#define TheManor_Source_TheManor_WorldPosition_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWorldPosition(); \
	friend struct Z_Construct_UClass_AWorldPosition_Statics; \
public: \
	DECLARE_CLASS(AWorldPosition, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheManor"), NO_API) \
	DECLARE_SERIALIZER(AWorldPosition)


#define TheManor_Source_TheManor_WorldPosition_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldPosition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldPosition(AWorldPosition&&); \
	NO_API AWorldPosition(const AWorldPosition&); \
public:


#define TheManor_Source_TheManor_WorldPosition_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldPosition(AWorldPosition&&); \
	NO_API AWorldPosition(const AWorldPosition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPosition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldPosition)


#define TheManor_Source_TheManor_WorldPosition_h_12_PRIVATE_PROPERTY_OFFSET
#define TheManor_Source_TheManor_WorldPosition_h_9_PROLOG
#define TheManor_Source_TheManor_WorldPosition_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheManor_Source_TheManor_WorldPosition_h_12_PRIVATE_PROPERTY_OFFSET \
	TheManor_Source_TheManor_WorldPosition_h_12_SPARSE_DATA \
	TheManor_Source_TheManor_WorldPosition_h_12_RPC_WRAPPERS \
	TheManor_Source_TheManor_WorldPosition_h_12_INCLASS \
	TheManor_Source_TheManor_WorldPosition_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheManor_Source_TheManor_WorldPosition_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheManor_Source_TheManor_WorldPosition_h_12_PRIVATE_PROPERTY_OFFSET \
	TheManor_Source_TheManor_WorldPosition_h_12_SPARSE_DATA \
	TheManor_Source_TheManor_WorldPosition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TheManor_Source_TheManor_WorldPosition_h_12_INCLASS_NO_PURE_DECLS \
	TheManor_Source_TheManor_WorldPosition_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEMANOR_API UClass* StaticClass<class AWorldPosition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheManor_Source_TheManor_WorldPosition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
