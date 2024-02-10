#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DistanceCheckPawnLocationOverride.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "K28SecondaryCameraMovementData.h"
#include "TagStateBool.h"
#include "AnimationMontageDescriptor.h"
#include "K28KillerTeleportationComponent.generated.h"

class AActor;
class ADBDPlayer;
class UCurveFloat;
class UK28LockerComponent;
class ACamperPlayer;
class UPrimitiveComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28KillerTeleportationComponent : public UActorComponent, public IDistanceCheckPawnLocationOverride
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _teleportationSpeed_DayCycle;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportationSpeed_NightCycle;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportationTimeForSurvivorGrab;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _survivorPanicInLockerAnimationMontageDescriptor;

	UPROPERTY(Replicated)
	FTagStateBool _isTeleporting;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _defaultTeleportationCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _grabTeleportationCurve;

	UPROPERTY(Transient)
	TArray<AActor*> _actorsHiddenDuringTeleport;

private:
	UFUNCTION()
	void OnPlayerFinishedEnteringLocker(ADBDPlayer* playerThatWasInLocker, ADBDPlayer* playerNowInLocker);

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TeleportToLockerStart(FK28SecondaryCameraMovementData cameraMovementData, UK28LockerComponent* lockerBeingTeleportedTo, ACamperPlayer* survivorToGrab);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TeleportToLockerEnd(UK28LockerComponent* lockerTeleportedTo, ACamperPlayer* survivorInLocker);

	UFUNCTION()
	void Local_OnTeleportCollisionOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Local_OnTeleportCollisionOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28KillerTeleportationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerTeleportationComponent) { return 0; }
