#pragma once

#include "CoreMinimal.h"
#include "BaseChainsawAttackMissSubstate.h"
#include "CannibalChainsawAttackMissSubstate.generated.h"

UCLASS()
class THECANNIBAL_API UCannibalChainsawAttackMissSubstate : public UBaseChainsawAttackMissSubstate
{
	GENERATED_BODY()

public:
	UCannibalChainsawAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackMissSubstate) { return 0; }
