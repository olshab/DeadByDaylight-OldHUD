#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CoreMemorySpawnedStatusEffectTrackerComponent.generated.h"

class ACoreMemoryChallengePlayerSpecificController;
class UStatusEffect;
class UCoreMemoryImposeStatusEffectBehaviour;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoreMemorySpawnedStatusEffectTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<TWeakObjectPtr<UStatusEffect>> _authority_spawnedStatusEffects;

	UPROPERTY(Transient)
	TWeakObjectPtr<UCoreMemoryImposeStatusEffectBehaviour> _authority_imposeStatusEffectBehaviour;

private:
	UFUNCTION()
	void Authority_AddSpawnedStatusEffect(UStatusEffect* statusEffect, ACoreMemoryChallengePlayerSpecificController* playerController);

public:
	UCoreMemorySpawnedStatusEffectTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemorySpawnedStatusEffectTrackerComponent) { return 0; }
