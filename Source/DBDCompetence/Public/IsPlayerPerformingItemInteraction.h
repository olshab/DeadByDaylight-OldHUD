#pragma once

#include "CoreMinimal.h"
#include "EItemDropType.h"
#include "BaseIsPlayerPerformingInteraction.h"
#include "IsPlayerPerformingItemInteraction.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsPlayerPerformingItemInteraction : public UBaseIsPlayerPerformingInteraction
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnCollectablePickedUp(ADBDPlayer* player);

	UFUNCTION()
	void OnCollectableDropped(EItemDropType dropType);

	UFUNCTION()
	void OnCollectableChargeStateChange(bool empty);

public:
	UIsPlayerPerformingItemInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UIsPlayerPerformingItemInteraction) { return 0; }
