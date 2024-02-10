#pragma once

#include "CoreMinimal.h"
#include "AuricCellsBuyActionDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAuricCellsBuyActionDelegate, FName, bundleId);
