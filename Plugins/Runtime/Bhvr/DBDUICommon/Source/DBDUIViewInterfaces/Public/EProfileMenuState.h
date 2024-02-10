#pragma once

#include "CoreMinimal.h"
#include "EProfileMenuState.generated.h"

UENUM(BlueprintType)
enum class EProfileMenuState : uint8
{
	Stats,
	Badge,
	Banner,
};
