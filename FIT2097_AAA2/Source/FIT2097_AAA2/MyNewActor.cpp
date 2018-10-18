// Fill out your copyright notice in the Description page of Project Settings.
#include "MyNewActor.h"
#include "FIT2097_AAA2.h"
#include "Net/UnrealNetwork.h"

AMyNewActor::AMyNewActor() 
{
	bReplicates = true;

	PrimaryActorTick.bCanEverTick = false;

	//This pickup is movable and has physics enabled
	bReplicateMovement = true;
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetSimulatePhysics(true);
}

void AMyNewActor::OnRep_IsActive() 
{
	//some code goes here
}

void AMyNewActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyNewActor, bIsActive);
}

bool AMyNewActor::IsActive() 
{
	return bIsActive;
}

void AMyNewActor::setActive(bool NewState)
{
	if (Role == ROLE_Authority)
	{
		bIsActive = NewState;
	}
}

