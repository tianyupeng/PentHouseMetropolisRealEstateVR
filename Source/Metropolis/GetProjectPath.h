// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetProjectPath.generated.h"

/**
 * 
 */
UCLASS()
class METROPOLIS_API UGetProjectPath : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintPure, Category = "Tung's_Functions|FileIO")
	static FString GetProjectPath();
	
	
};
