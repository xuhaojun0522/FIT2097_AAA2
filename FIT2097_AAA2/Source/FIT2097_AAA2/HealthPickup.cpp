// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthPickup.h"
#include "FIT2097_AAA2Character.h"

// Sets default values
AHealthPickup::AHealthPickup()
{

	bReplicates = true;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	OnActorBeginOverlap.AddDynamic(this, &AHealthPickup::OnOverlap);

}

void AHealthPickup::OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor)
{
	if (OtherActor != nullptr && OtherActor != this)
	{
		class AFIT2097_AAA2Character* MyCharacter = Cast<AFIT2097_AAA2Character>(OtherActor);

		if (MyCharacter && MyCharacter->getHealth() < 1.0f)
		{
			MyCharacter->UpdateHealth(100.0f);
			Destroy();
		}
	}
}