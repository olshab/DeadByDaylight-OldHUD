#pragma once

#include "CoreMinimal.h"
#include "EndSessionAction.generated.h"

UENUM(BlueprintType)
enum class EndSessionAction : uint8
{
	Restart,
	Shutdown,
};
