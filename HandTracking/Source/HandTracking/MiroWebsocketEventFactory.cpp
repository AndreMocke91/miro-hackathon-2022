// Fill out your copyright notice in the Description page of Project Settings.


#include "MiroWebsocketEventFactory.h"

MiroWebsocketEventFactory::MiroWebsocketEventFactory()
{
}

MiroWebsocketEventFactory::~MiroWebsocketEventFactory()
{
}

FMiroWebsocketEvent MiroWebsocketEventFactory::ParseServerEvent(FString rawString)
{
	FMiroWebsocketEvent MiroWebsocketEvent = FMiroWebsocketEvent();

	TSharedPtr<FJsonObject> ResponseObj;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(rawString);
	FJsonSerializer::Deserialize(Reader, ResponseObj);

	// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, "Trying to parse message from server: " + rawString);

	if (ResponseObj == nullptr) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Could not parse message from server: " + rawString);
		MiroWebsocketEvent.EventType = EMiroWebsocketEventType::NoOp;
		return MiroWebsocketEvent;
	}

	if (ResponseObj->HasField("cursor_moved")) {
		TSharedPtr<FJsonObject> jsonPayload = ResponseObj->GetObjectField("cursor_moved");

		MiroWebsocketEvent.EventType = EMiroWebsocketEventType::CursorMoved;
		MiroWebsocketEvent.xPos = jsonPayload->GetNumberField("x");
		MiroWebsocketEvent.yPos = jsonPayload->GetNumberField("y");
		MiroWebsocketEvent.Id = jsonPayload->GetStringField("clientId");
		return MiroWebsocketEvent;
	}

	if (ResponseObj->HasField("item_transformed")) {
		TSharedPtr<FJsonObject> jsonPayload = ResponseObj->GetObjectField("item_transformed");

		MiroWebsocketEvent.EventType = EMiroWebsocketEventType::ItemCreated;
		MiroWebsocketEvent.xPos = jsonPayload->GetNumberField("x");
		MiroWebsocketEvent.yPos = jsonPayload->GetNumberField("y");
		MiroWebsocketEvent.Id = jsonPayload->GetStringField("clientId");
		MiroWebsocketEvent.Content = jsonPayload->GetStringField("content");

		return MiroWebsocketEvent;
	}

	if (ResponseObj->HasField("item_created")) {
		TSharedPtr<FJsonObject> jsonPayload = ResponseObj->GetObjectField("item_created");
		MiroWebsocketEvent.EventType = EMiroWebsocketEventType::ItemTransformed;
		MiroWebsocketEvent.xPos = jsonPayload->GetNumberField("x");
		MiroWebsocketEvent.yPos = jsonPayload->GetNumberField("y");
		MiroWebsocketEvent.Id = jsonPayload->GetStringField("id");
		MiroWebsocketEvent.Content = jsonPayload->GetStringField("content");

		return MiroWebsocketEvent;
	}


	return MiroWebsocketEvent;
}
