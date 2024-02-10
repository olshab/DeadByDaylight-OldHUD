#pragma once

#include "CoreMinimal.h"
#include "GameplayMutator.h"
#include "Templates/SubclassOf.h"
#include "AddPlayerStatusEffectGameplayMutator.generated.h"

class UStatusEffect;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UAddPlayerStatusEffectGameplayMutator : public UGameplayMutator
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldDisplay;

	UPROPERTY(EditDefaultsOnly)
	float _lifetime;

public:
	UAddPlayerStatusEffectGameplayMutator();
};

FORCEINLINE uint32 GetTypeHash(const UAddPlayerStatusEffectGameplayMutator) { return 0; }
