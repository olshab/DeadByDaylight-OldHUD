#pragma once

#include "CoreMinimal.h"
#include "EAntiCampSelfUnhookMeterState.generated.h"

UENUM(BlueprintType)
enum class EAntiCampSelfUnhookMeterState : uint8
{
	Hidden,
	FillingUp,
	Stopped,
	Full,
};
