#pragma once

#include "CoreMinimal.h"
#include "EK31DroneMovementMode.generated.h"

UENUM(BlueprintType)
enum class EK31DroneMovementMode : uint8
{
	NORMAL,
	DEPLOY,
	SNAPPING,
};
