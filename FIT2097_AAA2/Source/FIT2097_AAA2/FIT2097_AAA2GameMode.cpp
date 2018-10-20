// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FIT2097_AAA2GameMode.h"
#include "FIT2097_AAA2HUD.h"
#include "FIT2097_AAA2Character.h"
#include "UObject/ConstructorHelpers.h"

AFIT2097_AAA2GameMode::AFIT2097_AAA2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFIT2097_AAA2HUD::StaticClass();
}
