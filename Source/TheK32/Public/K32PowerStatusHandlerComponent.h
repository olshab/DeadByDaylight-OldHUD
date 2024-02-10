#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "K32SurvivorStatus.h"
#include "FastTimer.h"
#include "K32PowerStatusHandlerComponent.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32PowerStatusHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _lineOfSightTraceSphereSize;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _crossAssimilationRange;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _crossAssimilationDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _affectedByPowerCrossAssimilationBuffer;

	UPROPERTY(EditDefaultsOnly)
	FName _survivorProjectileTargetSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _traceProfile;

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _maxOldSurvivorLocations;

	UPROPERTY(EditDefaultsOnly)
	float _survivorLocationOverlapAvoidanceDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _recentLocationDistanceDelta;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _assimilationCooldownTime;

	UPROPERTY(ReplicatedUsing=OnRep_SurvivorStatusList)
	TArray<FK32SurvivorStatus> _survivorStatusList;

	UPROPERTY(Transient)
	TMap<ACamperPlayer*, FFastTimer> _assimilationCooldownTimers;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _survivorTagsToPreventPositionStorage;

private:
	UFUNCTION()
	void OnRep_SurvivorStatusList(TArray<FK32SurvivorStatus> oldSurvivorStatus);

	UFUNCTION()
	void OnIntroCompleted();

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SurvivorScream(ACamperPlayer* survivor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnInRangeOfAssimilationSpreadingSurvivor(const ACamperPlayer* originatingSurvivor, const ACamperPlayer* targetSurvivor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnAssimilationSpreadingToSurvivor(const ACamperPlayer* originatingSurvivor, const ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInRangeOfAssimilationSpreadingSurvivor(const ACamperPlayer* originatingSurvivor, const ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAssimilationSpreadingToSurvivor(const ACamperPlayer* originatingSurvivor, const ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAssimilationChanged(const ACamperPlayer* survivor, const bool isAssimilated);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_SurvivorScream(ACamperPlayer* survivor);

private:
	UFUNCTION()
	void Authority_OnSurvivorAdded(ACamperPlayer* survivor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK32PowerStatusHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32PowerStatusHandlerComponent) { return 0; }
