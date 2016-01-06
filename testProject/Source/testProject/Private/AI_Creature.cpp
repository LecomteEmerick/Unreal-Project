// Fill out your copyright notice in the Description page of Project Settings.

#include "testProject.h"
#include "AI_Creature.h"


// Sets default values for this component's properties
UAI_Creature::UAI_Creature()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAI_Creature::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAI_Creature::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

FVector UAI_Creature::GenerateNewPosition(AActor* actor)
{
	return FVector(10.0f, 0.0f, 10.0f);
}