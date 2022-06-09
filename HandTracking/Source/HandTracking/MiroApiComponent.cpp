// Fill out your copyright notice in the Description page of Project Settings.


#include "MiroApiComponent.h"


// Sets default values for this component's properties
UMiroApiComponent::UMiroApiComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UMiroApiComponent::GetStickies(FGetStickiesRequest GetStickiesRequest)
{
	FString AuthHeader = "Bearer ";
	AuthHeader.Append(GetStickiesRequest.apiAccessToken);

	FString Url = FString::Printf(TEXT("https://api.miro.com/v2/boards/%s/items?type=sticky_note&items=10"), *GetStickiesRequest.boardId);
	UE_LOG(LogTemp, Display, TEXT("Calling against %s"), *Url);

	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(Url);
	Request->SetVerb("GET");
	Request->SetHeader("Authorization", AuthHeader);
	Request->SetHeader("Accept", "application/json");
	Request->OnProcessRequestComplete().BindUObject(this, &UMiroApiComponent::OnGetStickiesResponse);
	Request->ProcessRequest();
}


void UMiroApiComponent::OnGetStickiesResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool ConnectedSuccessfully)
{
	FString RawResponse = Response->GetContentAsString();
	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(RawResponse);
	if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
	{
		if (JsonParsed->HasField("error")) {
			FString message = "Unable to get message";
			JsonParsed->TryGetStringField("message", message);
			UE_LOG(LogTemp, Display, TEXT("Response came back with error %s"), *message);
			return;
		}

		UE_LOG(LogTemp, Display, TEXT("Response came back successfully: %s"), *RawResponse);
		OnGetStickiesResult.Broadcast(RawResponse);
	}
}

TArray<FStickyData> UMiroApiComponent::FMarshalGetStickiesResult(FString RawJsonResponse)
{
	FStickyResponse result = {};
	FJsonObjectConverter::JsonObjectStringToUStruct(RawJsonResponse, &result);
	if (result.data.Num() > 0) {
		FString firstContent = result.data[0].data.Content;
		UE_LOG(LogTemp, Display, TEXT("Marshalled first content: %s"), *firstContent);
	}
	else {
		UE_LOG(LogTemp, Display, TEXT("No data elements in marshalled content."));
	}
	return result.data;
}

void UMiroApiComponent::CreateSticky(FCreateStickyRequest CreateStickyRequest)
{
	FString AuthHeader = "Bearer ";
	AuthHeader.Append(CreateStickyRequest.apiAccessToken);

	FString Url = FString::Printf(TEXT("https://api.miro.com/v2/boards/%s/sticky_notes"), *CreateStickyRequest.boardId);
	UE_LOG(LogTemp, Display, TEXT("Calling against %s"), *Url);

	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(Url);
	Request->SetVerb("POST");
	Request->SetHeader("Authorization", AuthHeader);
	Request->SetHeader("Accept", "application/json");
	Request->SetHeader("Content-Type", "application/json");
	FString Body = FString::Printf(TEXT("{\"data\": {\"content\":\"%s\"}, \"position\":{\"x\": %f, \"y\": %f } }"), *CreateStickyRequest.content, CreateStickyRequest.XPos, CreateStickyRequest.YPos);
	Request->SetContentAsString(Body); // TODO add content and position
	Request->OnProcessRequestComplete().BindUObject(this, &UMiroApiComponent::OnCreateStickyResponse);
	Request->ProcessRequest();

}

void UMiroApiComponent::OnCreateStickyResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool ConnectedSuccessfully)
{
	FString RawResponse = Response->GetContentAsString();
	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(RawResponse);
	if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
	{
		if (JsonParsed->HasField("error")) {
			FString message = "Unable to get message";
			JsonParsed->TryGetStringField("message", message);
			UE_LOG(LogTemp, Display, TEXT("Response came back with error %s"), *message);
			return;
		}

		UE_LOG(LogTemp, Display, TEXT("Response came back successfully: %s"), *RawResponse);
		OnCreateStickyResult.Broadcast(RawResponse);
	}
}
