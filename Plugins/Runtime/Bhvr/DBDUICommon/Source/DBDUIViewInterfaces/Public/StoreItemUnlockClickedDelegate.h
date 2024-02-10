#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "StoreItemUnlockClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStoreItemUnlockClickedDelegate, ECurrencyType, currencyType);
