#pragma once

#include "CoreMinimal.h"
#include "EEventSubject.generated.h"

UENUM(BlueprintType)
enum class EEventSubject : uint8
{
	Instigator,
	Target,
	Any,
	None,
};
