#pragma once

#include "CoreMinimal.h"
#include "InjuredBleedoutKODelegate.h"
#include "OnDamageStateChanged.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "OnHealedEvent.h"
#include "InjuredBleedoutDelegate.h"
#include "DBDTimer.h"
#include "ECamperDamageState.h"
#include "TagStateBool.h"
#include "Templates/SubclassOf.h"
#include "CamperHealResult.h"
#include "EImmobilizedState.h"
#include "EHealthType.h"
#include "CamperHealthComponent.generated.h"

class UInteractionDefinition;
class ADBDPlayer;
class ACharacter;
class ACamperPlayer;
class UChargeableComponent;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDamageStateChangedCosmetic);

public:
	UPROPERTY(BlueprintAssignable)
	FOnHealedEvent OnHealedDelegate;

	UPROPERTY(BlueprintAssignable)
	FInjuredBleedoutDelegate OnInjuredBleedoutStarted;

	UPROPERTY(BlueprintAssignable)
	FInjuredBleedoutDelegate OnInjuredBleedoutEnded;

	UPROPERTY(BlueprintAssignable)
	FInjuredBleedoutKODelegate OnInjuredBleedoutKO;

	UPROPERTY(BlueprintAssignable)
	FOnDamageStateChanged OnDamageStateChanged;

	UPROPERTY(BlueprintAssignable)
	FOnDamageStateChangedCosmetic OnDamageStateChangedCosmetic;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _bleedoutBaseDuration;

	UPROPERTY(ReplicatedUsing=OnRep_InInjuredBleedOut, Transient)
	FTagStateBool _inInjuredBleedOut;

	UPROPERTY(Replicated, Transient)
	FDBDTimer _bleedOutTimer;

	UPROPERTY(Transient)
	bool _canBleedout;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UInteractionDefinition>> _pauseInjuredBleedoutTimerInteractions;

	UPROPERTY(Transient)
	int32 _currentHealthStateCount;

	UPROPERTY(Replicated, Transient)
	int32 _numHealthyHeals;

	UPROPERTY(Replicated, Transient)
	FDBDTimer _dyingTimer;

	UPROPERTY(Export)
	UChargeableComponent* _healFromDyingChargeable;

	UPROPERTY(Export)
	UChargeableComponent* _healFromInjuredChargeable;

	UPROPERTY(Export)
	UChargeableComponent* _mendChargeable;

	UPROPERTY(Transient)
	ADBDPlayer* _injuredBleedoutInstigator;

public:
	UFUNCTION(BlueprintCallable)
	void SetCanBleedout(bool canBleedout);

private:
	UFUNCTION()
	void OnRep_InInjuredBleedOut();

	UFUNCTION()
	void OnImmobilizedStateChanged(const EImmobilizedState oldImmobilizeState, const EImmobilizedState newImmobilizeState);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetHealthType(EHealthType healthType);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetHealthStateFromDamageState(ECamperDamageState damageState, bool fireScoreEvent);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetDamageState(ECamperDamageState damageState, bool fireScoreEvent, bool sacrificed);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetCurrentHealthStateCount(int32 newHealth, bool fireScoreEvent);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSurvivorGainedHealthStateByOthersEvents(const bool healedFromKO, ADBDPlayer* healedSurvivor, const TArray<ADBDPlayer*>& healers, const TArray<bool>& healedSurvivorFarEnoughAway);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnInjuredBleedoutKO(ADBDPlayer* injuredBleedoutInstigator);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnHealed(const FCamperHealResult& healResult);

	UFUNCTION(BlueprintPure)
	bool IsKO() const;

	UFUNCTION(BlueprintPure)
	bool IsInjuredBleedoutTimerExpired() const;

	UFUNCTION(BlueprintPure)
	bool IsInjured() const;

	UFUNCTION(BlueprintPure)
	bool IsInInjuredBleedout() const;

	UFUNCTION(BlueprintPure)
	bool IsHealthy() const;

	UFUNCTION(BlueprintPure)
	bool IsDyingTimerExpired() const;

	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	UFUNCTION(BlueprintCallable)
	void IncreaseHPSlotSize(float percent);

	UFUNCTION(BlueprintPure)
	float GetPercentInjuredBleedoutTimer() const;

	UFUNCTION(BlueprintPure)
	float GetPercentDyingTimer() const;

	UFUNCTION(BlueprintPure)
	ECamperDamageState GetDamageState() const;

	UFUNCTION(BlueprintPure)
	float GetCurrentTotalHealthBarPercent() const;

	UFUNCTION(BlueprintPure)
	UChargeableComponent* GetCurrentHPSlot();

	UFUNCTION(BlueprintPure)
	bool CanHealSelf() const;

	UFUNCTION(BlueprintPure)
	bool CanBeHealedFromInjured() const;

	UFUNCTION(BlueprintPure)
	bool CanBeHealed() const;

	UFUNCTION(BlueprintPure)
	bool CanBecomeHealthy() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetDamageState(ECamperDamageState damageState, bool fireScoreEvent, bool sacrificed);

private:
	UFUNCTION()
	void Authority_OnSurvivorRemoved(ACamperPlayer* survivor);

protected:
	UFUNCTION()
	void Authority_OnMendChargeCompletionStateChanged(bool complete, const TArray<AActor*>& instigators);

public:
	UFUNCTION()
	void Authority_OnHealthBarCharged(bool complete, const TArray<AActor*>& instigators);

protected:
	UFUNCTION()
	void Authority_MendTryGrantScoresOnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

	UFUNCTION()
	void Authority_HealTryGrantScoresOnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_EndInjuredBleedout();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ApplyDoubleDamage(AActor* damageSource, ACharacter* damagePlayerOwner);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ApplyDeepWound(AActor* damageSource, ACharacter* damagePlayerOwner);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ApplyDamage(AActor* damageSource, ACharacter* damagePlayerOwner);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCamperHealthComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperHealthComponent) { return 0; }
