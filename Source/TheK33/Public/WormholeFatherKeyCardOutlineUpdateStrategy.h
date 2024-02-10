#pragma once

#include "CoreMinimal.h"
#include "SurvivorCollectableOutlineUpdateStrategy.h"
#include "WormholeFatherKeyCardOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UWormholeFatherKeyCardOutlineUpdateStrategy : public USurvivorCollectableOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UWormholeFatherKeyCardOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UWormholeFatherKeyCardOutlineUpdateStrategy) { return 0; }
