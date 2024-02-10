#pragma once

#include "CoreMinimal.h"
#include "EDialogConditionSubject.generated.h"

UENUM(BlueprintType)
enum class EDialogConditionSubject : uint8
{
	Instigator,
	Target,
	NoCondition,
};
