#pragma once

#include "CoreMinimal.h"
#include "EGameType.h"
#include "OnPlayLimitedTimeEventKillerButtonClicked.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayLimitedTimeEventKillerButtonClicked, EGameType, gameType, const FName&, eventID);
