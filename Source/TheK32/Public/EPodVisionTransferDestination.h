#pragma once

#include "CoreMinimal.h"
#include "EPodVisionTransferDestination.generated.h"

UENUM(BlueprintType)
enum class EPodVisionTransferDestination : uint8
{
	Previous,
	Target,
};
