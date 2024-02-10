#pragma once

#include "CoreMinimal.h"
#include "EButtonDisableState.generated.h"

UENUM(BlueprintType)
enum class EButtonDisableState : uint8
{
	Default,
	Loading,
	Locked,
};
