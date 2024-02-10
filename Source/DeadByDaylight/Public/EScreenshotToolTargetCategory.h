#pragma once

#include "CoreMinimal.h"
#include "EScreenshotToolTargetCategory.generated.h"

UENUM(BlueprintType)
enum class EScreenshotToolTargetCategory : uint8
{
	None,
	Piece,
	TwoPieces,
	Outfit,
	Charm,
};
