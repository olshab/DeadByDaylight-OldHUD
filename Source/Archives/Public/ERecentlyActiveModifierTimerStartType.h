#pragma once

#include "CoreMinimal.h"
#include "ERecentlyActiveModifierTimerStartType.generated.h"

UENUM(BlueprintType)
enum class ERecentlyActiveModifierTimerStartType : uint8
{
	OnTagAdded,
	OnTagRemoved,
};
