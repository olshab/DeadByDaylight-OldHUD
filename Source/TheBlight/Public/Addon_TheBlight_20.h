#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "DBDTunableRowHandle.h"
#include "Addon_TheBlight_20.generated.h"

class UTimerObject;
class UBlightPowerStateComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_20 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_PowerCooldownTimer, Transient, Export)
	UTimerObject* _powerCooldownTimer;

	UPROPERTY(ReplicatedUsing=OnRep_BlightPowerStateComponent, Transient, Export)
	UBlightPowerStateComponent* _blightPowerStateComponent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _cooldownTimeAfterHit;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxConsecutiveBounce;

private:
	UFUNCTION()
	void OnRep_PowerCooldownTimer();

	UFUNCTION()
	void OnRep_BlightPowerStateComponent();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAddon_TheBlight_20();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_20) { return 0; }
