#pragma once

#include "CoreMinimal.h"
#include "EFlagItemType.generated.h"

UENUM(BlueprintType)
enum class EFlagItemType : uint8
{
	Unbreakable,
	Outfit,
	Item,
};
