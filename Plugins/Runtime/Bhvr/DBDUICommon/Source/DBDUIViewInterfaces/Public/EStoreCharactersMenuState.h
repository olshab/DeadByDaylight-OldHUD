#pragma once

#include "CoreMinimal.h"
#include "EStoreCharactersMenuState.generated.h"

UENUM(BlueprintType)
enum class EStoreCharactersMenuState : uint8
{
	Selection,
	Customizations,
	Bio,
};
