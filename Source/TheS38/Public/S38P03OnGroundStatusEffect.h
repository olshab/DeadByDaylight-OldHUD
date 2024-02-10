#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "S38P03OnGroundStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US38P03OnGroundStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _hastePercentage;

	UPROPERTY(Transient, Export)
	UStatusEffect* _hasteStatusEffect;

private:
	UFUNCTION()
	void Authority_OnPickSelfUp(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnCamperHealthChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

	UFUNCTION()
	void Authority_HealSelf();

public:
	US38P03OnGroundStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const US38P03OnGroundStatusEffect) { return 0; }
