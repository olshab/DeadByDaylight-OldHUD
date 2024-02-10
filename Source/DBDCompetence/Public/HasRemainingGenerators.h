#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "HasRemainingGenerators.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHasRemainingGenerators : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UHasRemainingGenerators();
};

FORCEINLINE uint32 GetTypeHash(const UHasRemainingGenerators) { return 0; }
