#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretFiringState.generated.h"

UCLASS()
class UK33TurretFiringState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretFiringState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretFiringState) { return 0; }
