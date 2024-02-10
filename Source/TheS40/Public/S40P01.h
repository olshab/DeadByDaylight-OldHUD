#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S40P01.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US40P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _S40P01HasteEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hinderedEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _S40P01HasteEffect;

	UPROPERTY(EditDefaultsOnly)
	float _hasteEffectPercent;

	UPROPERTY(EditDefaultsOnly)
	float _hinderedEffectTime;

	UPROPERTY(EditDefaultsOnly)
	float _hinderedEffectPercent;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownTriggerTime;

public:
	US40P01();
};

FORCEINLINE uint32 GetTypeHash(const US40P01) { return 0; }
