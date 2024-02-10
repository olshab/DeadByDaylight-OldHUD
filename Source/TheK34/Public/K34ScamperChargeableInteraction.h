#pragma once

#include "CoreMinimal.h"
#include "EScamperPhase.h"
#include "ChargeableInteractionDefinition.h"
#include "K34ScamperMovementSpeedSetting.h"
#include "DBDTunableRowHandle.h"
#include "K34ScamperChargeableInteraction.generated.h"

class UInteractionDefinition;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK34ScamperChargeableInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_CurrentPhase, Transient)
	EScamperPhase _currentPhase;

	UPROPERTY(EditDefaultsOnly)
	TMap<EScamperPhase, FK34ScamperMovementSpeedSetting> _scamperMovementSpeedSettings;

	UPROPERTY(EditDefaultsOnly)
	float _chainVaultDetectionRange;

	UPROPERTY(EditDefaultsOnly)
	float _serverChainVaultDetectionRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chainingHeldInputBuffer;

	UPROPERTY(EditDefaultsOnly)
	float _chainVaultSweepRadius;

	UPROPERTY(EditDefaultsOnly)
	float _cameraTransitionToThirdPersonViewDuration;

private:
	UFUNCTION(Server, Reliable)
	void Server_ActivateChaining(UInteractionDefinition* chainInteraction);

	UFUNCTION()
	void OnRep_CurrentPhase();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_EndChargingPhase();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_BeginChargingPhase();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK34ScamperChargeableInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK34ScamperChargeableInteraction) { return 0; }
