#pragma once

#include "CoreMinimal.h"
#include "OnToastPromptSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToastPromptSelectedDelegate, const uint32, notificationId);
