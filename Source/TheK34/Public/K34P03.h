#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K34P03.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK34P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _generatorRangeFromPlayer;

	UPROPERTY(Replicated)
	bool _hasAnyGeneratorsInRange;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _hasteEffect;

	UPROPERTY(EditDefaultsOnly)
	float _hasteEffectAmount;

	UPROPERTY(EditDefaultsOnly)
	float _hasteLingerTimes;

	UPROPERTY(EditDefaultsOnly)
	bool _disablePerkWhenExitGatesArePowered;

public:
	UFUNCTION()
	bool HasAnyGeneratorsInRange() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK34P03();
};

FORCEINLINE uint32 GetTypeHash(const UK34P03) { return 0; }
