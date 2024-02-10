#pragma once

#include "CoreMinimal.h"
#include "EDisabledItemOption.generated.h"

UENUM(BlueprintType)
enum class EDisabledItemOption : uint8
{
	Available,
	DisabledByGameType,
	KillSwitchedByGameType,
	KillSwitched,
};
