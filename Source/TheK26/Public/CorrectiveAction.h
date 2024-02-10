#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "CorrectiveAction.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCorrectiveAction : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _startingTokens;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _correctiveActionStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _allowedInteractionSemanticsForToken;

public:
	UCorrectiveAction();
};

FORCEINLINE uint32 GetTypeHash(const UCorrectiveAction) { return 0; }
