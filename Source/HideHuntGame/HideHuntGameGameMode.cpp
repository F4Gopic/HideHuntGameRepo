// Copyright Epic Games, Inc. All Rights Reserved.

#include "HideHuntGameGameMode.h"
#include "HideHuntGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHideHuntGameGameMode::AHideHuntGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
