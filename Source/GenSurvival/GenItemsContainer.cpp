// (C) Copyright 2023 by CronoGames All Rights Reserved.


#include "GenItemsContainer.h"

// Sets default values for this component's properties
UGenItemsContainer::UGenItemsContainer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGenItemsContainer::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGenItemsContainer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
