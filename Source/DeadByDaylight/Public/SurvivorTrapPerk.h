#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "ETrapType.h"
#include "GameplayTagContainer.h"
#include "SurvivorTrapPerk.generated.h"

class AInteractable;
class UPerkTrappableComponent;
class UTrapInstallerComponent;
class ACamperPlayer;
class AActor;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorTrapPerk : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	ETrapType _trapType;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AInteractable> _trappableInteractableType;

	UPROPERTY(EditDefaultsOnly)
	float _progressPercentRequirementLevels;

	UPROPERTY(EditDefaultsOnly)
	float _trapDurationLevels;

	UPROPERTY(ReplicatedUsing=OnRep_TrappedInteractable, Transient)
	AInteractable* _trappedInteractable;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UTrapInstallerComponent> _trapInstallerComponentClass;

	UPROPERTY(Replicated)
	float _progressPercent;

	UPROPERTY(Replicated)
	bool _isTrapReady;

private:
	UFUNCTION()
	void OnRep_TrappedInteractable(AInteractable* oldInteractable);

public:
	UFUNCTION(BlueprintPure)
	float GetTrapDuration() const;

	UFUNCTION(BlueprintPure)
	float GetRequiredRepairProgressForSettingTrap() const;

	UFUNCTION(BlueprintPure)
	float GetRepairProgressPercent() const;

	UFUNCTION(BlueprintPure)
	UPerkTrappableComponent* GetPerkTrappableComponent(AInteractable* interactable) const;

private:
	UFUNCTION()
	void Authority_OnTrapTimerDone();

	UFUNCTION()
	void Authority_OnTrapInteractionEvent(const FGameplayTag gameEvent, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnSurvivorRemoved(ACamperPlayer* survivor);

	UFUNCTION()
	void Authority_OnRepairProgress(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

protected:
	UFUNCTION()
	void Authority_OnKillerInteracted(const FGameplayTag gameEventTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorTrapPerk();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorTrapPerk) { return 0; }
