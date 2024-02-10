#pragma once

#include "CoreMinimal.h"
#include "EInstigatorTargetDistanceComparator.generated.h"

UENUM(BlueprintType)
enum class EInstigatorTargetDistanceComparator : uint8
{
	LessOrEqual,
	GreaterOrEqual,
};
