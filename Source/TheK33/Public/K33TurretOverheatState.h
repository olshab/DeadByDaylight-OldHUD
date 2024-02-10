#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretOverheatState.generated.h"

UCLASS()
class UK33TurretOverheatState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretOverheatState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretOverheatState) { return 0; }
