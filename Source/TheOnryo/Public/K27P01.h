#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "K27P01.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK27P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _survivorAuraRevealDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedRevealToKillerEffectClass;

public:
	UFUNCTION(BlueprintPure)
	float GetAuraRevealDuration() const;

private:
	UFUNCTION()
	void Authority_OnSurvivorUnhookedOffScourgeHook(const FGameEventData& gameEventData);

public:
	UK27P01();
};

FORCEINLINE uint32 GetTypeHash(const UK27P01) { return 0; }
