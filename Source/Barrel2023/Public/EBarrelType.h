#pragma once

#include "CoreMinimal.h"
#include "EBarrelType.generated.h"

UENUM(BlueprintType)
enum class EBarrelType : uint8
{
	None,
	RedBarrel,
	BlueBarrel,
	GreenBarrel,
};
