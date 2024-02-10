#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "MindBreaker.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UMindBreaker : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _effectDurationAfterRepair;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _blindessEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exhaustedEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetEffectDurationAfterRepairAtLevel() const;

public:
	UMindBreaker();
};

FORCEINLINE uint32 GetTypeHash(const UMindBreaker) { return 0; }
