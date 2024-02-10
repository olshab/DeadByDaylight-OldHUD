#pragma once

#include "CoreMinimal.h"
#include "PlayerScoreEmitter.h"
#include "SurvivorWeakPointScoreDatum.h"
#include "K31WeakPointScoreEmitter.generated.h"

class UChargeableComponent;
class ACamperPlayer;

UCLASS()
class THEK31_API UK31WeakPointScoreEmitter : public UPlayerScoreEmitter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<ACamperPlayer*, FSurvivorWeakPointScoreDatum> _registeredSurvivors;

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

	UFUNCTION()
	void Authority_OnDechargeEnd(UChargeableComponent* chargeableComponent);

	UFUNCTION()
	void Authority_OnDechargeBegin(UChargeableComponent* chargeableComponent);

public:
	UK31WeakPointScoreEmitter();
};

FORCEINLINE uint32 GetTypeHash(const UK31WeakPointScoreEmitter) { return 0; }
