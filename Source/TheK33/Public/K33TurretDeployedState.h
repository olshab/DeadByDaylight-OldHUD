#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretDeployedState.generated.h"

UCLASS()
class UK33TurretDeployedState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretDeployedState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretDeployedState) { return 0; }
