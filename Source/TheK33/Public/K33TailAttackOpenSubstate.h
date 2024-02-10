#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "K33TailAttackOpenSubstate.generated.h"

UCLASS()
class THEK33_API UK33TailAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UK33TailAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK33TailAttackOpenSubstate) { return 0; }
