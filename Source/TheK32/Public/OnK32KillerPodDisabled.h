#pragma once

#include "CoreMinimal.h"
#include "OnK32KillerPodDisabled.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnK32KillerPodDisabled, const bool, isDisabled);
