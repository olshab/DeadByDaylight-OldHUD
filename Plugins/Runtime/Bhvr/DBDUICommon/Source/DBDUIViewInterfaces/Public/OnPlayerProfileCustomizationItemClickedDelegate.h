#pragma once

#include "CoreMinimal.h"
#include "OnPlayerProfileCustomizationItemClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerProfileCustomizationItemClickedDelegate, const int32, index);
