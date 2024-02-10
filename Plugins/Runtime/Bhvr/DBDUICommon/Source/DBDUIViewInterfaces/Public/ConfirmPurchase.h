#pragma once

#include "CoreMinimal.h"
#include "ConfirmPurchase.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConfirmPurchase, int32, tiersToPurchaseNumber);
