#pragma once

#include "CoreMinimal.h"
#include "RemovedDailyRitualDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRemovedDailyRitualDelegate, const FString&, dailyRitualKey);
