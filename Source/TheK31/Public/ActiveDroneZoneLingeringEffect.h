#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "ActiveDroneZoneLingeringEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UActiveDroneZoneLingeringEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

public:
	UActiveDroneZoneLingeringEffect();
};

FORCEINLINE uint32 GetTypeHash(const UActiveDroneZoneLingeringEffect) { return 0; }
