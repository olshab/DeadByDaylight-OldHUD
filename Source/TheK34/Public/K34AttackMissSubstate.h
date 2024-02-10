#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "K34AttackMissSubstate.generated.h"

UCLASS()
class THEK34_API UK34AttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UK34AttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK34AttackMissSubstate) { return 0; }
