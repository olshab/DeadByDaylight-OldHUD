#pragma once

#include "CoreMinimal.h"
#include "EShadowDepthLODSelection.generated.h"

UENUM(BlueprintType)
enum class EShadowDepthLODSelection : uint8
{
	ViewDependent,
	HighestLOD,
	LowestLOD,
	ShadowView,
	Max,
};
