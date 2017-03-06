// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"// must be last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const; // Getter method to get tank

	void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	// Start tank barrel movment so that shot would hit where crosshair intersects world
	void AimTowardsCrosshair();
	
};
