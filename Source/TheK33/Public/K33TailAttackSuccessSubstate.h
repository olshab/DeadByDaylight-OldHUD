#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "K33TailAttackSuccessSubstate.generated.h"

UCLASS()
class THEK33_API UK33TailAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UK33TailAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK33TailAttackSuccessSubstate) { return 0; }
