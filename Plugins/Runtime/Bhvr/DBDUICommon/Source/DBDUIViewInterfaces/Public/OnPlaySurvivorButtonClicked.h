#pragma once

#include "CoreMinimal.h"
#include "EGameType.h"
#include "OnPlaySurvivorButtonClicked.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlaySurvivorButtonClicked, EGameType, gameType);
