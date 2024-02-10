#pragma once

#include "CoreMinimal.h"
#include "OnDailyRitualTileFadeInCompletedDelegate.generated.h"

class UDailyRitualTileWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDailyRitualTileFadeInCompletedDelegate, UDailyRitualTileWidget*, tile);
