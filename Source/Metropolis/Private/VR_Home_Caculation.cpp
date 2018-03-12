// Fill out your copyright notice in the Description page of Project Settings.

#include "VR_Home_Caculation.h"


// Sets default values for this component's properties
UVR_Home_Caculation::UVR_Home_Caculation()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UVR_Home_Caculation::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UVR_Home_Caculation::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UVR_Home_Caculation::GetLengthVelocity(FVector Velocity, float & Length)
{
	Length = Velocity.Size();
}

