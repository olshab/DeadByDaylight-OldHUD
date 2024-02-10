#pragma once

#include "CoreMinimal.h"
#include "HookedSurvivorRangeBaseCondition.h"
#include "IsOutsideOfAnyHookedSurvivorRange.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsOutsideOfAnyHookedSurvivorRange : public UHookedSurvivorRangeBaseCondition
{
	GENERATED_BODY()

public:
	UIsOutsideOfAnyHookedSurvivorRange();
};

FORCEINLINE uint32 GetTypeHash(const UIsOutsideOfAnyHookedSurvivorRange) { return 0; }
