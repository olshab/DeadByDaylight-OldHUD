#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "WellMakeIt.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UWellMakeIt : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _wellMakeItNotificationEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _wellMakeItEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _healingSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _perkDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHealingSpeed() const;

private:
	UFUNCTION()
	void Authority_OnUnHook(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UWellMakeIt();
};

FORCEINLINE uint32 GetTypeHash(const UWellMakeIt) { return 0; }
