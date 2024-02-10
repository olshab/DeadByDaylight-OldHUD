#pragma once

#include "CoreMinimal.h"
#include "ClaimedRitualDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClaimedRitualDelegate, const FString&, dailyRitualKey);
