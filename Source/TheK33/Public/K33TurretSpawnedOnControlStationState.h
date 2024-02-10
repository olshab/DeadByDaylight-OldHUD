#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretSpawnedOnControlStationState.generated.h"

UCLASS()
class UK33TurretSpawnedOnControlStationState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretSpawnedOnControlStationState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretSpawnedOnControlStationState) { return 0; }
