#pragma once

#include "CoreMinimal.h"
#include "ClosetHideInteraction.h"
#include "Templates/SubclassOf.h"
#include "ClosetHideEnterInteraction.generated.h"

class ACamperPlayer;
class ADBDPlayer;
class UStatusEffect;
class ALocker;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UClosetHideEnterInteraction : public UClosetHideInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _closetBlindnessStatusEffectClass;

private:
	UPROPERTY(EditDefaultsOnly, NoClear)
	float _ejectionFromLockerDelaySeconds;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void NotifyClosetAnalytics(ACamperPlayer* survivor);

	UFUNCTION()
	void EjectSurvivorFromLocker(ACamperPlayer* survivor, ALocker* locker);

	UFUNCTION(BlueprintImplementableEvent)
	void AdjustActorLocation(ADBDPlayer* player);

public:
	UClosetHideEnterInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UClosetHideEnterInteraction) { return 0; }
