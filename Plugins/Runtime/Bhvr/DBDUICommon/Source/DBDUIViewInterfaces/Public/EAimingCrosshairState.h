#pragma once

#include "CoreMinimal.h"
#include "EAimingCrosshairState.generated.h"

UENUM(BlueprintType)
enum class EAimingCrosshairState : uint8
{
	Hidden,
	NoTarget,
	Cooldown,
	Assimilating,
	Teleporting,
	ProgressPaused,
	LockedOut,
};
