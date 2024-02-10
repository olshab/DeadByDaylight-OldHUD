#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "PlayerProfileCurrencyClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerProfileCurrencyClickedDelegate, ECurrencyType, currencyType);
