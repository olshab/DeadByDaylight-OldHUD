#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SelfPreservation.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USelfPreservation : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _hitDistanceToTriggerPerkEffect;

	UPROPERTY(EditDefaultsOnly)
	float _selfPreservationEffectDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetSelfPreservationEffectDuration() const;

	UFUNCTION(BlueprintPure)
	float GetHitDistanceToTriggerPerkEffect() const;

public:
	USelfPreservation();
};

FORCEINLINE uint32 GetTypeHash(const USelfPreservation) { return 0; }
