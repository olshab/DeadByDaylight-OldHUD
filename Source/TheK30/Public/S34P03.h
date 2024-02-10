#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S34P03.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK30_API US34P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TMap<ADBDPlayer*, UStatusEffect*> _activeStatusEffects;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _repairSpeedModifierClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealGeneratorAurasInRangeEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _repairSpeedValues;

	UPROPERTY(EditDefaultsOnly)
	float _generatorRanges;

public:
	UFUNCTION(BlueprintPure)
	float GetRepairSpeedAtLevel() const;

public:
	US34P03();
};

FORCEINLINE uint32 GetTypeHash(const US34P03) { return 0; }
