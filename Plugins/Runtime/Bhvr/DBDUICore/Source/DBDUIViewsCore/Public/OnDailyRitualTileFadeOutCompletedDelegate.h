#pragma once

#include "CoreMinimal.h"
#include "OnDailyRitualTileFadeOutCompletedDelegate.generated.h"

class UDailyRitualTileWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDailyRitualTileFadeOutCompletedDelegate, UDailyRitualTileWidget*, tile);
