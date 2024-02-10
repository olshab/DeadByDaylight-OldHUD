#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K33TurretMotionTrackerComponent.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33TurretMotionTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _secondsBetweenBipSoundPerKillerDistanceCurve;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _motionTrackerMaxDetectionRange;

public:
	UK33TurretMotionTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretMotionTrackerComponent) { return 0; }
