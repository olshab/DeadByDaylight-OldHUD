#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "StatProperty.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "ManifestationComponent.generated.h"

class UOnryoVisibilityComponent;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEONRYO_API UManifestationComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _unmanifestedUndetectableStatusEffectClass;

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _lingeringFlickerDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxTrackedTimeSinceManifest;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _manifestInteractionUndetectableLingerTime;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _teleportManifestUndetectableLingeringDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _lingeringUndetectableDurationFromOtherSources;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _scorePercent;

	UPROPERTY(Replicated, Transient, Export)
	UOnryoVisibilityComponent* _onryoVisibilityComponent;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UOnryoVisibilityComponent> _onryoVisibilityComponentClass;

	UPROPERTY(ReplicatedUsing=OnRep_IsManifested, Transient)
	bool _isManifested;

	UPROPERTY(ReplicatedUsing=OnRep_LingeringUndetectableEndTimeStamp, Transient)
	float _lingeringUndetectableEndTimeStamp;

	UPROPERTY(Transient, Export)
	UStatusEffect* _unmanifestStatusEffect;

private:
	UFUNCTION()
	void OnRep_LingeringUndetectableEndTimeStamp();

	UFUNCTION()
	void OnRep_IsManifested();

	UFUNCTION()
	void OnLingeringUndetectableTimerCompleted();

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnManifestationTransitionComplete();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnManifestationChanged(const bool isManifested, const bool isImmediateManifest);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AttemptToPalletStunDemanifestedKiller();

	UFUNCTION()
	void Authority_OnMoriStarted();

	UFUNCTION()
	void Authority_AttemptToPalletStunDemanifestedKiller(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UManifestationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UManifestationComponent) { return 0; }
