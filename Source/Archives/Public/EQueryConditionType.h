#pragma once

#include "CoreMinimal.h"
#include "EQueryConditionType.generated.h"

UENUM(BlueprintType)
enum class EQueryConditionType : uint8
{
	AllTrue,
	AnyTrue,
};
