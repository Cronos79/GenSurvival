// (C) Copyright 2023 by CronoGames All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GENSURVIVAL_API AGenPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	bool bIsUIOpen;

public:
	UFUNCTION(BlueprintCallable)
	void SetUIMode(bool GameAndUI);
	
};
