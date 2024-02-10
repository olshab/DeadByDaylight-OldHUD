#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretBeingUndeployedState.generated.h"

UCLASS()
class UK33TurretBeingUndeployedState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretBeingUndeployedState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretBeingUndeployedState) { return 0; }
