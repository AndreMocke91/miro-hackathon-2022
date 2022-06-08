// Fill out your copyright notice in the Description page of Project Settings.


#include "TranscriptionApiComponent.h"

// Sets default values for this component's properties
UTranscriptionApiComponent::UTranscriptionApiComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

FString UTranscriptionApiComponent::TranscribeWav(FString FilePath)
{
	int32 LastSlashPos;
	FilePath.FindLastChar('/', LastSlashPos);
	FString FileName = FilePath.RightChop(LastSlashPos + 1);

	TArray<uint8> UpFileRawData;
	FFileHelper::LoadFileToArray(UpFileRawData, *FilePath);

	FHttpRequestRef Req = FHttpModule::Get().CreateRequest();

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, "Transcribing: " + FilePath);

	Req->OnProcessRequestComplete().BindUObject(this, &UTranscriptionApiComponent::OnResponseReceived);
	Req->SetURL("http://159.223.214.79:1516/transcription");
	Req->SetVerb("POST");
	Req->SetHeader("Content-Type", "audio/x-wav");
	Req->SetContentAsStreamedFile(FilePath);
	Req->ProcessRequest();


	return FString();
}

void UTranscriptionApiComponent::OnResponseReceived(FHttpRequestPtr Req, FHttpResponsePtr Res, bool bConnected)
{
	int32 ResCode = Res->GetResponseCode();

	if (ResCode != 200) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, "Failed reqest to transcribe");
		UE_LOG(LogTemp, Warning, TEXT("Failed transcription request"))
		return;
	}

	FString responseString = Res->GetContentAsString();
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, "Got transcription response: " + responseString);
	UE_LOG(LogTemp, Warning, TEXT("Got transcription response"))

	TSharedPtr<FJsonObject> JsonObj;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(responseString);
	FJsonSerializer::Deserialize(Reader, JsonObj);

	FString Text = JsonObj->GetStringField("text");

	OnApiTranscriptionComplete.Broadcast(Text);
}

