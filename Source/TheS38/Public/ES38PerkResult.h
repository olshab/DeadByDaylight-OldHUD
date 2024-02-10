#pragma once

#include "CoreMinimal.h"
#include "ES38PerkResult.generated.h"

UENUM(BlueprintType)
enum class ES38PerkResult : uint8
{
	Exposed,
	Haste,
	Scream,
	NewItem,
};
