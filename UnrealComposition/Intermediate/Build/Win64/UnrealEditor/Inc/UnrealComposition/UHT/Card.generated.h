// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Card.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALCOMPOSITION_Card_generated_h
#error "Card.generated.h already included, missing '#pragma once' in Card.h"
#endif
#define UNREALCOMPOSITION_Card_generated_h

#define FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_SPARSE_DATA
#define FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_RPC_WRAPPERS
#define FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_ACCESSORS
#define FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCard(); \
	friend struct Z_Construct_UClass_UCard_Statics; \
public: \
	DECLARE_CLASS(UCard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealComposition"), NO_API) \
	DECLARE_SERIALIZER(UCard)


#define FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCard(); \
	friend struct Z_Construct_UClass_UCard_Statics; \
public: \
	DECLARE_CLASS(UCard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealComposition"), NO_API) \
	DECLARE_SERIALIZER(UCard)


#define FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCard(UCard&&); \
	NO_API UCard(const UCard&); \
public: \
	NO_API virtual ~UCard();


#define FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCard(UCard&&); \
	NO_API UCard(const UCard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCard) \
	NO_API virtual ~UCard();


#define FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_21_PROLOG
#define FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_SPARSE_DATA \
	FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_RPC_WRAPPERS \
	FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_ACCESSORS \
	FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_INCLASS \
	FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_SPARSE_DATA \
	FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_ACCESSORS \
	FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCOMPOSITION_API UClass* StaticClass<class UCard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealTest_Unreal_Study_UnrealComposition_Source_UnrealComposition_Card_h


#define FOREACH_ENUM_ECARDTYPE(op) \
	op(ECardType::Student) \
	op(ECardType::Teacher) \
	op(ECardType::Staff) \
	op(ECardType::Invalid) 

enum class ECardType : uint8;
template<> struct TIsUEnumClass<ECardType> { enum { Value = true }; };
template<> UNREALCOMPOSITION_API UEnum* StaticEnum<ECardType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
