#pragma once

#include "CoreMinimal.h"
#include "EMilestoneTrackerItemState.generated.h"

UENUM(BlueprintType)
enum class EMilestoneTrackerItemState : uint8
{
	Unlocked,
	InProgress,
	Locked,
};
