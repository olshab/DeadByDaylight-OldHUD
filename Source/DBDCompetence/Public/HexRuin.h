#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "FastTimer.h"
#include "Templates/SubclassOf.h"
#include "HexRuin.generated.h"

class UStatusEffect;
class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexRuin : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<AGenerator*, FFastTimer> _curseActivationTimers;

	UPROPERTY(EditDefaultsOnly)
	float _regressionModifier;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _ruinStatusEffectClass;

	UPROPERTY(Transient)
	TMap<AGenerator*, uint64> _gameplayModifierHandles;

	UPROPERTY(Transient, Export)
	UStatusEffect* _ruinStatusEffect;

private:
	UFUNCTION(BlueprintPure)
	float GetRegressionModifierByLevel(int32 perkLevel) const;

	UFUNCTION()
	void Authority_SetupCurseOnAllGenerators();

public:
	UHexRuin();
};

FORCEINLINE uint32 GetTypeHash(const UHexRuin) { return 0; }
