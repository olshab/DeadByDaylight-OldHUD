#pragma once

#include "CoreMinimal.h"
#include "EEventObjectiveItemState.generated.h"

UENUM(BlueprintType)
enum class EEventObjectiveItemState : uint8
{
	Inactive,
	Active,
	Usable,
	Cooldown,
	Rewarded,
	Lost,
};
