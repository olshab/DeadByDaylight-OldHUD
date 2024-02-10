#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K31DroneBaseAction.generated.h"

UCLASS(Abstract)
class THEK31_API UK31DroneBaseAction : public UObject
{
	GENERATED_BODY()

public:
	UK31DroneBaseAction();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneBaseAction) { return 0; }
