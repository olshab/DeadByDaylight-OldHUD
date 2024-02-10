#pragma once

#include "CoreMinimal.h"
#include "OnToastButtonSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnToastButtonSelectedDelegate, const int32, buttonId, const uint32, notificationId);
