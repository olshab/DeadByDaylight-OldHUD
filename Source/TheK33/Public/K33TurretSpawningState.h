#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretSpawningState.generated.h"

UCLASS()
class UK33TurretSpawningState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretSpawningState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretSpawningState) { return 0; }
