#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K32P03.generated.h"

class UStatusEffect;
class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK32P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _undetectableStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	float _statusEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	int32 _generatorsDamagedRequired;

	UPROPERTY(EditDefaultsOnly)
	float _hastePercent;

	UPROPERTY(Replicated)
	float _generatorsDamaged;

	UPROPERTY(ReplicatedUsing=OnRep_CompromisedGenerator, Transient)
	AGenerator* _compromisedGenerator;

	UPROPERTY(Transient)
	AGenerator* _lastCompromisedGenerator;

private:
	UFUNCTION()
	void OnRep_CompromisedGenerator();

public:
	UFUNCTION(BlueprintPure)
	float GetStatusEffectDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHastePercent() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTriggerCompromiseVFX(const AGenerator* compromisedGenerator);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCompromiseCompletedVFX(const AGenerator* compromisedGenerator);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK32P03();
};

FORCEINLINE uint32 GetTypeHash(const UK32P03) { return 0; }
