#pragma once

#include "CoreMinimal.h"
#include "PounceAttackHittingSubstate.h"
#include "CannibalChainsawAttackHittingSubstate.generated.h"

UCLASS()
class THECANNIBAL_API UCannibalChainsawAttackHittingSubstate : public UPounceAttackHittingSubstate
{
	GENERATED_BODY()

public:
	UCannibalChainsawAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackHittingSubstate) { return 0; }
