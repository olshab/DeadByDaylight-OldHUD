#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EK31DroneStateID.h"
#include "K31DroneAnimInstance.generated.h"

class UK31DroneStateController;
class AK31Drone;

UCLASS(NonTransient)
class UK31DroneAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	EK31DroneStateID _droneState;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UK31DroneStateController* _droneStateController;

	UPROPERTY(Transient)
	AK31Drone* _owningDrone;

public:
	UK31DroneAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneAnimInstance) { return 0; }
