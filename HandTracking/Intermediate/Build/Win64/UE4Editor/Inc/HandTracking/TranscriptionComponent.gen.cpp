// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandTracking/TranscriptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTranscriptionComponent() {}
// Cross Module References
	HANDTRACKING_API UClass* Z_Construct_UClass_UTranscriptionComponent_NoRegister();
	HANDTRACKING_API UClass* Z_Construct_UClass_UTranscriptionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_HandTracking();
// End Cross Module References
	void UTranscriptionComponent::StaticRegisterNativesUTranscriptionComponent()
	{
	}
	UClass* Z_Construct_UClass_UTranscriptionComponent_NoRegister()
	{
		return UTranscriptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTranscriptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTranscriptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HandTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranscriptionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TranscriptionComponent.h" },
		{ "ModuleRelativePath", "TranscriptionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTranscriptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranscriptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTranscriptionComponent_Statics::ClassParams = {
		&UTranscriptionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTranscriptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTranscriptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTranscriptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTranscriptionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTranscriptionComponent, 492400153);
	template<> HANDTRACKING_API UClass* StaticClass<UTranscriptionComponent>()
	{
		return UTranscriptionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTranscriptionComponent(Z_Construct_UClass_UTranscriptionComponent, &UTranscriptionComponent::StaticClass, TEXT("/Script/HandTracking"), TEXT("UTranscriptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTranscriptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
