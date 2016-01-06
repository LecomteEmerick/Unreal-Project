// Fill out your copyright notice in the Description page of Project Settings.

#include "testProject.h"
#include "RandomVectorGenerator.h"

FVector GenerateRandomVector()
{
	float x = FMath::FRandRange(-100, 100);
	float y = FMath::FRandRange(-100, 100);
	float z = FMath::FRandRange(-100, 100);
	return FVector(x, y, z);
}