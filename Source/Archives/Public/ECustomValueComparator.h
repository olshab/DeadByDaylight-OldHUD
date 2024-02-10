#pragma once

#include "CoreMinimal.h"
#include "ECustomValueComparator.generated.h"

UENUM(BlueprintType)
enum class ECustomValueComparator : uint8
{
	Equal,
	LessOrEqual,
	GreaterOrEqual,
};
