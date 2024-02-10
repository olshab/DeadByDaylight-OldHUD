#pragma once

#include "CoreMinimal.h"
#include "EStoreCollectionsMenuState.generated.h"

UENUM(BlueprintType)
enum class EStoreCollectionsMenuState : uint8
{
	Special,
	Featured,
	All,
};
