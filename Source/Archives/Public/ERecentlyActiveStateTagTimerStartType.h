#pragma once

#include "CoreMinimal.h"
#include "ERecentlyActiveStateTagTimerStartType.generated.h"

UENUM(BlueprintType)
enum class ERecentlyActiveStateTagTimerStartType : uint8
{
	OnTagAdded,
	OnTagRemoved,
};
