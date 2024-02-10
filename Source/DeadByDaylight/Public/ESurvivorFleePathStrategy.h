#pragma once

#include "CoreMinimal.h"
#include "ESurvivorFleePathStrategy.generated.h"

UENUM(BlueprintType)
enum class ESurvivorFleePathStrategy : uint8
{
	None,
	HideFromLos,
};
