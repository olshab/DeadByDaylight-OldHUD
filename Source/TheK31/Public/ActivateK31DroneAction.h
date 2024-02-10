#pragma once

#include "CoreMinimal.h"
#include "K31DroneChangeStateAction.h"
#include "ActivateK31DroneAction.generated.h"

UCLASS()
class THEK31_API UActivateK31DroneAction : public UK31DroneChangeStateAction
{
	GENERATED_BODY()

public:
	UActivateK31DroneAction();
};

FORCEINLINE uint32 GetTypeHash(const UActivateK31DroneAction) { return 0; }
