#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "EWallGrabState.h"
#include "BlightPower.generated.h"

class UPowerChargeComponent;
class UChargeableComponent;
class UBlightPowerStateComponent;
class UPowerToggleComponent;
class UTimerObject;
class UStatusEffect;

UCLASS()
class ABlightPower : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UPowerChargeComponent* _blightPowerCharge;

	UPROPERTY(Export)
	UPowerToggleComponent* _blightPowerToggle;

	UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _blightPowerActivateChargeable;

	UPROPERTY(Transient, Export)
	UBlightPowerStateComponent* _blightPowerStateComponent;

	UPROPERTY(ReplicatedUsing=OnRep_OverridenTimer, Export)
	TWeakObjectPtr<UTimerObject> _unlimitedDashesCooldownTimer;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _blightPowerActivateMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _blightPowerMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _blightPowerRechargeRate;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _inPowerEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _outOfPowerEffect;

private:
	UFUNCTION()
	void OnRep_OverridenTimer() const;

	UFUNCTION()
	void OnPowerStateChanged(const EWallGrabState previousState, const EWallGrabState newState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABlightPower();
};

FORCEINLINE uint32 GetTypeHash(const ABlightPower) { return 0; }
