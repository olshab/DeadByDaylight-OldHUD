#pragma once

#include "CoreMinimal.h"
#include "ELoadoutSlot.h"
#include "OnLoadoutMenuPresetSlotClick.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoadoutMenuPresetSlotClick, int32, presetId, ELoadoutSlot, slotSelected);
