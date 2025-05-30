// Copyright Epic Games, Inc. All Rights Reserved.

#include "HoloCookingGameMode.h"
#include "FirstPersonCharacter/HoloCookingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHoloCookingGameMode::AHoloCookingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
