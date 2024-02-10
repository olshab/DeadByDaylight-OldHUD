#pragma once

#include "CoreMinimal.h"
#include "ECustomizationModifier.generated.h"

UENUM(BlueprintType)
enum class ECustomizationModifier : uint8
{
	None,
	Variant,
	Bloodstained,
	Visceral,
	Count,
};
