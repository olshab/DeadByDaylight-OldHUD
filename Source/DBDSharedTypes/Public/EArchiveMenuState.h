#pragma once

#include "CoreMinimal.h"
#include "EArchiveMenuState.generated.h"

UENUM(BlueprintType)
enum class EArchiveMenuState : uint8
{
	None,
	CurrentTome,
	EventTome,
	PastTome,
	Rift,
	Compendium,
};
