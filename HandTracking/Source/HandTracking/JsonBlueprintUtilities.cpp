// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonBlueprintUtilities.h"

bool UJsonBlueprintUtilities::LoadApiToken(FString FilePath, FString& Output) {
	return FFileHelper::LoadFileToString(Output, *FilePath);
}