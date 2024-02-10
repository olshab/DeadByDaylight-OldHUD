#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretCarryableState.generated.h"

UCLASS()
class UK33TurretCarryableState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretCarryableState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretCarryableState) { return 0; }
