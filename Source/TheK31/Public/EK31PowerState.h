#pragma once

#include "CoreMinimal.h"
#include "EK31PowerState.generated.h"

UENUM(BlueprintType)
enum class EK31PowerState : uint8
{
	Deployment,
	Inspection,
};
