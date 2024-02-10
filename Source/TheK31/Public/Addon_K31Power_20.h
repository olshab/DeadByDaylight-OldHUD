#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "EK31DroneStateID.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "Addon_K31Power_20.generated.h"

class AK31Drone;
class UTerrorRadiusEmitterComponent;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UAddon_K31Power_20 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _terrorRadiusSize;

	UPROPERTY(EditDefaultsOnly)
	float _terrorRadiusDuration;

	UPROPERTY(EditDefaultsOnly)
	TArray<EK31DroneStateID> _allowedDroneStatesForEffectToApply;

	UPROPERTY(ReplicatedUsing=OnRep_TargetDrone, Transient)
	AK31Drone* _targetDrone;

	UPROPERTY(Transient, Export)
	UTerrorRadiusEmitterComponent* _terrorRadius;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _indicatorEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _indicatorEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _undetectableEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _undetectableEffect;

private:
	UFUNCTION()
	void OnRep_TargetDrone();

	UFUNCTION()
	void Authority_OnTerrorRadiusLifetimeTimerDone();

	UFUNCTION()
	void Authority_OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAddon_K31Power_20();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K31Power_20) { return 0; }
