// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Geralds_Journey.h"
#include "Geralds_JourneyGameMode.h"
#include "Geralds_JourneyCharacter.h"

AGeralds_JourneyGameMode::AGeralds_JourneyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
