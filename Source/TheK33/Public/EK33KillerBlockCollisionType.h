#pragma once

#include "CoreMinimal.h"
#include "EK33KillerBlockCollisionType.generated.h"

UENUM(BlueprintType)
enum class EK33KillerBlockCollisionType : uint8
{
	AllCollisionsEnabled,
	WorldCollisionsOnly,
	TunnelCollisionsOnly,
};
