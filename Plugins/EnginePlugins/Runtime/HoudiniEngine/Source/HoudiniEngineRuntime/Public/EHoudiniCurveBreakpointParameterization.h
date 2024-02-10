#pragma once

#include "CoreMinimal.h"
#include "EHoudiniCurveBreakpointParameterization.generated.h"

UENUM()
enum class EHoudiniCurveBreakpointParameterization : int64
{
	Invalid = -1,
	Uniform,
	Chord,
	Centripetal,
};
