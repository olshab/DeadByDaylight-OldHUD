#pragma once

#include "CoreMinimal.h"
#include "EItemDropType.generated.h"

UENUM(BlueprintType)
enum class EItemDropType : uint8
{
	DropManually,
	DropForcefully,
	UseItem,
};
