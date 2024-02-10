#pragma once

#include "CoreMinimal.h"
#include "EDirectionalMinigameResult.generated.h"

UENUM(BlueprintType)
enum class EDirectionalMinigameResult : uint8
{
	VE_SUCCESS,
	VE_FAILED,
	VE_CANCELLED,
};
