#pragma once

#include "CoreMinimal.h"
#include "EChargeableInteractionPriority.generated.h"

UENUM(BlueprintType)
enum class EChargeableInteractionPriority : uint8
{
	VE_External,
	VE_Item,
	VE_Self,
	VE_None,
};
