#pragma once

#include "CoreMinimal.h"
#include "K31DroneTimestampedState.generated.h"

class UK31DroneState;

USTRUCT()
struct FK31DroneTimestampedState
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	UK31DroneState* State;

	UPROPERTY(Transient)
	float Timestamp;

public:
	THEK31_API FK31DroneTimestampedState();
};

FORCEINLINE uint32 GetTypeHash(const FK31DroneTimestampedState) { return 0; }
