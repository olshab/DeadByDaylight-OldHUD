#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugTimedRespawnableTriggerCountdownTimer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API UDebugTimedRespawnableTriggerCountdownTimer : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_CountdownTimeRemaining)
	float _countdownTimeRemaining;

private:
	UFUNCTION()
	void OnRep_CountdownTimeRemaining();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDebugTimedRespawnableTriggerCountdownTimer();
};

FORCEINLINE uint32 GetTypeHash(const UDebugTimedRespawnableTriggerCountdownTimer) { return 0; }
