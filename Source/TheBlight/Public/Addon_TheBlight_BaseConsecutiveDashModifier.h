#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "Addon_TheBlight_BaseConsecutiveDashModifier.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_BaseConsecutiveDashModifier : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _modifierTag;

	UPROPERTY(EditDefaultsOnly)
	float _increasePerDash;

	UPROPERTY(EditDefaultsOnly)
	float _defaultModifierValue;

	UPROPERTY(EditDefaultsOnly)
	int32 _maxConsecutiveCount;

public:
	UAddon_TheBlight_BaseConsecutiveDashModifier();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_BaseConsecutiveDashModifier) { return 0; }
