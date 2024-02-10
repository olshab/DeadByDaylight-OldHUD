#pragma once

#include "CoreMinimal.h"
#include "K31DroneChangeStateAction.h"
#include "RecallK31DroneAction.generated.h"

UCLASS()
class THEK31_API URecallK31DroneAction : public UK31DroneChangeStateAction
{
	GENERATED_BODY()

public:
	URecallK31DroneAction();
};

FORCEINLINE uint32 GetTypeHash(const URecallK31DroneAction) { return 0; }
