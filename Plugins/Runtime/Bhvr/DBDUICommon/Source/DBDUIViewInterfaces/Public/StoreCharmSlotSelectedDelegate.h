#pragma once

#include "CoreMinimal.h"
#include "StoreCharmSlotSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStoreCharmSlotSelectedDelegate, const int32, slotIndex);
