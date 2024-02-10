#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "K34AttackSuccessSubstate.generated.h"

UCLASS()
class THEK34_API UK34AttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UK34AttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK34AttackSuccessSubstate) { return 0; }
