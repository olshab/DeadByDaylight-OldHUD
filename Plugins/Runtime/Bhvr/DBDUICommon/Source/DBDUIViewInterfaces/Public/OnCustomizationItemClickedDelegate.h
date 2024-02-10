#pragma once

#include "CoreMinimal.h"
#include "OnCustomizationItemClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomizationItemClickedDelegate, const int32, index);
