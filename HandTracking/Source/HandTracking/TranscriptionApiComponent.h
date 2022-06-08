// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Http.h"
#include "TranscriptionApiComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnApiTranscriptionComplete, FString, Text);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HANDTRACKING_API UTranscriptionApiComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTranscriptionApiComponent();

	UFUNCTION(BlueprintCallable, Category = "Transcription")
	FString TranscribeWav(FString FilePath);

	void OnResponseReceived(FHttpRequestPtr Req, FHttpResponsePtr Res, bool bConnected);

	UPROPERTY(BlueprintAssignable, Category = "Transcription")
	FOnApiTranscriptionComplete OnApiTranscriptionComplete;
};
