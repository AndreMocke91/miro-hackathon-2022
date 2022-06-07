// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandTracking/TranscriptionApiComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTranscriptionApiComponent() {}
// Cross Module References
	HANDTRACKING_API UFunction* Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HandTracking();
	HANDTRACKING_API UClass* Z_Construct_UClass_UTranscriptionApiComponent_NoRegister();
	HANDTRACKING_API UClass* Z_Construct_UClass_UTranscriptionApiComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature_Statics
	{
		struct _Script_HandTracking_eventOnApiTranscriptionComplete_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HandTracking_eventOnApiTranscriptionComplete_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TranscriptionApiComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HandTracking, nullptr, "OnApiTranscriptionComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_HandTracking_eventOnApiTranscriptionComplete_Parms), Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTranscriptionApiComponent::execTranscribeWav)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->TranscribeWav(Z_Param_FilePath);
		P_NATIVE_END;
	}
	void UTranscriptionApiComponent::StaticRegisterNativesUTranscriptionApiComponent()
	{
		UClass* Class = UTranscriptionApiComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TranscribeWav", &UTranscriptionApiComponent::execTranscribeWav },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics
	{
		struct TranscriptionApiComponent_eventTranscribeWav_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TranscriptionApiComponent_eventTranscribeWav_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TranscriptionApiComponent_eventTranscribeWav_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transcription" },
		{ "ModuleRelativePath", "TranscriptionApiComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTranscriptionApiComponent, nullptr, "TranscribeWav", nullptr, nullptr, sizeof(TranscriptionApiComponent_eventTranscribeWav_Parms), Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTranscriptionApiComponent_NoRegister()
	{
		return UTranscriptionApiComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTranscriptionApiComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnApiTranscriptionComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnApiTranscriptionComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTranscriptionApiComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HandTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTranscriptionApiComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTranscriptionApiComponent_TranscribeWav, "TranscribeWav" }, // 1096249946
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranscriptionApiComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TranscriptionApiComponent.h" },
		{ "ModuleRelativePath", "TranscriptionApiComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranscriptionApiComponent_Statics::NewProp_OnApiTranscriptionComplete_MetaData[] = {
		{ "Category", "WebSockets" },
		{ "ModuleRelativePath", "TranscriptionApiComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTranscriptionApiComponent_Statics::NewProp_OnApiTranscriptionComplete = { "OnApiTranscriptionComplete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTranscriptionApiComponent, OnApiTranscriptionComplete), Z_Construct_UDelegateFunction_HandTracking_OnApiTranscriptionComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTranscriptionApiComponent_Statics::NewProp_OnApiTranscriptionComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranscriptionApiComponent_Statics::NewProp_OnApiTranscriptionComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTranscriptionApiComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranscriptionApiComponent_Statics::NewProp_OnApiTranscriptionComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTranscriptionApiComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranscriptionApiComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTranscriptionApiComponent_Statics::ClassParams = {
		&UTranscriptionApiComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTranscriptionApiComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTranscriptionApiComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTranscriptionApiComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTranscriptionApiComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTranscriptionApiComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTranscriptionApiComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTranscriptionApiComponent, 2865895036);
	template<> HANDTRACKING_API UClass* StaticClass<UTranscriptionApiComponent>()
	{
		return UTranscriptionApiComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTranscriptionApiComponent(Z_Construct_UClass_UTranscriptionApiComponent, &UTranscriptionApiComponent::StaticClass, TEXT("/Script/HandTracking"), TEXT("UTranscriptionApiComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTranscriptionApiComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
