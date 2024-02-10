#pragma once

#include "CoreMinimal.h"
#include "EGameType.h"
#include "OnPlayKillerButtonClicked.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayKillerButtonClicked, EGameType, gameType);
