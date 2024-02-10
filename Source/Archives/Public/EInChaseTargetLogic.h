#pragma once

#include "CoreMinimal.h"
#include "EInChaseTargetLogic.generated.h"

UENUM(BlueprintType)
enum class EInChaseTargetLogic : uint8
{
	AnyOf,
	AllOf,
	NoneOf,
};
