#pragma once

#include "CoreMinimal.h"
#include "OnLeaveSpectateConditionsReached.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLeaveSpectateConditionsReached, bool, value);
