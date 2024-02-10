#pragma once

#include "CoreMinimal.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "BaseCamperCollectable.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "K32Emp.generated.h"

class ADBDPlayer;
class UStatusEffect;
class ACamperPlayer;
class UChargeableComponent;
class AK32KillerPod;
class UK32EmpInteraction;

UCLASS()
class THEK32_API AK32Emp : public ABaseCamperCollectable, public IPoolableActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _customStrafingOffset;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _strafingOffsetMultiplier;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UK32EmpInteraction* _empInteraction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _empInteractionChargeable;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _empInteractionSecondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _empRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _empAmmoCount;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealToSurvivorStatusEffectClass;

	UPROPERTY()
	TArray<ACamperPlayer*> _authority_assimilatedSurvivorsInRange;

	UPROPERTY()
	TArray<AK32KillerPod*> _authority_podsInRange;

	UPROPERTY(ReplicatedUsing=OnRep_NumTargetsInRange)
	int32 _numTargetsInRange;

	UPROPERTY(ReplicatedUsing=OnRep_IsVisible)
	bool _isVisible;

	UPROPERTY(ReplicatedUsing=OnRep_IsAcquiredFromPool)
	bool _isAcquiredFromPool;

	UPROPERTY(Export)
	TMap<ADBDPlayer*, UStatusEffect*> _revealToSurvivorStatusEffects;

	UPROPERTY(Transient)
	ADBDPlayer* _previousCollector;

private:
	UFUNCTION()
	void SetComponentContextProviders();

	UFUNCTION()
	void OnRep_NumTargetsInRange();

	UFUNCTION()
	void OnRep_IsVisible(bool previousIsVisible);

	UFUNCTION()
	void OnRep_IsAcquiredFromPool();

	UFUNCTION()
	void OnEmpInteractionFinished(ADBDPlayer* interactingPlayer, bool hasInteractionStarted);

	UFUNCTION()
	void OnEmpInteractionEntered(ADBDPlayer* interactingPlayer);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_UseEmp(const int32 numAffectedTargets, ADBDPlayer* interactingPlayer);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVisibilityChanged(bool previousIsVisible, bool isVisible);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPickedUp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNumTargetsInRangeChanged(int32 numberOfAffectedTargets);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEmpInteractionStarted();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEmpInteractionFinished(int32 numberOfAffectedTargets, ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEmpInteractionCancelled();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDropped();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK32Emp();
};

FORCEINLINE uint32 GetTypeHash(const AK32Emp) { return 0; }
