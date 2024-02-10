#pragma once

#include "CoreMinimal.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectSpawnData.h"
#include "DeadHard.generated.h"

class UAnimInstance;
class UInteractionAttacherComponent;
class UDeadHardInteraction;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeadHard : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimInstance> _deadHardAnimInstance;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDeadHardInteraction> _deadHardInteraction;

	UPROPERTY(EditDefaultsOnly)
	float _deadHardCooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	TArray<FStatusEffectSpawnData> _effectsToSpawn;

	UPROPERTY(Transient)
	FPlayerStatusEffectSpawnerHelper _spawnerHelper;

	UPROPERTY(EditDefaultsOnly)
	float _exhaustedCooldownPerLevel;

	UPROPERTY(Transient, Export)
	UInteractionAttacherComponent* _interactionAttacherComponent;

private:
	UFUNCTION(BlueprintPure)
	float GetExhaustedDuration() const;

public:
	UFUNCTION(BlueprintPure)
	float GetDeadHardCooldownDuration() const;

public:
	UDeadHard();
};

FORCEINLINE uint32 GetTypeHash(const UDeadHard) { return 0; }
