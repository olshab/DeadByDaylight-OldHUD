#pragma once

#include "CoreMinimal.h"
#include "EK33SpecialModeChargeState.generated.h"

UENUM(BlueprintType)
enum class EK33SpecialModeChargeState : uint8
{
	Idle,
	Charging,
	Discharging,
};
