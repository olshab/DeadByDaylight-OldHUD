#pragma once

#include "CoreMinimal.h"
#include "EGameType.h"
#include "OnPlayCustomButtonClicked.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayCustomButtonClicked, EGameType, gameType);
