#pragma once

#include "CoreMinimal.h"
#include "EGameType.h"
#include "OnPlayLimitedTimeEventSurvivorButtonClicked.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayLimitedTimeEventSurvivorButtonClicked, EGameType, gameType, const FName&, eventID);
