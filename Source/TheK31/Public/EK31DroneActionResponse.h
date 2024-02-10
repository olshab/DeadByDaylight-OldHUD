#pragma once

#include "CoreMinimal.h"
#include "EK31DroneActionResponse.generated.h"

UENUM(BlueprintType)
enum class EK31DroneActionResponse : uint8
{
	AUTHORIZED,
	DENIED,
};
