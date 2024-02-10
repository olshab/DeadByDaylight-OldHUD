#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimBudgeterSignificanceStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class UAnimBudgeterSignificanceStrategy : public UObject
{
	GENERATED_BODY()

public:
	UAnimBudgeterSignificanceStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UAnimBudgeterSignificanceStrategy) { return 0; }
