#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ApplicableCooldownPerkIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UApplicableCooldownPerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UApplicableCooldownPerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UApplicableCooldownPerkIconStrategy) { return 0; }
