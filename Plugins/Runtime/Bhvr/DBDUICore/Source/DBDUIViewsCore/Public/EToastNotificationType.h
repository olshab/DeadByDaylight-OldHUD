#pragma once

#include "CoreMinimal.h"
#include "EToastNotificationType.generated.h"

UENUM(BlueprintType)
enum class EToastNotificationType : uint8
{
	Simple,
	Interactable,
};
