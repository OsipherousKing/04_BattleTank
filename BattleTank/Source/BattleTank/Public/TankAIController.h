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

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void BeginPlay() override;

	ATank* GetControlledTank() const; // Getter method to get tank

	ATank* GetPlayerTank() const;
};
	
	
