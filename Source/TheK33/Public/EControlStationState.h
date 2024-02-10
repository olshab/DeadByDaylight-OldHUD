#pragma once

#include "CoreMinimal.h"
#include "EControlStationState.generated.h"

UENUM(BlueprintType)
enum class EControlStationState : uint8
{
	Available,
	SpawningTurret,
	SpawnedTurret,
	Cooldown,
};
