#pragma once

#include "CoreMinimal.h"
#include "EInteractionOwnerType.generated.h"

UENUM(BlueprintType)
enum class EInteractionOwnerType : uint8
{
	SurvivorsSelfInteractor,
	OwningSurvivorSelfInteractor,
	SurvivorsKillerInteractor,
	SurvivorsHealingInteractor1,
};
