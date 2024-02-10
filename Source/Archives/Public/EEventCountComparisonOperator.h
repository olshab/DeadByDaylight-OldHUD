#pragma once

#include "CoreMinimal.h"
#include "EEventCountComparisonOperator.generated.h"

UENUM(BlueprintType)
enum class EEventCountComparisonOperator : uint8
{
	EqualTo,
	GreaterThan,
	GreaterThanEqualTo,
	LessThan,
	LessThanEqualTo,
};
