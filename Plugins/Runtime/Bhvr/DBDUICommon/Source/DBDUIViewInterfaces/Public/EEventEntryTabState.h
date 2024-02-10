#pragma once

#include "CoreMinimal.h"
#include "EEventEntryTabState.generated.h"

UENUM(BlueprintType)
enum class EEventEntryTabState : uint8
{
	Event,
	Details,
	Collection,
	Store,
};
