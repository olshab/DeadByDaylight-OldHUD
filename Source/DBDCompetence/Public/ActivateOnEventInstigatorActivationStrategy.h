#pragma once

#include "CoreMinimal.h"
#include "ActivateOnEventBaseActivationStrategy.h"
#include "ActivateOnEventInstigatorActivationStrategy.generated.h"

UCLASS(EditInlineNew)
class DBDCOMPETENCE_API UActivateOnEventInstigatorActivationStrategy : public UActivateOnEventBaseActivationStrategy
{
	GENERATED_BODY()

public:
	UActivateOnEventInstigatorActivationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActivateOnEventInstigatorActivationStrategy) { return 0; }
