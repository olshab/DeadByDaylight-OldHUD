#pragma once

#include "CoreMinimal.h"
#include "ETrackedKillerState.generated.h"

UENUM(BlueprintType)
enum class ETrackedKillerState : uint8
{
	Patrolling,
	Chasing,
	Carrying,
};
