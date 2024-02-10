#pragma once

#include "CoreMinimal.h"
#include "EItemSorting.generated.h"

UENUM(BlueprintType)
enum class EItemSorting : uint8
{
	ByRarity,
	ByParentOutfitName,
	ByItemName,
};
