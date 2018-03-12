// Fill out your copyright notice in the Description page of Project Settings.

#include "GetProjectPath.h"
#include "Paths.h"

FString UGetProjectPath::GetProjectPath()
{
	return FPaths::ProjectDir();
}
