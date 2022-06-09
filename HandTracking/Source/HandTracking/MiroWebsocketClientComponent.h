// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IWebSocket.h"
#include "MiroWebsocketEventFactory.h"
#include "MiroWebsocketClientComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWebsocketEventReceivedDelegate, FMiroWebsocketEvent, MiroWebsocketEvent);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HANDTRACKING_API UMiroWebsocketClientComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMiroWebsocketClientComponent();

	TSharedPtr<IWebSocket> WebSocket;
	UFUNCTION(BlueprintCallable, Category = "MiroWebsockets")
	void ConnectToServer(FString ServerUrl);

	UFUNCTION(BlueprintCallable, Category = "MiroWebsockets")
	void Disconnect();

	UPROPERTY(BlueprintAssignable, Category = "MiroWebsockets")
	FOnWebsocketEventReceivedDelegate OnWebsocketEventReceivedDelegate;
};
