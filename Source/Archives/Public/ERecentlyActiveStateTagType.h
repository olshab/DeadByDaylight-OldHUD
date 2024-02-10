#pragma once

#include "CoreMinimal.h"
#include "ERecentlyActiveStateTagType.generated.h"

UENUM(BlueprintType)
enum class ERecentlyActiveStateTagType : uint8
{
	AnyTrue,
	AllTrue,
};
