// (C) Copyright 2023 by CronoGames All Rights Reserved.


#include "GenPlayerController.h"

void AGenPlayerController::SetUIMode(bool GameAndUI)
{
	if (GameAndUI)
	{
		bShowMouseCursor = true;
		SetInputMode(FInputModeGameAndUI());
		bIsUIOpen = true;
	}
	else
	{
		bShowMouseCursor = false;
		SetInputMode(FInputModeGameOnly());
		bIsUIOpen = false;
	}
}
