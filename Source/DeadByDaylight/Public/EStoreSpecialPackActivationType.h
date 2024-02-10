#pragma once

#include "CoreMinimal.h"
#include "EStoreSpecialPackActivationType.generated.h"

UENUM(BlueprintType)
enum class EStoreSpecialPackActivationType : uint8
{
	Permanent,
	Timed,
	Segmentation,
};
