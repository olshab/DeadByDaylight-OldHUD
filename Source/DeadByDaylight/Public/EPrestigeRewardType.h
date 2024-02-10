#pragma once

#include "CoreMinimal.h"
#include "EPrestigeRewardType.generated.h"

UENUM(BlueprintType)
enum class EPrestigeRewardType : uint8
{
	None,
	Customization,
	Perk,
};
