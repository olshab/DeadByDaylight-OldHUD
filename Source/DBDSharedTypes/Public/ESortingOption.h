#pragma once

#include "CoreMinimal.h"
#include "ESortingOption.generated.h"

UENUM(BlueprintType)
enum class ESortingOption : uint8
{
	None,
	ByRarity,
	ByDate,
	ByName = 4,
	ByOwnership = 8,
	ByPrice = 16,
};
