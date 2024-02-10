#pragma once

#include "CoreMinimal.h"
#include "EStoreMenuState.generated.h"

UENUM(BlueprintType)
enum class EStoreMenuState : uint8
{
	Featured,
	Specials,
	Collections,
	SpecialPacks,
	Killers,
	Survivors,
};
