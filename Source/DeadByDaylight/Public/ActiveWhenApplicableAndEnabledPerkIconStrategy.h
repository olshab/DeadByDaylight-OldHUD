#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActiveWhenApplicableAndEnabledPerkIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UActiveWhenApplicableAndEnabledPerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActiveWhenApplicableAndEnabledPerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActiveWhenApplicableAndEnabledPerkIconStrategy) { return 0; }
