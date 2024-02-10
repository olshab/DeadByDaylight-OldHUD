#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "K34SliceAndDiceAttackOpenSubstate.generated.h"

UCLASS()
class UK34SliceAndDiceAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UK34SliceAndDiceAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK34SliceAndDiceAttackOpenSubstate) { return 0; }
