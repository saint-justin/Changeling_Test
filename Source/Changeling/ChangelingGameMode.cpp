// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ChangelingGameMode.h"
#include "ChangelingHUD.h"
#include "ChangelingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChangelingGameMode::AChangelingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AChangelingHUD::StaticClass();
}
