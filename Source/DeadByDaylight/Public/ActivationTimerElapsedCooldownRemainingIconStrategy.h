#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActivationTimerElapsedCooldownRemainingIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UActivationTimerElapsedCooldownRemainingIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActivationTimerElapsedCooldownRemainingIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActivationTimerElapsedCooldownRemainingIconStrategy) { return 0; }
