#pragma once

#include "CoreMinimal.h"
#include "ActionPredictionKey.h"
#include "K31DroneActionRequest.generated.h"

class UK31DroneBaseAction;
class AK31Drone;

USTRUCT()
struct FK31DroneActionRequest
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UK31DroneBaseAction* Action;

	UPROPERTY()
	AK31Drone* Drone;

	UPROPERTY()
	FActionPredictionKey PredictionKey;

public:
	THEK31_API FK31DroneActionRequest();
};

FORCEINLINE uint32 GetTypeHash(const FK31DroneActionRequest) { return 0; }
