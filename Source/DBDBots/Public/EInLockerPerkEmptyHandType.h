#pragma once

#include "CoreMinimal.h"
#include "EInLockerPerkEmptyHandType.generated.h"

UENUM(BlueprintType)
enum class EInLockerPerkEmptyHandType : uint8
{
	None,
	SurvivorItem,
	SpecialItem,
	Both,
};
