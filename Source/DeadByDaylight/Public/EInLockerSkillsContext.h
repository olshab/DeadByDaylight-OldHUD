#pragma once

#include "CoreMinimal.h"
#include "EInLockerSkillsContext.generated.h"

UENUM(BlueprintType)
enum class EInLockerSkillsContext : uint8
{
	None,
	Goal,
	OutOfTerrorRadius,
};
