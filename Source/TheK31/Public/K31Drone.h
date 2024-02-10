#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "DBDGenericTeamAgentInterface.h"
#include "K31Drone.generated.h"

class UK31DroneFlightController;
class UK31DroneMovementComponent;
class UDeployDroneInteraction;
class ADBDPlayer;
class USceneComponent;
class UDBDSkeletalMeshComponentBudgeted;
class UAuthoritativePoolableActorComponent;
class UK31DroneLaserController;
class UMapActorComponent;
class UChildActorComponent;
class UK31DroneHackableAvoidanceSensor;
class UStaticMeshComponent;
class UK31DroneOwnershipComponent;
class UK31DroneStateController;
class UK31DroneDebugComponent;
class UK31DroneZoneComponent;
class UK31TrapProximitySensor;
class UK31DronePlacementRecaller;
class UK31DroneHackableComponent;
class UDBDNavModifierComponent;
class UK31DroneDangerPredictionComponent;
class ULocalPlayerTrackerComponent;

UCLASS()
class THEK31_API AK31Drone : public AInteractable, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _movingRootComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UChildActorComponent* _laserChildActorComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UK31DroneLaserController* _laserController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _droneMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _activeZoneMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UK31DroneMovementComponent* _movementComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UK31DroneFlightController* _flightController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativePoolableActorComponent* _poolableActorComponent;

	UPROPERTY(Transient, Export)
	UK31DroneOwnershipComponent* _ownershipComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UK31DroneStateController* _stateController;

	UPROPERTY(Export)
	UK31DroneDebugComponent* _debugComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UK31DroneZoneComponent* _droneZoneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UK31TrapProximitySensor* _trapProximitySensor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UK31DronePlacementRecaller* _placementRecallerComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UK31DroneHackableComponent* _hackableComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UK31DroneHackableAvoidanceSensor* _avoidanceSensor;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDeployDroneInteraction* _deployInteraction;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavModifierComponent* _navModifierComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31DroneDangerPredictionComponent* _dangerPredictionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMapActorComponent* _droneMapActorComponent;

	UPROPERTY(Transient)
	ADBDPlayer* _lastOwner;

	UPROPERTY(Transient, Export)
	ULocalPlayerTrackerComponent* _localPlayerTracker;

private:
	UFUNCTION()
	void OnAcquiredChanged(const bool acquired);

	UFUNCTION()
	void Native_OnLocallyObservedChanged();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void Cosmetic_OnRevertToScoutingCurrentChargeChanged(float chargePercentage);

	UFUNCTION(BlueprintImplementableEvent)
	void Cosmetic_OnLocallyObservedChanged();

	UFUNCTION(BlueprintImplementableEvent)
	void Cosmetic_OnIsHackableStateChanged(bool isHackable);

public:
	AK31Drone();
};

FORCEINLINE uint32 GetTypeHash(const AK31Drone) { return 0; }
