#pragma once

#include "CoreMinimal.h"
#include "BaseChainsawAttackSuccessSubstate.h"
#include "CannibalChainsawAttackSuccessSubstate.generated.h"

UCLASS()
class THECANNIBAL_API UCannibalChainsawAttackSuccessSubstate : public UBaseChainsawAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UCannibalChainsawAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackSuccessSubstate) { return 0; }
