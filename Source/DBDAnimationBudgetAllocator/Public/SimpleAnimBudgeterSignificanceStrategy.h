#pragma once

#include "CoreMinimal.h"
#include "AnimBudgeterSignificanceStrategy.h"
#include "SimpleAnimBudgeterSignificanceStrategy.generated.h"

UCLASS(EditInlineNew)
class USimpleAnimBudgeterSignificanceStrategy : public UAnimBudgeterSignificanceStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _tickEvenIfNotRendered;

public:
	USimpleAnimBudgeterSignificanceStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USimpleAnimBudgeterSignificanceStrategy) { return 0; }
