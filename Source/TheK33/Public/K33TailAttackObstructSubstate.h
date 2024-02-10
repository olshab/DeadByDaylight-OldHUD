#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "K33TailAttackObstructSubstate.generated.h"

UCLASS()
class THEK33_API UK33TailAttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UK33TailAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK33TailAttackObstructSubstate) { return 0; }
