// Fill out your copyright notice in the Description page of Project Settings.


#include "MiroWebsocketClientComponent.h"
#include "Json.h"
#include "WebSocketsModule.h"

// Sets default values for this component's properties
UMiroWebsocketClientComponent::UMiroWebsocketClientComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UMiroWebsocketClientComponent::ConnectToServer(FString ServerUrl)
{
	if (!FModuleManager::Get().IsModuleLoaded("WebSockets")) {
		FModuleManager::Get().LoadModule("WebsSockets");
	}

	WebSocket = FWebSocketsModule::Get().CreateWebSocket(ServerUrl);

	WebSocket->OnConnected().AddLambda([]() {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Happily Connected");
	});
	WebSocket->OnClosed().AddLambda([](int32 StatusCode, const FString& Reason, bool bWasClean) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Disconnected BOIIIII");
	});
	WebSocket->OnMessage().AddLambda([this](const FString& MessageString) {
	// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, "Received :" + MessageString);
		FMiroWebsocketEvent ServerEvent = MiroWebsocketEventFactory::ParseServerEvent(MessageString);
		OnWebsocketEventReceivedDelegate.Broadcast(ServerEvent);
	});

	WebSocket->Connect();
}

void UMiroWebsocketClientComponent::Disconnect()
{
	if (WebSocket->IsConnected()) {
		WebSocket->Close();
	}
}


