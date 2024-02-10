#pragma once

#include "CoreMinimal.h"
#include "ActorSpawner.h"
#include "EventSpawner.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEventSpawner : public UActorSpawner
{
	GENERATED_BODY()

public:
	UEventSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UEventSpawner) { return 0; }
