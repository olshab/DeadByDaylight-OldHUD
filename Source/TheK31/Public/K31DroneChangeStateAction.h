#pragma once

#include "CoreMinimal.h"
#include "K31DroneBaseAction.h"
#include "K31DroneChangeStateAction.generated.h"

UCLASS(Abstract)
class THEK31_API UK31DroneChangeStateAction : public UK31DroneBaseAction
{
	GENERATED_BODY()

public:
	UK31DroneChangeStateAction();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneChangeStateAction) { return 0; }
