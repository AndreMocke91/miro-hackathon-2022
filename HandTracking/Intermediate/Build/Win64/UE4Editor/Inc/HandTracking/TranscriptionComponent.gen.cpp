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
	HANDTRACKING_API UFunction* Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HandTracking();
	HANDTRACKING_API UClass* Z_Construct_UClass_UTranscriptionComponent_NoRegister();
	HANDTRACKING_API UClass* Z_Construct_UClass_UTranscriptionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature_Statics
	{
		struct _Script_HandTracking_eventOnTranscriptionComplete_Parms
		{
			FString Text;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HandTracking_eventOnTranscriptionComplete_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TranscriptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HandTracking, nullptr, "OnTranscriptionComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_HandTracking_eventOnTranscriptionComplete_Parms), Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTranscriptionComponent::execTranscribeWav)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->TranscribeWav(Z_Param_FilePath);
		P_NATIVE_END;
	}
	void UTranscriptionComponent::StaticRegisterNativesUTranscriptionComponent()
	{
		UClass* Class = UTranscriptionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TranscribeWav", &UTranscriptionComponent::execTranscribeWav },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics
	{
		struct TranscriptionComponent_eventTranscribeWav_Parms
		{
			FString FilePath;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TranscriptionComponent_eventTranscribeWav_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TranscriptionComponent_eventTranscribeWav_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transcription" },
		{ "ModuleRelativePath", "TranscriptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTranscriptionComponent, nullptr, "TranscribeWav", nullptr, nullptr, sizeof(TranscriptionComponent_eventTranscribeWav_Parms), Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTranscriptionComponent_NoRegister()
	{
		return UTranscriptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTranscriptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTranscriptionComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTranscriptionComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTranscriptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HandTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTranscriptionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTranscriptionComponent_TranscribeWav, "TranscribeWav" }, // 689137043
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranscriptionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TranscriptionComponent.h" },
		{ "ModuleRelativePath", "TranscriptionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranscriptionComponent_Statics::NewProp_OnTranscriptionComplete_MetaData[] = {
		{ "Category", "WebSockets" },
		{ "ModuleRelativePath", "TranscriptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTranscriptionComponent_Statics::NewProp_OnTranscriptionComplete = { "OnTranscriptionComplete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTranscriptionComponent, OnTranscriptionComplete), Z_Construct_UDelegateFunction_HandTracking_OnTranscriptionComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTranscriptionComponent_Statics::NewProp_OnTranscriptionComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranscriptionComponent_Statics::NewProp_OnTranscriptionComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTranscriptionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranscriptionComponent_Statics::NewProp_OnTranscriptionComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTranscriptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranscriptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTranscriptionComponent_Statics::ClassParams = {
		&UTranscriptionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTranscriptionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTranscriptionComponent_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UTranscriptionComponent, 1716729704);
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
