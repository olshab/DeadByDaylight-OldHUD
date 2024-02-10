#pragma once

#include "CoreMinimal.h"
#include "EDangerTraverseState.generated.h"

UENUM(BlueprintType)
enum class EDangerTraverseState : uint8
{
	SAFE,
	WAIT,
	TRAVERSE_CROUCH,
	TRAVERSE_RUN,
	UNDODGEABLE,
};
