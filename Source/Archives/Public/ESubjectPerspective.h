#pragma once

#include "CoreMinimal.h"
#include "ESubjectPerspective.generated.h"

UENUM(BlueprintType)
enum class ESubjectPerspective : uint8
{
	Me,
	Other,
};
