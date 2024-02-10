#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31DroneLaserController.generated.h"

class ULocalPlayerTrackerComponent;
class AK31DroneLaserScanActor;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneLaserController : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	ULocalPlayerTrackerComponent* _localPlayerTracker;

	UPROPERTY(Transient)
	ADBDPlayer* _locallyObservedPlayer;

	UPROPERTY(Transient)
	AK31DroneLaserScanActor* _laserActor;

private:
	UFUNCTION()
	void OnLocallyObservedChanged();

	UFUNCTION()
	void Local_OnIdleChanged(bool isIdle, float idleStartTime);

	UFUNCTION()
	void Local_OnCrouchChanged(bool isCrouched);

public:
	UK31DroneLaserController();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneLaserController) { return 0; }
