// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "BattleTank.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1BattleTank() {}
	void ABattleTankGameModeBase::StaticRegisterNativesABattleTankGameModeBase()
	{
	}
	IMPLEMENT_CLASS(ABattleTankGameModeBase, 1780074155);
	void AProjectile::StaticRegisterNativesAProjectile()
	{
	}
	IMPLEMENT_CLASS(AProjectile, 209794658);
	void ATank::StaticRegisterNativesATank()
	{
		FNativeFunctionRegistrar::RegisterFunction(ATank::StaticClass(), "Fire",(Native)&ATank::execFire);
		FNativeFunctionRegistrar::RegisterFunction(ATank::StaticClass(), "SetBarrelReference",(Native)&ATank::execSetBarrelReference);
		FNativeFunctionRegistrar::RegisterFunction(ATank::StaticClass(), "SetTurretReference",(Native)&ATank::execSetTurretReference);
	}
	IMPLEMENT_CLASS(ATank, 1644113347);
	void ATankAIController::StaticRegisterNativesATankAIController()
	{
	}
	IMPLEMENT_CLASS(ATankAIController, 3531279489);
	void UTankAimingComponent::StaticRegisterNativesUTankAimingComponent()
	{
	}
	IMPLEMENT_CLASS(UTankAimingComponent, 499572834);
	void UTankBarrel::StaticRegisterNativesUTankBarrel()
	{
	}
	IMPLEMENT_CLASS(UTankBarrel, 3483904878);
	void UTankMovementComponent::StaticRegisterNativesUTankMovementComponent()
	{
		FNativeFunctionRegistrar::RegisterFunction(UTankMovementComponent::StaticClass(), "Initialise",(Native)&UTankMovementComponent::execInitialise);
		FNativeFunctionRegistrar::RegisterFunction(UTankMovementComponent::StaticClass(), "IntendMoveForward",(Native)&UTankMovementComponent::execIntendMoveForward);
		FNativeFunctionRegistrar::RegisterFunction(UTankMovementComponent::StaticClass(), "IntendTurnRight",(Native)&UTankMovementComponent::execIntendTurnRight);
	}
	IMPLEMENT_CLASS(UTankMovementComponent, 1052642833);
	void ATankPlayerController::StaticRegisterNativesATankPlayerController()
	{
	}
	IMPLEMENT_CLASS(ATankPlayerController, 1626817943);
	void UTankTrack::StaticRegisterNativesUTankTrack()
	{
		FNativeFunctionRegistrar::RegisterFunction(UTankTrack::StaticClass(), "SetThrottle",(Native)&UTankTrack::execSetThrottle);
	}
	IMPLEMENT_CLASS(UTankTrack, 418972860);
	void UTankTurret::StaticRegisterNativesUTankTurret()
	{
	}
	IMPLEMENT_CLASS(UTankTurret, 2824847306);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	AIMODULE_API class UClass* Z_Construct_UClass_AAIController();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API class UClass* Z_Construct_UClass_UNavMovementComponent();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();

	BATTLETANK_API class UClass* Z_Construct_UClass_ABattleTankGameModeBase_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ABattleTankGameModeBase();
	BATTLETANK_API class UClass* Z_Construct_UClass_AProjectile_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_AProjectile();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_ATank_Fire();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_ATank_SetBarrelReference();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_ATank_SetTurretReference();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATank_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATank();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankAIController_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankAIController();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankAimingComponent();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankBarrel();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankMovementComponent();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankPlayerController();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankTrack_SetThrottle();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankTrack_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankTrack();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankTurret();
	BATTLETANK_API class UPackage* Z_Construct_UPackage__Script_BattleTank();
	UClass* Z_Construct_UClass_ABattleTankGameModeBase_NoRegister()
	{
		return ABattleTankGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABattleTankGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ABattleTankGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BattleTankGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BattleTankGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleTankGameModeBase(Z_Construct_UClass_ABattleTankGameModeBase, &ABattleTankGameModeBase::StaticClass, TEXT("ABattleTankGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleTankGameModeBase);
	UClass* Z_Construct_UClass_AProjectile_NoRegister()
	{
		return AProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = AProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Projectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile(Z_Construct_UClass_AProjectile, &AProjectile::StaticClass, TEXT("AProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
	UFunction* Z_Construct_UFunction_ATank_Fire()
	{
		UObject* Outer=Z_Construct_UClass_ATank();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Firing"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATank_SetBarrelReference()
	{
		struct Tank_eventSetBarrelReference_Parms
		{
			UTankBarrel* BarrelToSet;
		};
		UObject* Outer=Z_Construct_UClass_ATank();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBarrelReference"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(Tank_eventSetBarrelReference_Parms));
			UProperty* NewProp_BarrelToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BarrelToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BarrelToSet, Tank_eventSetBarrelReference_Parms), 0x0010000000080080, Z_Construct_UClass_UTankBarrel_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Setup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
			MetaData->SetValue(NewProp_BarrelToSet, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATank_SetTurretReference()
	{
		struct Tank_eventSetTurretReference_Parms
		{
			UTankTurret* TurretToSet;
		};
		UObject* Outer=Z_Construct_UClass_ATank();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetTurretReference"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(Tank_eventSetTurretReference_Parms));
			UProperty* NewProp_TurretToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TurretToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TurretToSet, Tank_eventSetTurretReference_Parms), 0x0010000000080080, Z_Construct_UClass_UTankTurret_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Setup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
			MetaData->SetValue(NewProp_TurretToSet, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATank_NoRegister()
	{
		return ATank::StaticClass();
	}
	UClass* Z_Construct_UClass_ATank()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATank::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ATank_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_ATank_SetBarrelReference());
				OuterClass->LinkChild(Z_Construct_UFunction_ATank_SetTurretReference());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ReloadTimeInSeconds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReloadTimeInSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReloadTimeInSeconds, ATank), 0x0040000000010001);
				UProperty* NewProp_LaunchSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LaunchSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LaunchSpeed, ATank), 0x0040000000010001);
				UProperty* NewProp_ProjectileBlueprint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileBlueprint"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileBlueprint, ATank), 0x0044000000010001, Z_Construct_UClass_AProjectile_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_TankMovementComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TankMovementComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TankMovementComponent, ATank), 0x002008000008001c, Z_Construct_UClass_UTankMovementComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATank_Fire(), "Fire"); // 849603197
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATank_SetBarrelReference(), "SetBarrelReference"); // 2570909085
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATank_SetTurretReference(), "SetTurretReference"); // 1358035061
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Tank.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("Category"), TEXT("Firing"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("ToolTip"), TEXT("Sensible Starting value of 1000 m/s"));
				MetaData->SetValue(NewProp_LaunchSpeed, TEXT("Category"), TEXT("Firing"));
				MetaData->SetValue(NewProp_LaunchSpeed, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_ProjectileBlueprint, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_ProjectileBlueprint, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_TankMovementComponent, TEXT("Category"), TEXT("Tank"));
				MetaData->SetValue(NewProp_TankMovementComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TankMovementComponent, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank(Z_Construct_UClass_ATank, &ATank::StaticClass, TEXT("ATank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
	UClass* Z_Construct_UClass_ATankAIController_NoRegister()
	{
		return ATankAIController::StaticClass();
	}
	UClass* Z_Construct_UClass_ATankAIController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AAIController();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATankAIController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900280;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankAIController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankAIController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankAIController(Z_Construct_UClass_ATankAIController, &ATankAIController::StaticClass, TEXT("ATankAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankAIController);
	UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister()
	{
		return UTankAimingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankAimingComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankAimingComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankAimingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Hold Barrel's properties"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAimingComponent(Z_Construct_UClass_UTankAimingComponent, &UTankAimingComponent::StaticClass, TEXT("UTankAimingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAimingComponent);
	UClass* Z_Construct_UClass_UTankBarrel_NoRegister()
	{
		return UTankBarrel::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankBarrel()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankBarrel::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B01080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MinElevationDegrees = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinElevationDegrees"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinElevationDegrees, UTankBarrel), 0x0040000000010001);
				UProperty* NewProp_MaxElevationDegrees = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxElevationDegrees"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxElevationDegrees, UTankBarrel), 0x0040000000010001);
				UProperty* NewProp_MaxDegreesPerSecond = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxDegreesPerSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxDegreesPerSecond, UTankBarrel), 0x0040000000010001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankBarrel.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
				MetaData->SetValue(NewProp_MinElevationDegrees, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_MinElevationDegrees, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
				MetaData->SetValue(NewProp_MaxElevationDegrees, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_MaxElevationDegrees, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankBarrel(Z_Construct_UClass_UTankBarrel, &UTankBarrel::StaticClass, TEXT("UTankBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankBarrel);
	UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise()
	{
		struct TankMovementComponent_eventInitialise_Parms
		{
			UTankTrack* LeftTrackToSet;
			UTankTrack* RightTrackToSet;
		};
		UObject* Outer=Z_Construct_UClass_UTankMovementComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Initialise"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(TankMovementComponent_eventInitialise_Parms));
			UProperty* NewProp_RightTrackToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RightTrackToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RightTrackToSet, TankMovementComponent_eventInitialise_Parms), 0x0010000000080080, Z_Construct_UClass_UTankTrack_NoRegister());
			UProperty* NewProp_LeftTrackToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LeftTrackToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LeftTrackToSet, TankMovementComponent_eventInitialise_Parms), 0x0010000000080080, Z_Construct_UClass_UTankTrack_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Setup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
			MetaData->SetValue(NewProp_RightTrackToSet, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_LeftTrackToSet, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward()
	{
		struct TankMovementComponent_eventIntendMoveForward_Parms
		{
			float Throw;
		};
		UObject* Outer=Z_Construct_UClass_UTankMovementComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IntendMoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(TankMovementComponent_eventIntendMoveForward_Parms));
			UProperty* NewProp_Throw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Throw"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Throw, TankMovementComponent_eventIntendMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight()
	{
		struct TankMovementComponent_eventIntendTurnRight_Parms
		{
			float Throw;
		};
		UObject* Outer=Z_Construct_UClass_UTankMovementComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IntendTurnRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(TankMovementComponent_eventIntendTurnRight_Parms));
			UProperty* NewProp_Throw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Throw"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Throw, TankMovementComponent_eventIntendTurnRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister()
	{
		return UTankMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UNavMovementComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00084;

				OuterClass->LinkChild(Z_Construct_UFunction_UTankMovementComponent_Initialise());
				OuterClass->LinkChild(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankMovementComponent_Initialise(), "Initialise"); // 2577814884
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward(), "IntendMoveForward"); // 604718907
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight(), "IntendTurnRight"); // 82368049
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Responsible for driving the tank tracks"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankMovementComponent(Z_Construct_UClass_UTankMovementComponent, &UTankMovementComponent::StaticClass, TEXT("UTankMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankMovementComponent);
	UClass* Z_Construct_UClass_ATankPlayerController_NoRegister()
	{
		return ATankPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ATankPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATankPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900284;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_LineTraceRange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LineTraceRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LineTraceRange, ATankPlayerController), 0x0040000000010001);
				UProperty* NewProp_CrosshairYLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrosshairYLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrosshairYLocation, ATankPlayerController), 0x0040000000010001);
				UProperty* NewProp_CrosshairXLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrosshairXLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrosshairXLocation, ATankPlayerController), 0x0040000000010001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankPlayerController.h"));
				MetaData->SetValue(NewProp_LineTraceRange, TEXT("Category"), TEXT("TankPlayerController"));
				MetaData->SetValue(NewProp_LineTraceRange, TEXT("ModuleRelativePath"), TEXT("Public/TankPlayerController.h"));
				MetaData->SetValue(NewProp_CrosshairYLocation, TEXT("Category"), TEXT("TankPlayerController"));
				MetaData->SetValue(NewProp_CrosshairYLocation, TEXT("ModuleRelativePath"), TEXT("Public/TankPlayerController.h"));
				MetaData->SetValue(NewProp_CrosshairXLocation, TEXT("Category"), TEXT("TankPlayerController"));
				MetaData->SetValue(NewProp_CrosshairXLocation, TEXT("ModuleRelativePath"), TEXT("Public/TankPlayerController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPlayerController(Z_Construct_UClass_ATankPlayerController, &ATankPlayerController::StaticClass, TEXT("ATankPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerController);
	UFunction* Z_Construct_UFunction_UTankTrack_SetThrottle()
	{
		struct TankTrack_eventSetThrottle_Parms
		{
			float Throttle;
		};
		UObject* Outer=Z_Construct_UClass_UTankTrack();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetThrottle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(TankTrack_eventSetThrottle_Parms));
			UProperty* NewProp_Throttle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Throttle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Throttle, TankTrack_eventSetThrottle_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankTrack.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("sets a throttle between -1 and +1"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankTrack_NoRegister()
	{
		return UTankTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankTrack()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankTrack::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B01080;

				OuterClass->LinkChild(Z_Construct_UFunction_UTankTrack_SetThrottle());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_TrackMaxDrivingForce = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TrackMaxDrivingForce"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TrackMaxDrivingForce, UTankTrack), 0x0010000000010001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankTrack_SetThrottle(), "SetThrottle"); // 1922641105
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("TankTrack is used to set maximum driving force and apply forces to the tank"));
				MetaData->SetValue(NewProp_TrackMaxDrivingForce, TEXT("Category"), TEXT("TankTrack"));
				MetaData->SetValue(NewProp_TrackMaxDrivingForce, TEXT("ModuleRelativePath"), TEXT("Public/TankTrack.h"));
				MetaData->SetValue(NewProp_TrackMaxDrivingForce, TEXT("ToolTip"), TEXT("this is max force per track in newtons"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTrack(Z_Construct_UClass_UTankTrack, &UTankTrack::StaticClass, TEXT("UTankTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTrack);
	UClass* Z_Construct_UClass_UTankTurret_NoRegister()
	{
		return UTankTurret::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankTurret()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankTurret::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B01080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MaxDegreesPerSecond = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxDegreesPerSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxDegreesPerSecond, UTankTurret), 0x0040000000010001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankTurret.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankTurret.h"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("ModuleRelativePath"), TEXT("Public/TankTurret.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTurret(Z_Construct_UClass_UTankTurret, &UTankTurret::StaticClass, TEXT("UTankTurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTurret);
	UPackage* Z_Construct_UPackage__Script_BattleTank()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/BattleTank")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xD2558670;
			Guid.B = 0x01FA589D;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
