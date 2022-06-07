// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HANDTRACKING_TranscriptionComponent_generated_h
#error "TranscriptionComponent.generated.h already included, missing '#pragma once' in TranscriptionComponent.h"
#endif
#define HANDTRACKING_TranscriptionComponent_generated_h

#define HandTracking_Source_HandTracking_TranscriptionComponent_h_10_DELEGATE \
struct _Script_HandTracking_eventOnTranscriptionComplete_Parms \
{ \
	FString Text; \
}; \
static inline void FOnTranscriptionComplete_DelegateWrapper(const FMulticastScriptDelegate& OnTranscriptionComplete, const FString& Text) \
{ \
	_Script_HandTracking_eventOnTranscriptionComplete_Parms Parms; \
	Parms.Text=Text; \
	OnTranscriptionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking_Source_HandTracking_TranscriptionComponent_h_15_SPARSE_DATA
#define HandTracking_Source_HandTracking_TranscriptionComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTranscribeWav);


#define HandTracking_Source_HandTracking_TranscriptionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTranscribeWav);


#define HandTracking_Source_HandTracking_TranscriptionComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTranscriptionComponent(); \
	friend struct Z_Construct_UClass_UTranscriptionComponent_Statics; \
public: \
	DECLARE_CLASS(UTranscriptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HandTracking"), NO_API) \
	DECLARE_SERIALIZER(UTranscriptionComponent)


#define HandTracking_Source_HandTracking_TranscriptionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTranscriptionComponent(); \
	friend struct Z_Construct_UClass_UTranscriptionComponent_Statics; \
public: \
	DECLARE_CLASS(UTranscriptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HandTracking"), NO_API) \
	DECLARE_SERIALIZER(UTranscriptionComponent)


#define HandTracking_Source_HandTracking_TranscriptionComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTranscriptionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTranscriptionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTranscriptionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranscriptionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTranscriptionComponent(UTranscriptionComponent&&); \
	NO_API UTranscriptionComponent(const UTranscriptionComponent&); \
public:


#define HandTracking_Source_HandTracking_TranscriptionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTranscriptionComponent(UTranscriptionComponent&&); \
	NO_API UTranscriptionComponent(const UTranscriptionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTranscriptionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranscriptionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTranscriptionComponent)


#define HandTracking_Source_HandTracking_TranscriptionComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define HandTracking_Source_HandTracking_TranscriptionComponent_h_12_PROLOG
#define HandTracking_Source_HandTracking_TranscriptionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking_Source_HandTracking_TranscriptionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HandTracking_Source_HandTracking_TranscriptionComponent_h_15_SPARSE_DATA \
	HandTracking_Source_HandTracking_TranscriptionComponent_h_15_RPC_WRAPPERS \
	HandTracking_Source_HandTracking_TranscriptionComponent_h_15_INCLASS \
	HandTracking_Source_HandTracking_TranscriptionComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking_Source_HandTracking_TranscriptionComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking_Source_HandTracking_TranscriptionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HandTracking_Source_HandTracking_TranscriptionComponent_h_15_SPARSE_DATA \
	HandTracking_Source_HandTracking_TranscriptionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking_Source_HandTracking_TranscriptionComponent_h_15_INCLASS_NO_PURE_DECLS \
	HandTracking_Source_HandTracking_TranscriptionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HANDTRACKING_API UClass* StaticClass<class UTranscriptionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking_Source_HandTracking_TranscriptionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
