#pragma once

#include "CoreMinimal.h"
#include "ESortingOption.h"
#include "ESortingOrder.h"
#include "OnItemSortingSetDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemSortingSetDelegate, const ESortingOption, sortingType, const ESortingOrder, sortingOrder);
