#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "K34SliceAndDiceAttackSuccessSubstate.generated.h"

UCLASS()
class UK34SliceAndDiceAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UK34SliceAndDiceAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK34SliceAndDiceAttackSuccessSubstate) { return 0; }
