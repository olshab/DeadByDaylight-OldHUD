#pragma once

#include "CoreMinimal.h"
#include "SpecialPackBuyActionDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecialPackBuyActionDelegate, const FString&, packId);
