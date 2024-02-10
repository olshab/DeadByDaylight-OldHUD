#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretMalfunctioningState.generated.h"

UCLASS()
class UK33TurretMalfunctioningState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretMalfunctioningState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretMalfunctioningState) { return 0; }
