#pragma once

#include "CoreMinimal.h"
#include "EStoreCollectionsLoadResult.generated.h"

UENUM(BlueprintType)
enum class EStoreCollectionsLoadResult : uint8
{
	Loaded,
	Cached,
	Error,
};
