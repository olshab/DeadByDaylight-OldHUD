#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretBeingCollectedFromControlStationState.generated.h"

UCLASS()
class UK33TurretBeingCollectedFromControlStationState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretBeingCollectedFromControlStationState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretBeingCollectedFromControlStationState) { return 0; }
