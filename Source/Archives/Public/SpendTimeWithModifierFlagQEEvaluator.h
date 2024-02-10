#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpendTimeWithGameplayTagQEEvaluator.h"
#include "SpendTimeWithModifierFlagQEEvaluator.generated.h"

UCLASS()
class USpendTimeWithModifierFlagQEEvaluator : public USpendTimeWithGameplayTagQEEvaluator
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _modifierFlags;

public:
	USpendTimeWithModifierFlagQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USpendTimeWithModifierFlagQEEvaluator) { return 0; }
