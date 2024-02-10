#pragma once

#include "CoreMinimal.h"
#include "EScamperPhase.generated.h"

UENUM(BlueprintType)
enum class EScamperPhase : uint8
{
	Charging,
	Dashing,
	Chaining,
	Completed,
};
