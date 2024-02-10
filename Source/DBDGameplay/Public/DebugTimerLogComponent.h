#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpeedBasedNetSyncedValue.h"
#include "DebugTimerLogComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UDebugTimerLogComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	FString _timerDisplayName;

	UPROPERTY(ReplicatedUsing=OnRep_TimerCountdown)
	FSpeedBasedNetSyncedValue _timerCountdown;

	UPROPERTY(Replicated)
	float _timerRemainingPercent;

private:
	UFUNCTION()
	void OnRep_TimerCountdown();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDebugTimerLogComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDebugTimerLogComponent) { return 0; }
