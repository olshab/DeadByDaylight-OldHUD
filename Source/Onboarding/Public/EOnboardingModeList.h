#pragma once

#include "CoreMinimal.h"
#include "EOnboardingModeList.generated.h"

UENUM(BlueprintType)
enum class EOnboardingModeList : uint8
{
	DefaultMode,
	MenuForced,
	TutorialForced,
};
