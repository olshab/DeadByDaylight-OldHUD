#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "TunableStat.h"
#include "K32ItemBoxSpeedUpInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32ItemBoxSpeedUpInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _interactionProgressMultiplier;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UK32ItemBoxSpeedUpInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK32ItemBoxSpeedUpInteraction) { return 0; }
