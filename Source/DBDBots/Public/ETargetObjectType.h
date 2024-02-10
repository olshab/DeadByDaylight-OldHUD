#pragma once

#include "CoreMinimal.h"
#include "ETargetObjectType.generated.h"

UENUM(BlueprintType)
enum class ETargetObjectType : uint8
{
	None,
	Survivor,
	Generator,
	Hook = 4,
	SurvivorOrGenerator = 3,
	Max = 8,
};
