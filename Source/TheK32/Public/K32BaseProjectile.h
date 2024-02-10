#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "DBDTunableRowHandle.h"
#include "K32BaseProjectile.generated.h"

UCLASS()
class AK32BaseProjectile : public AActor, public IPoolableActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _speedInMeterPerSecond;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _hitDistance;

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsAcquiredFromPool)
	bool _isAcquiredFromPool;

private:
	UFUNCTION()
	void OnRep_IsAcquiredFromPool(bool oldIsAcquiredFromPool);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnProjectileVisible();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnProjectileHidden();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK32BaseProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AK32BaseProjectile) { return 0; }
