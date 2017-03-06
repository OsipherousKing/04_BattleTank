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
	if (!GetControlledTank()) { return; }// if no tank shouldnt run this code 

	FVector HitLocation; // Out Parameter
	if (GetSightRayHitLocation(HitLocation)) // Has "side-effect",is going to line trace
	{
	//UE_LOG(LogTemp, Warning, TEXT("Look direction: %s"), *HitLocation.ToString());

	
		// TODO Tell controlled tank to aim at this point
	}
}

// Getworld location of linetrace through crosshair, true if hits landscape
bool ATankPlayerController::GetSightRayHitLocation(FVector & HitLocation) const
{
	// find crosshair position in pixel coordinates
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize( ViewportSizeX, ViewportSizeY);
	auto ScreenLocation = FVector2D(ViewportSizeX * CrosshairXLocation, ViewportSizeY * CrosshairYLocation);
	
	// "de-project" the screen position of the crosshair to a world direction
	// Line-trace along that look direction, and see what we hit ( up to max range)
	HitLocation = FVector(1.0);
	return true;
}


ATank*  ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn()); // getting tank as pawn
};


