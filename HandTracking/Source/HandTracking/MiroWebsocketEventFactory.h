// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MiroWebsocketEventFactory.generated.h"

UENUM(BlueprintType)
enum EMiroWebsocketEventType
{
	ItemCreated UMETA(DisplayName = "ItemCreated"),
	ItemTransformed UMETA(DisplayName = "ItemTransformed"),
	CursorMoved UMETA(DisplayName = "CursorMoved"),
	NoOp UMETA(DisplayName = "NoOp"),
};

USTRUCT(BlueprintType)
struct FMiroWebsocketEvent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MiroWebsockets")
	TEnumAsByte<EMiroWebsocketEventType> EventType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MiroWebsockets")
	FString Content;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MiroWebsockets")
	FString Id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MiroWebsockets")
	float xPos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MiroWebsockets")
	float yPos;
};
/**
 * 
 */
class HANDTRACKING_API MiroWebsocketEventFactory
{
public:
	MiroWebsocketEventFactory();
	~MiroWebsocketEventFactory();

	static FMiroWebsocketEvent ParseServerEvent(FString rawString);
};
