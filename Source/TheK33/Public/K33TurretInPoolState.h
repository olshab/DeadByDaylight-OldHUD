#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretInPoolState.generated.h"

UCLASS()
class UK33TurretInPoolState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretInPoolState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretInPoolState) { return 0; }
