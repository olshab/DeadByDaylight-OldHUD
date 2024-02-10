#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "BaseChainsawAttackSuccessSubstate.generated.h"

UCLASS()
class THEHILLBILLY_API UBaseChainsawAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UBaseChainsawAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UBaseChainsawAttackSuccessSubstate) { return 0; }
