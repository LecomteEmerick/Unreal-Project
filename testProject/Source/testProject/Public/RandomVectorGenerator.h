// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "RandomVectorGenerator.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API URandomVectorGenerator : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
		FVector GenerateRandomVector();
	
	
};
