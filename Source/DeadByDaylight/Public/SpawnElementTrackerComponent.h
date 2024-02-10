#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnElementTrackerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USpawnElementTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	USpawnElementTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USpawnElementTrackerComponent) { return 0; }
