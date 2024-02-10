#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "K34PounceAttackOpenSubstate.generated.h"

UCLASS()
class THEK34_API UK34PounceAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UK34PounceAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK34PounceAttackOpenSubstate) { return 0; }
