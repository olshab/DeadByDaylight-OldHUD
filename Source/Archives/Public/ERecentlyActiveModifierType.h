#pragma once

#include "CoreMinimal.h"
#include "ERecentlyActiveModifierType.generated.h"

UENUM(BlueprintType)
enum class ERecentlyActiveModifierType : uint8
{
	AnyTrue,
	AllTrue,
};
