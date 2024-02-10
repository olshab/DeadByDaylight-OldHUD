#pragma once

#include "CoreMinimal.h"
#include "MotionType.generated.h"

UENUM(BlueprintType)
enum MotionType
{
	Static,
	FreeCamera,
	Pan,
	Tilt,
	Orbital,
	Crab,
	Boom,
};
