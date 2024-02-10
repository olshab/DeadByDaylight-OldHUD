#pragma once

#include "CoreMinimal.h"
#include "DBDGenericTeamAgentInterface.h"
#include "GameFramework/Actor.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "OnK32KillerPodDisabled.h"
#include "K32KillerPodSettings.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K32KillerPod.generated.h"

class UStaticMeshComponent;
class UMapActorComponent;
class UK32PodDangerPredictionComponent;
class UAIPerceptionStimuliSourceComponent;
class ASlasherPlayer;
class ADBDPlayer;

UCLASS()
class THEK32_API AK32KillerPod : public AActor, public IPoolableActor, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnK32KillerPodDisabled OnDisabledChanged;

	UPROPERTY(BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, meta=(BindWidgetOptional))
	UStaticMeshComponent* _overlapTestingMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, meta=(BindWidgetOptional))
	UMapActorComponent* _mapActorComponent;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _podDisableTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _addon14Delay;

private:
	UPROPERTY(ReplicatedUsing=OnRep_Settings)
	FK32KillerPodSettings _settings;

	UPROPERTY(ReplicatedUsing=OnRep_IsAcquiredFromPool)
	bool _isAcquiredFromPool;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK32PodDangerPredictionComponent* _dangerPredictionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnVisibilityChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings settings);

private:
	UFUNCTION()
	void OnRep_Settings(FK32KillerPodSettings previousSettings);

	UFUNCTION()
	void OnRep_IsAcquiredFromPool();

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION()
	void OnKillerLocallyObservedChanged(const bool isKillerLocallyObserved);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnPodDisabled();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnDestroyedByRecycle();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnDestroyedByManualRemoval();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnDestroyedByEmp(ADBDPlayer* destroyingSurvivor);

public:
	UFUNCTION(BlueprintPure)
	FK32KillerPodSettings GetSettings() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSettingsChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings settings);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDisabledChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings settings);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDestroyedByRecycle();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDestroyedByManualRemoval();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDestroyedByEmp(ADBDPlayer* destroyingSurvivor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnControlledByKillerChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings settings);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAddon14Started();

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_IsBlockingPodSpawningChanged(const bool isBlocking, const float distanceBetweenPods);

private:
	UFUNCTION()
	void Authority_OnDisabledTimerDone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK32KillerPod();
};

FORCEINLINE uint32 GetTypeHash(const AK32KillerPod) { return 0; }
