#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpendTimeWithGameplayTagQEEvaluator.h"
#include "SpendTimeWithStateTagQEEvaluator.generated.h"

UCLASS()
class USpendTimeWithStateTagQEEvaluator : public USpendTimeWithGameplayTagQEEvaluator
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _stateTags;

public:
	USpendTimeWithStateTagQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USpendTimeWithStateTagQEEvaluator) { return 0; }
