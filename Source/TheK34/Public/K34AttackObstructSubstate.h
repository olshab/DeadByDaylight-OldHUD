#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "K34AttackObstructSubstate.generated.h"

UCLASS()
class THEK34_API UK34AttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UK34AttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK34AttackObstructSubstate) { return 0; }
