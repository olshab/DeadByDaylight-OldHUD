#pragma once

#include "CoreMinimal.h"
#include "EDailyRitualTileState.generated.h"

UENUM(BlueprintType)
enum class EDailyRitualTileState : uint8
{
	None,
	Dismissed,
	Claimed,
};
