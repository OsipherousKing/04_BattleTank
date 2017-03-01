// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller is not  possesing a tank bitch"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller is possesing %s Bitch"), *(ControlledTank->GetName()));
	}


}

ATank*  ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn()); // getting tank as pawn
};
