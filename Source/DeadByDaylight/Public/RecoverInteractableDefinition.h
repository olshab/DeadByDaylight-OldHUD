#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "RecoverInteractableDefinition.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API URecoverInteractableDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _recoverStopPercentTunableName;

	UPROPERTY(EditDefaultsOnly)
	FName _camperRecoverHealSpeedMultiplierTunableName;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	bool IsKillerInteracting() const;

public:
	URecoverInteractableDefinition();
};

FORCEINLINE uint32 GetTypeHash(const URecoverInteractableDefinition) { return 0; }
