#pragma once

#include "CoreMinimal.h"
#include "EPlayerCardAnimationMode.generated.h"

UENUM(BlueprintType)
enum class EPlayerCardAnimationMode : uint8
{
	AlwaysAnimate,
	AnimateOnHover,
	NeverAnimate,
};
