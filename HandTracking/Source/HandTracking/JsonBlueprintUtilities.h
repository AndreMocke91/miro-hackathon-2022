// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JsonBlueprintUtilities.generated.h"

/**
 * 
 */
UCLASS()
class HANDTRACKING_API UJsonBlueprintUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:

	UFUNCTION(BlueprintPure, Category = "Data", meta = (Keywords = "LoadApiToken"))
	static bool LoadApiToken(FString FilePath, FString& Output);
	
};
