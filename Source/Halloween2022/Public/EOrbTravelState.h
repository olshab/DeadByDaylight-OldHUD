#pragma once

#include "CoreMinimal.h"
#include "EOrbTravelState.generated.h"

UENUM(BlueprintType)
enum class EOrbTravelState : uint8
{
	None,
	MoveToHover,
	WaitInHover,
	MoveToFinalDestination,
};
