// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Http.h" 
#include "UObject/SparseDelegate.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "MiroApiComponent.generated.h" 

// Miro API data types

USTRUCT(BlueprintType)
struct FWidgetPosition {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float x;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float y;
};


USTRUCT(BlueprintType)
struct FStickyContentData {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Content;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ID;
};


USTRUCT(BlueprintType)
struct FStickyData {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FStickyContentData data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FWidgetPosition position;
};

USTRUCT(BlueprintType)
struct FStickyResponse {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FStickyData> data;
};

USTRUCT(BlueprintType)
struct FGetStickiesRequest {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString boardId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString apiAccessToken;
};


USTRUCT(BlueprintType)
struct FCreateStickyRequest {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString boardId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString apiAccessToken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString content;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float XPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float YPos;
};

// Delegate definitions

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FGetStickiesResultSignature, UMiroApiComponent, OnGetStickiesResult, FString, GetStickiesJsonResult);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FCreateStickyResultSignature, UMiroApiComponent, OnCreateStickyResult, FString, CreateStickyResult);

// Component

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class HANDTRACKING_API UMiroApiComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMiroApiComponent();

	// -- Fetch Stickies --
	UFUNCTION(BlueprintCallable, Category = "MiroData")
		void GetStickies(FGetStickiesRequest GetStickiesRequest); // trigger

	UPROPERTY(BlueprintAssignable, Category = "MiroData")
		FGetStickiesResultSignature OnGetStickiesResult; // event

		// utility function to transform data
	UFUNCTION(BlueprintCallable, Category = "MiroData")
		TArray<FStickyData> FMarshalGetStickiesResult(FString RawJsonResponse);

	// @todo - function to strip tags

	// -- Create sticky --
	UFUNCTION(BlueprintCallable, Category = "MiroData")
		void CreateSticky(FCreateStickyRequest CreateStickyRequest);

	UPROPERTY(BlueprintAssignable, Category = "MiroData")
		FCreateStickyResultSignature OnCreateStickyResult;

private:
	// -- Events (delegates) --
	void OnGetStickiesResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool ConnectedSuccessfully);
	void OnCreateStickyResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool ConnectedSuccessfully);

};
