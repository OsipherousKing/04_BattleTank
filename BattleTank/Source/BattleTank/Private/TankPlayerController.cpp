// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"



void ATankPlayerController::BeginPlay()
{

	
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController is not  possesing a tank bitch"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController is possesing %s Bitch"), *(ControlledTank->GetName()));
	}
	

	
}

// Tick 
// Super
// AimTowardsCrosshair();
void ATankPlayerController::Tick(float DeltaTime)
{
	AimTowardsCrosshair();
	Super::Tick(DeltaTime);
	// UE_LOG(LogTemp, Warning, TEXT("I am ticking all the time"));
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }

	//Get World location if linetrace through crosshaiur
	// If it hits the landscape
		// Tell controlled tank to aim at this point

}


ATank*  ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn()); // getting tank as pawn
};


