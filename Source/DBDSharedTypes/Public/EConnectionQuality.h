#pragma once
#include "CoreMinimal.h"
#include "EConnectionQuality.generated.h"

UENUM(BlueprintType)
enum class EConnectionQuality : uint8 {
    Excellent,
    Good,
    Bad,
    VE_MAX UMETA(Hidden),
};

