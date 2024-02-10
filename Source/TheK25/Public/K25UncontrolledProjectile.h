#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "ECamperDamageState.h"
#include "OnAcquiredChanged.h"
#include "K25Projectile.h"
#include "PoolableActor.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "K25UncontrolledProjectile.generated.h"

class ACamperPlayer;

UCLASS()
class AK25UncontrolledProjectile : public AK25Projectile, public IPoolableActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _minimumTimeBeforeProjectileLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _maximumTimeBeforeProjectileLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _projectileSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _projectileMaximumTravelDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maximumInactiveProjectileTime;

private:
	UPROPERTY(Transient)
	bool _isAcquiredFromPool;

	UPROPERTY(ReplicatedUsing=OnRep_TargetSurvivor)
	ACamperPlayer* _targetSurvivor;

private:
	UFUNCTION()
	void OnRep_TargetSurvivor();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerUncontrolledProjectileSpawnSFX();

private:
	UFUNCTION()
	void Authority_OnDownedSurvivorPickedUp(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25UncontrolledProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AK25UncontrolledProjectile) { return 0; }
