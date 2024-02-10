#pragma once

#include "CoreMinimal.h"
#include "EFPSLimit.generated.h"

UENUM(BlueprintType)
enum class EFPSLimit : uint8
{
	Off,
	Limit30 = 30,
	Limit59 = 59,
	Limit60,
	Limit90 = 90,
	Limit120 = 120,
	Default = 60,
};
