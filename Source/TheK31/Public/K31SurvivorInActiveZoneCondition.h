#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "K31SurvivorInActiveZoneCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31SurvivorInActiveZoneCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UK31SurvivorInActiveZoneCondition();
};

FORCEINLINE uint32 GetTypeHash(const UK31SurvivorInActiveZoneCondition) { return 0; }
