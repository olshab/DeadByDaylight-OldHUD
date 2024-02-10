#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S38P02.generated.h"

class UStatusEffect;
class UGameplayModifierContainer;

UCLASS(meta=(BlueprintSpawnableComponent))
class US38P02 : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _percentChanceOfDoubleScream;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _perkStatusEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _perkStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _auraStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _auraDuration;

	UPROPERTY(EditDefaultsOnly)
	float _extraAuraDurationPerExtraScream;

	UPROPERTY(EditDefaultsOnly)
	float _screamDuration;

	UPROPERTY(EditDefaultsOnly)
	float _minRandomScreamDelay;

	UPROPERTY(EditDefaultsOnly)
	float _maxRandomScreamDelay;

	UPROPERTY(EditDefaultsOnly)
	int32 _maxScreamCount;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	float _preventInteractionDuration;

private:
	UFUNCTION()
	void OnSurvivorScream();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_MakeSurvivorScream(const int32 timesToScream);

public:
	UFUNCTION(BlueprintPure)
	float GetScreamDuration() const;

	UFUNCTION(BlueprintPure)
	float GetMinRandomScreamDelay() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaxScreamCount() const;

	UFUNCTION(BlueprintPure)
	float GetMaxRandomScreamDelay() const;

	UFUNCTION(BlueprintPure)
	float GetExtraAuraDurationPerExtraScream() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownDuration() const;

	UFUNCTION(BlueprintPure)
	float GetAuraDurationAtLevel() const;

private:
	UFUNCTION()
	void EnableInteractions();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_MakeSurvivorScream();

private:
	UFUNCTION()
	void Authority_OnIsApplicableChanged(UGameplayModifierContainer* container, bool isApplicable);

public:
	US38P02();
};

FORCEINLINE uint32 GetTypeHash(const US38P02) { return 0; }
