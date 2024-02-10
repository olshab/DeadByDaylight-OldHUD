#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "BloodWarden.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodWarden : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _bloodWardenBlockerStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealPlayerStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _perkLevelSpikeDurations;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkLevelSpikeDurationsAtLevel() const;

public:
	UBloodWarden();
};

FORCEINLINE uint32 GetTypeHash(const UBloodWarden) { return 0; }
