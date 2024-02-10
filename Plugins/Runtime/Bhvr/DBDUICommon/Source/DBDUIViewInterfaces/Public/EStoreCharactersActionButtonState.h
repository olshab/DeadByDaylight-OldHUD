#pragma once

#include "CoreMinimal.h"
#include "EStoreCharactersActionButtonState.generated.h"

UENUM(BlueprintType)
enum class EStoreCharactersActionButtonState : uint8
{
	Hidden,
	Disabled,
	Visible,
};
