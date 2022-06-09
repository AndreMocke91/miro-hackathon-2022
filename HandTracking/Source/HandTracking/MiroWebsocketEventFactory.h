// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MiroWebsocketEventFactory.generated.h"

UENUM(BlueprintType)
enum EMiroWebsocketEventType
{
	Created UMETA(DisplayName = "Created"),
	Transformed UMETA(DisplayName = "Transformed"),
};


USTRUCT(BlueprintType)
struct FMiroWebsocketEvent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MiroWebsockets")
	TEnumAsByte<EMiroWebsocketEventType> EventType;
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
