#pragma once

#include "CoreMinimal.h"
#include "EDirectionalInputKey.generated.h"

UENUM(BlueprintType)
enum class EDirectionalInputKey : uint8
{
	VE_INVALID,
	VE_UP,
	VE_DOWN,
	VE_RIGHT,
	VE_LEFT,
};
