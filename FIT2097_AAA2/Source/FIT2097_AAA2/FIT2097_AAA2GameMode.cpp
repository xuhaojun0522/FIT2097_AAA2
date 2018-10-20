// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FIT2097_AAA2GameMode.h"
#include "FIT2097_AAA2HUD.h"
#include "FIT2097_AAA2Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

AFIT2097_AAA2GameMode::AFIT2097_AAA2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFIT2097_AAA2HUD::StaticClass();
}

void AFIT2097_AAA2GameMode::BeginPlay()
{
	Super::BeginPlay();

	SetCurrentState(EGamePlayState::EPlaying);

	MyCharacter = Cast<AFIT2097_AAA2Character>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void AFIT2097_AAA2GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MyCharacter)
	{
		if (FMath::IsNearlyZero(MyCharacter->getHealth(), 0.001f))
		{
			SetCurrentState(EGamePlayState::EGameOver);
		}
	}
}

EGamePlayState AFIT2097_AAA2GameMode::GetCurrentState() const
{
	return CurrentState;
}

void AFIT2097_AAA2GameMode::SetCurrentState(EGamePlayState NewState)
{
	CurrentState = NewState;
	HandleNewState(CurrentState);
}

void AFIT2097_AAA2GameMode::HandleNewState(EGamePlayState NewState)
{
	switch (NewState)
	{
	case EGamePlayState::EPlaying:
	{
		// do nothing
	}
	break;
	// Unknown/default state
	case EGamePlayState::EGameOver:
	{
		UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
	}
	break;
	// Unknown/default state
	default:
	case EGamePlayState::EUnknown:
	{
		// do nothing
	}
	break;
	}
}