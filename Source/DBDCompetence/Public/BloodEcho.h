#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "BloodEcho.generated.h"

class UStatusEffect;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBloodEcho : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hemorrhageStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exhaustedStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _statusEffectDurationTag;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownDuration;

protected:
	UFUNCTION(BlueprintPure)
	float GetCooldownDurationAtLevel() const;

public:
	UBloodEcho();
};

FORCEINLINE uint32 GetTypeHash(const UBloodEcho) { return 0; }
