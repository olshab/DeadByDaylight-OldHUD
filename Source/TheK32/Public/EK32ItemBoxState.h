#pragma once

#include "CoreMinimal.h"
#include "EK32ItemBoxState.generated.h"

UENUM(BlueprintType)
enum class EK32ItemBoxState : uint8
{
	Available,
	InProgress,
	Inactive,
};
