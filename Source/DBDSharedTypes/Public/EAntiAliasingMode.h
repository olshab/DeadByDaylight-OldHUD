#pragma once

#include "CoreMinimal.h"
#include "EAntiAliasingMode.generated.h"

UENUM(BlueprintType)
enum class EAntiAliasingMode : uint8
{
	Off,
	TAA = 2,
	Default = 2,
};
