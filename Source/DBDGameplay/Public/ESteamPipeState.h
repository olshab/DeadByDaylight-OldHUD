#pragma once

#include "CoreMinimal.h"
#include "ESteamPipeState.generated.h"

UENUM(BlueprintType)
enum class ESteamPipeState : uint8
{
	Ready,
	Charged,
	Warning,
	Activated,
	Disabled,
};
