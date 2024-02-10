#pragma once

#include "CoreMinimal.h"
#include "ELevelBuilderStepState.generated.h"

UENUM(BlueprintType)
enum class ELevelBuilderStepState : uint8
{
	Failed,
	Pending,
	Complete,
	Skipped,
};
