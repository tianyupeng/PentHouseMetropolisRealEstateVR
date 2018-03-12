// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VR_Home_Caculation.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class METROPOLIS_API UVR_Home_Caculation : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVR_Home_Caculation();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintPure, Category = "Can Gi Phai Cho Trong Ngoac Dau")
	void GetLengthVelocity(FVector Velocity, float & Length);

		
	
};
