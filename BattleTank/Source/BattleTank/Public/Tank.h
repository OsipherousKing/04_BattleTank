// Fill out your copyright notice in the Description page of Project Settings.
// For Future reference don't hash include headers into headers
#pragma once


#include "GameFramework/Pawn.h"
#include "Tank.generated.h" // Put new includes above

// forward declarations
class UTankBarrel; // Forward Declaration
class UTankAimingComponent;
UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:

	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetBarrelReference(UTankBarrel* BarrelToSet);
	
protected:
	UTankAimingComponent* TankAimingComponent = nullptr;

private:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Sets default values for this pawn's properties
	ATank();

	UPROPERTY(EditAnywhere, Category = Firing)
	float LaunchSpeed = 100000; // Sensible Starting value of 1000 m/s
};
