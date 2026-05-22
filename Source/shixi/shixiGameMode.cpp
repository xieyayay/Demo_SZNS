// Copyright Epic Games, Inc. All Rights Reserved.

#include "shixiGameMode.h"
#include "shixiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AshixiGameMode::AshixiGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
