// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "AIController.h"
#include "TankAIController.generated.h"

// forwd declarations
class ATank;

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:



private:

	void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// how close can AI tank get
	float AcceptanceRadius = 3000;


};
	
	
