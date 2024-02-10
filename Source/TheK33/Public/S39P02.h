#pragma once

#include "CoreMinimal.h"
#include "SurvivorTrapPerk.h"
#include "GameplayTagContainer.h"
#include "ETrapRemovedReason.h"
#include "Templates/SubclassOf.h"
#include "S39P02.generated.h"

class ADBDPlayer;
class UStatusEffect;
class ATrapChemicalBomb;
class APallet;
class AInteractable;

UCLASS(meta=(BlueprintSpawnableComponent))
class US39P02 : public USurvivorTrapPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _invalidEventTypes;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _slowTime;

	UPROPERTY(EditDefaultsOnly)
	float _slowAmount;

	UPROPERTY(Transient, Export)
	UStatusEffect* _slowEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _slowStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ATrapChemicalBomb> _trapBombClass;

	UPROPERTY(Replicated, Transient)
	ATrapChemicalBomb* _trapChemicalBomb;

private:
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_Cosmetic_OnTrapTriggered(const AInteractable* pallet, const ADBDPlayer* triggerer);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_Cosmetic_OnTrapRemoved(AInteractable* interactable, ETrapRemovedReason removedReason);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_Cosmetic_OnTrapActivated(const APallet* generator);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_Cosmetic_OnSlowEffectEnded(const ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintPure)
	float GetSlowTime() const;

public:
	UFUNCTION(BlueprintPure)
	ATrapChemicalBomb* GetChemicalBombTrap() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TrapTriggered(const AInteractable* pallet, const ADBDPlayer* triggerer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TrapRemoved(AInteractable* interactable, ETrapRemovedReason removedReason);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TrapActivated(const APallet* pallet);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSlowEffectEnded(const ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US39P02();
};

FORCEINLINE uint32 GetTypeHash(const US39P02) { return 0; }
