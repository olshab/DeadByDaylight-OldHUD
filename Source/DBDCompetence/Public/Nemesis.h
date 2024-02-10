#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Nemesis.generated.h"

class UStatusEffect;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UNemesis : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _revealToKillerTime;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _obliviousTime;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedObliviousEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedRevealStatusEffect;

	UPROPERTY(Transient, Export)
	UStatusEffect* _obliviousStatusEffect;

public:
	UNemesis();
};

FORCEINLINE uint32 GetTypeHash(const UNemesis) { return 0; }
