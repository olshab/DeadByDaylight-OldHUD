#pragma once

#include "CoreMinimal.h"
#include "PounceAttackHittingSubstate.h"
#include "K34PounceAttackHittingSubstate.generated.h"

UCLASS()
class THEK34_API UK34PounceAttackHittingSubstate : public UPounceAttackHittingSubstate
{
	GENERATED_BODY()

public:
	UK34PounceAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK34PounceAttackHittingSubstate) { return 0; }
