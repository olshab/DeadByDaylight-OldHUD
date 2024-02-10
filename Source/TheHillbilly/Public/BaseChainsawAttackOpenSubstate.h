#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "BaseChainsawAttackOpenSubstate.generated.h"

UCLASS()
class THEHILLBILLY_API UBaseChainsawAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UBaseChainsawAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UBaseChainsawAttackOpenSubstate) { return 0; }
