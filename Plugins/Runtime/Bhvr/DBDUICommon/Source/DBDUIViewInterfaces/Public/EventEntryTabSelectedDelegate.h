#pragma once

#include "CoreMinimal.h"
#include "EventEntryTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventEntryTabSelectedDelegate, const int32, key);
