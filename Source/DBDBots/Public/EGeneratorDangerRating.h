#pragma once

#include "CoreMinimal.h"
#include "EGeneratorDangerRating.generated.h"

UENUM(BlueprintType)
enum class EGeneratorDangerRating : uint8
{
	Safe,
	Neutral,
	Dangerous,
};
