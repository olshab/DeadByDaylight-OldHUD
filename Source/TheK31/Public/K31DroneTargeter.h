#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K31DroneTargeter.generated.h"

class AK31Drone;
class ADBDActorIndicator;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneTargeter : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ADBDActorIndicator> _indicatorClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxAngleFromScreenCenter;

	UPROPERTY(Transient)
	ADBDActorIndicator* _indicator;

	UPROPERTY(Transient)
	AK31Drone* _target;

public:
	UK31DroneTargeter();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneTargeter) { return 0; }
