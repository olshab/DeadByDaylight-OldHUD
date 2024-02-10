#pragma once

#include "CoreMinimal.h"
#include "EK33SpecialModeChargeState.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "NonTunableStat.h"
#include "TagStateBool.h"
#include "K33SpecialModeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK33_API UK33SpecialModeComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsInSpecialMode)
	FTagStateBool _isInSpecialMode;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _specialModeMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _specialModeMaximumChargePercentOnPickUp;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _specialModeMovingInTunnelChargeRate;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _specialModeDechargeRatePerAttackingTurrets;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _terrorRadiusSizeInSpecialMode;

	UPROPERTY(EditDefaultsOnly)
	FNonTunableStat _specialModeNormalChargeRate;

	UPROPERTY(ReplicatedUsing=OnRep_ChargeState)
	EK33SpecialModeChargeState _chargeState;

private:
	UFUNCTION()
	void OnRep_IsInSpecialMode();

	UFUNCTION()
	void OnRep_ChargeState();

	UFUNCTION()
	void OnPowerChargeChanged(const float currentChargePercent);

	UFUNCTION()
	void Authority_OnIntroCompleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33SpecialModeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33SpecialModeComponent) { return 0; }
