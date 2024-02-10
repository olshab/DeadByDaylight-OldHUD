#pragma once

#include "CoreMinimal.h"
#include "StatProperty.h"
#include "K31DroneState.h"
#include "K31DroneDisabledState.generated.h"

class UTimerObject;

UCLASS()
class THEK31_API UK31DroneDisabledState : public UK31DroneState
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FStatProperty _disabledDuration;

	UPROPERTY(Replicated, Export)
	UTimerObject* _disabledTimer;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31DroneDisabledState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneDisabledState) { return 0; }
