#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "S36P02.generated.h"

class ACamperPlayer;
class UStatusEffect;
class UInteractionDefinition;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API US36P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _brokenStatusEffectSeconds;

	UPROPERTY(EditDefaultsOnly)
	int32 _requiredHookStage;

	UPROPERTY(Replicated)
	int32 _currentHookStage;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _perkInteractionClass;

	UPROPERTY(Replicated, Transient, Export)
	UInteractionDefinition* _perkInteraction;

	UPROPERTY(Transient, Export)
	UStatusEffect* _brokenStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _brokenEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exhaustedEffectClass;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnRecoverAbilityButtonTriggeredCosmetic(ACamperPlayer* owningSurvivor);

public:
	UFUNCTION(BlueprintPure)
	float GetBrokenStatusDurationAtLevel() const;

private:
	UFUNCTION()
	void Authority_OnCamperHealthStateChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US36P02();
};

FORCEINLINE uint32 GetTypeHash(const US36P02) { return 0; }
