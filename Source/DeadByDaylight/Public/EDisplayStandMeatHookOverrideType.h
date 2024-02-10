#pragma once

#include "CoreMinimal.h"
#include "EDisplayStandMeatHookOverrideType.generated.h"

UENUM(BlueprintType)
enum class EDisplayStandMeatHookOverrideType : uint8
{
	ForCharacter,
	ForEvent,
};
