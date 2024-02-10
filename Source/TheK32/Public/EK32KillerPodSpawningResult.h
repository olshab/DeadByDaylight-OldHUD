#pragma once

#include "CoreMinimal.h"
#include "EK32KillerPodSpawningResult.generated.h"

UENUM(BlueprintType)
enum class EK32KillerPodSpawningResult : uint8
{
	NoResult,
	NoSurface,
	InvalidSurface,
	SpawnKillerPod,
	DestroyKillerPod,
	TeleportToSurvivor,
};
