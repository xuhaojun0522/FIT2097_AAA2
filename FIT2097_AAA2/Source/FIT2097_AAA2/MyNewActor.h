// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/StaticMesh.h"
#include "MyNewActor.generated.h"

/**
 * 
 */
UCLASS()
class FIT2097_AAA2_API AMyNewActor : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AMyNewActor();

	//network stuff
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintPure)
		bool IsActive();

	UFUNCTION(BlueprintCallable)
		void setActive(bool NewState);

protected:

	UPROPERTY(ReplicatedUsing = OnRep_IsActive)
	bool bIsActive;

	UFUNCTION()
	virtual void OnRep_IsActive();
	
	
};
