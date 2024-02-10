#pragma once

#include "CoreMinimal.h"
#include "ETileClassType.generated.h"

UENUM(BlueprintType)
enum class ETileClassType : uint8
{
	None,
	Normal,
	Border,
	Escape,
	Count,
};
