#pragma once

#include "CoreMinimal.h"
#include "EScreenshotToolTargetSubCategory.generated.h"

UENUM(BlueprintType)
enum class EScreenshotToolTargetSubCategory : uint8
{
	None,
	Id,
	CharacterId,
	OutfitId,
	GenderRole,
	Category,
};
