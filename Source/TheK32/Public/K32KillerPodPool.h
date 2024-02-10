#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "AuthoritativeActorPoolComponent.h"
#include "K32KillerPodPool.generated.h"

class AActor;
class AK32KillerPod;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerPodPool : public UAuthoritativeActorPoolComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _availableAmmo;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lastControlledPodLingerTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _destroyPodDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _initialDestroyPodDelay;

private:
	UPROPERTY(Replicated)
	TWeakObjectPtr<AK32KillerPod> _controlledPod;

private:
	UFUNCTION()
	void OnLingeringLastControlledPodExpired();

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnKillerPodCreated(AActor* actor);

	UFUNCTION()
	void OnKillerPodAcquiredChanged(const bool isAcquired);

	UFUNCTION()
	void Authority_OnDestroyPodDelayTimerDone(ADBDPlayer* launchingSurvivor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK32KillerPodPool();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerPodPool) { return 0; }
