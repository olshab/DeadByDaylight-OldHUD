#pragma once

#include "CoreMinimal.h"
#include "EPassiveCameraState.generated.h"

UENUM(BlueprintType)
enum class EPassiveCameraState : uint8
{
	Inactive,
	Idle,
	Moving,
	Interaction,
	Hooked,
};
