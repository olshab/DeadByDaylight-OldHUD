#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "TagStateBool.h"
#include "Templates/SubclassOf.h"
#include "K33TurretDamageComponent.generated.h"

class UCurveFloat;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33TurretDamageComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_CurrentDamageAmount)
	float _currentDamageAmount;

	UPROPERTY(ReplicatedUsing=OnRep_IsAttackedByTurret)
	FTagStateBool _isAttackedByTurret;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _stunnedAfterFullyDamagedEffect;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _stunnedAfterFullyDamagedDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _maxDamageAmount;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _damageReductionRate;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _damageRatePerTurretCurveFloat;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _damageReductionDelayDuration;

private:
	UFUNCTION()
	void OnRep_IsAttackedByTurret();

	UFUNCTION()
	void OnRep_CurrentDamageAmount();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ReceivedMaxDamage();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33TurretDamageComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretDamageComponent) { return 0; }
