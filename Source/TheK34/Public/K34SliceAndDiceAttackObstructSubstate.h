#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "K34SliceAndDiceAttackObstructSubstate.generated.h"

UCLASS()
class UK34SliceAndDiceAttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UK34SliceAndDiceAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK34SliceAndDiceAttackObstructSubstate) { return 0; }
