#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "AnyMeansNecessary.generated.h"

class UStatusEffect;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UAnyMeansNecessary : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _actionSpeedBonus;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _anyMeansNecessaryActionSpeedEffect;

private:
	UFUNCTION()
	void Authority_OnPalletPulledUp(const FGameplayTag gameplayTag, const FGameEventData& gameEventData) const;

public:
	UAnyMeansNecessary();
};

FORCEINLINE uint32 GetTypeHash(const UAnyMeansNecessary) { return 0; }
