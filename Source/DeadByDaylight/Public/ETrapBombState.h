#pragma once

#include "CoreMinimal.h"
#include "ETrapBombState.generated.h"

UENUM(BlueprintType)
enum class ETrapBombState : uint8
{
	Idle,
	Activating,
	ActivatedLeft,
	ActivatedRight,
};
