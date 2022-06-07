// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HANDTRACKING_TranscriptionApiComponent_generated_h
#error "TranscriptionApiComponent.generated.h already included, missing '#pragma once' in TranscriptionApiComponent.h"
#endif
#define HANDTRACKING_TranscriptionApiComponent_generated_h

#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_10_DELEGATE \
struct _Script_HandTracking_eventOnApiTranscriptionComplete_Parms \
{ \
	FString Text; \
}; \
static inline void FOnApiTranscriptionComplete_DelegateWrapper(const FMulticastScriptDelegate& OnApiTranscriptionComplete, const FString& Text) \
{ \
	_Script_HandTracking_eventOnApiTranscriptionComplete_Parms Parms; \
	Parms.Text=Text; \
	OnApiTranscriptionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_SPARSE_DATA
#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTranscribeWav);


#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTranscribeWav);


#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTranscriptionApiComponent(); \
	friend struct Z_Construct_UClass_UTranscriptionApiComponent_Statics; \
public: \
	DECLARE_CLASS(UTranscriptionApiComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HandTracking"), NO_API) \
	DECLARE_SERIALIZER(UTranscriptionApiComponent)


#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTranscriptionApiComponent(); \
	friend struct Z_Construct_UClass_UTranscriptionApiComponent_Statics; \
public: \
	DECLARE_CLASS(UTranscriptionApiComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HandTracking"), NO_API) \
	DECLARE_SERIALIZER(UTranscriptionApiComponent)


#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTranscriptionApiComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTranscriptionApiComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTranscriptionApiComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranscriptionApiComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTranscriptionApiComponent(UTranscriptionApiComponent&&); \
	NO_API UTranscriptionApiComponent(const UTranscriptionApiComponent&); \
public:


#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTranscriptionApiComponent(UTranscriptionApiComponent&&); \
	NO_API UTranscriptionApiComponent(const UTranscriptionApiComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTranscriptionApiComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranscriptionApiComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTranscriptionApiComponent)


#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_12_PROLOG
#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_SPARSE_DATA \
	HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_RPC_WRAPPERS \
	HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_INCLASS \
	HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_SPARSE_DATA \
	HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_INCLASS_NO_PURE_DECLS \
	HandTracking_Source_HandTracking_TranscriptionApiComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HANDTRACKING_API UClass* StaticClass<class UTranscriptionApiComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking_Source_HandTracking_TranscriptionApiComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
