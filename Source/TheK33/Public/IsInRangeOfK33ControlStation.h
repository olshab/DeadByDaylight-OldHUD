#pragma once

#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "IsInRangeOfK33ControlStation.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsInRangeOfK33ControlStation : public UAnyActorPairQueryRangeIsTrue
{
	GENERATED_BODY()

public:
	UIsInRangeOfK33ControlStation();
};

FORCEINLINE uint32 GetTypeHash(const UIsInRangeOfK33ControlStation) { return 0; }
