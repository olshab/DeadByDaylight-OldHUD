#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FranklinsDemise.generated.h"

class ACamperPlayer;
class ACollectable;

UCLASS(meta=(BlueprintSpawnableComponent))
class UFranklinsDemise : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _timeBeforeItemIsConsumed;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DroppedEvent(ACamperPlayer* hitPlayer, ACollectable* itemToDrop);

public:
	UFUNCTION(BlueprintPure)
	float GetTimeBeforeItemIsConsumedAtLevel() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void BP_OnPlayerHitCosmetic(ACamperPlayer* hitPlayer, ACollectable* itemToDrop);

public:
	UFranklinsDemise();
};

FORCEINLINE uint32 GetTypeHash(const UFranklinsDemise) { return 0; }
