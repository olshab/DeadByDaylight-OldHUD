#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "AnimationMontageDescriptor.h"
#include "K33CollectTurretFromControlStationInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK33_API UK33CollectTurretFromControlStationInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _cancelMontage;

public:
	UK33CollectTurretFromControlStationInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33CollectTurretFromControlStationInteraction) { return 0; }
