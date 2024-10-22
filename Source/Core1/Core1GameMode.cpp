// Copyright Epic Games, Inc. All Rights Reserved.

#include "Core1GameMode.h"
#include "Core1Character.h"
#include "UObject/ConstructorHelpers.h"

ACore1GameMode::ACore1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
