#pragma once

#include "CoreMinimal.h"
#include "EDailyRitualState.generated.h"

UENUM(BlueprintType)
enum class EDailyRitualState : uint8
{
	Assigned,
	DismissedReplacement,
	ClaimedReplacement,
};
