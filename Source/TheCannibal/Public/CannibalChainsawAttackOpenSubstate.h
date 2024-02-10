#pragma once

#include "CoreMinimal.h"
#include "BaseChainsawAttackOpenSubstate.h"
#include "CannibalChainsawAttackOpenSubstate.generated.h"

UCLASS()
class THECANNIBAL_API UCannibalChainsawAttackOpenSubstate : public UBaseChainsawAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UCannibalChainsawAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackOpenSubstate) { return 0; }
