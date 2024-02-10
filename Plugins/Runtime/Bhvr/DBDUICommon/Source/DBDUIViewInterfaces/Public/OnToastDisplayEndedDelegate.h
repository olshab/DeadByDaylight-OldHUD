#pragma once

#include "CoreMinimal.h"
#include "OnToastDisplayEndedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToastDisplayEndedDelegate, const uint32, notificationId);
