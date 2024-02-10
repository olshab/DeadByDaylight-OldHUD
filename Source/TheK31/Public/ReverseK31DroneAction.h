#pragma once

#include "CoreMinimal.h"
#include "K31DroneBaseAction.h"
#include "ReverseK31DroneAction.generated.h"

UCLASS()
class THEK31_API UReverseK31DroneAction : public UK31DroneBaseAction
{
	GENERATED_BODY()

public:
	UReverseK31DroneAction();
};

FORCEINLINE uint32 GetTypeHash(const UReverseK31DroneAction) { return 0; }
