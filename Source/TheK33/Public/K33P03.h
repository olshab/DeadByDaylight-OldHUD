#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K33P03.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _perkAuraRevealDuration;

	UPROPERTY(EditDefaultsOnly)
	float _obliviousDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealedStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _obliviousStatusEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkAuraRevealDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetObliviousDurationAtLevel() const;

public:
	UK33P03();
};

FORCEINLINE uint32 GetTypeHash(const UK33P03) { return 0; }
