#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S37P01.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US37P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _killerRevealedTime;

	UPROPERTY(EditDefaultsOnly)
	float _chaseLingeringTimer;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealKillerStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealGeneratorStatusEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _revealGeneratorStatusEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetKillerRevealedTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetChaseLingeringTimerAtLevel() const;

public:
	US37P01();
};

FORCEINLINE uint32 GetTypeHash(const US37P01) { return 0; }
