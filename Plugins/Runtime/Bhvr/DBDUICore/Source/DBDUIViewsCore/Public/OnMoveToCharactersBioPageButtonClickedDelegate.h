#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "OnMoveToCharactersBioPageButtonClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMoveToCharactersBioPageButtonClickedDelegate, int32, chracterIndex, EPlayerRole, playerRole);
