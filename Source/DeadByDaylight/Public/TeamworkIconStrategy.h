#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "TeamworkIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UTeamworkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UTeamworkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTeamworkIconStrategy) { return 0; }
