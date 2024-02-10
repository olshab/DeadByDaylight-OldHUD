#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "K33TailAttackMissSubstate.generated.h"

UCLASS()
class THEK33_API UK33TailAttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UK33TailAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK33TailAttackMissSubstate) { return 0; }
