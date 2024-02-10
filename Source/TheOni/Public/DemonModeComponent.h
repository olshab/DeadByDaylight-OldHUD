#pragma once

#include "CoreMinimal.h"
#include "DemonModeChargeGainedAfterAttackDelegate.h"
#include "DemonModeEndedDelegate.h"
#include "Components/ActorComponent.h"
#include "DemonModeReadyDelegate.h"
#include "DemonModeStartedDelegate.h"
#include "DemonModeChargeGainedAfterLockerGrabDelegate.h"
#include "DemonModeInterruptedDuringStartupDelegate.h"
#include "DemonModeInterruptedDuringEndingDelegate.h"
#include "EDemonModeState.h"
#include "AnimationMontageDescriptor.h"
#include "DemonModeComponent.generated.h"

class UPowerChargeComponent;
class UPowerToggleComponent;
class UInteractionStarterComponent;
class UParticleSystemComponent;
class UInteractionDefinition;
class USkeletalMeshComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEONI_API UDemonModeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FDemonModeReadyDelegate OnDemonModeReady;

	UPROPERTY(BlueprintAssignable)
	FDemonModeStartedDelegate OnDemonModeStarted;

	UPROPERTY(BlueprintAssignable)
	FDemonModeEndedDelegate OnDemonModeEnded;

	UPROPERTY(BlueprintAssignable)
	FDemonModeInterruptedDuringStartupDelegate OnDemonModeInterruptedDuringStartup;

	UPROPERTY(BlueprintAssignable)
	FDemonModeInterruptedDuringEndingDelegate OnDemonModeInterruptedDuringEnding;

	UPROPERTY(BlueprintAssignable)
	FDemonModeChargeGainedAfterAttackDelegate OnChargeGainedAfterAttackCosmetic;

	UPROPERTY(BlueprintAssignable)
	FDemonModeChargeGainedAfterLockerGrabDelegate OnChargeGainedAfterLockerGrabCosmetic;

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _powerChargeComponent;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerToggleComponent* _powerToggleComponent;

	UPROPERTY(Transient, Export)
	UInteractionStarterComponent* _authority_demonModeCooldownStarterComponent;

	UPROPERTY(Transient, Export)
	UInteractionDefinition* _demonModeCooldownInteraction;

	UPROPERTY(Replicated, Transient)
	EDemonModeState _demonModeState;

	UPROPERTY(Transient, Export)
	TArray<USkeletalMeshComponent*> _normalModeCustomization;

	UPROPERTY(Transient, Export)
	TArray<USkeletalMeshComponent*> _demonModeCustomization;

	UPROPERTY(Transient, Export)
	TArray<UParticleSystemComponent*> _demonModeVfx;

public:
	UFUNCTION(BlueprintCallable)
	void ShowDemonModeCustomization(bool showDemonMode);

	UFUNCTION(BlueprintPure)
	bool ShouldLoseDemonModeOnStun() const;

private:
	UFUNCTION()
	void OnPowerChargeFull() const;

	UFUNCTION()
	void OnPowerChargeEmpty() const;

	UFUNCTION()
	void OnIsPowerChanged(const bool isInPower) const;

	UFUNCTION()
	void OnCustomizationChanged();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DemonModeInterruptedOnStartup();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DemonModeInterruptedOnEnding();

public:
	UFUNCTION(BlueprintPure)
	bool IsInDemonMode() const;

	UFUNCTION(BlueprintPure)
	TArray<USkeletalMeshComponent*> GetNormalModeCustomization() const;

	UFUNCTION(BlueprintPure)
	EDemonModeState GetDemonModeState() const;

	UFUNCTION(BlueprintPure)
	TArray<USkeletalMeshComponent*> GetDemonModeCustomization() const;

	UFUNCTION(BlueprintPure)
	float GetCurrentCharge() const;

	UFUNCTION(BlueprintPure)
	float GetChargePercent() const;

	UFUNCTION(Exec)
	void DBD_DemonModeForever(const bool forever);

	UFUNCTION(BlueprintPure)
	bool CanStartDemonMode() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetDemonModeCooldownInteraction(UInteractionDefinition* interaction);

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

	UFUNCTION()
	void Authority_OnChargeChanged(const float currentChargePercent);

	UFUNCTION()
	void Authority_InterruptedMontage(const FAnimationMontageDescriptor montage, bool interrupted);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddCharge(const float chargeAmount);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDemonModeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemonModeComponent) { return 0; }
