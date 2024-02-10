#pragma once

#include "CoreMinimal.h"
#include "EFlexibleTunableType.generated.h"

UENUM(BlueprintType)
enum class EFlexibleTunableType : uint8
{
	BooleanTunable,
	FloatTunable,
	IntTunable,
	StringTunable,
	StringArrayTunable,
};
