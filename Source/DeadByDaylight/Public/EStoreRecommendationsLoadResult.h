#pragma once

#include "CoreMinimal.h"
#include "EStoreRecommendationsLoadResult.generated.h"

UENUM(BlueprintType)
enum class EStoreRecommendationsLoadResult : uint8
{
	Loaded,
	Cached,
	Error,
};
