#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EK31DroneStateID.h"
#include "K31DroneState.generated.h"

class UK31DroneStateController;

UCLASS(Abstract)
class UK31DroneState : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	EK31DroneStateID _id;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UK31DroneStateController* _stateController;

public:
	UK31DroneState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneState) { return 0; }
