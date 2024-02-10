#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "AnimationMontageDescriptor.h"
#include "K33UndeployTurretInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33UndeployTurretInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _cancelMontage;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _interruptedMontage;

	UPROPERTY(EditDefaultsOnly)
	float _cancelUndeployDuration;

public:
	UK33UndeployTurretInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33UndeployTurretInteraction) { return 0; }
