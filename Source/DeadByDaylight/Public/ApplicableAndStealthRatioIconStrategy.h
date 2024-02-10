#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ApplicableAndStealthRatioIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UApplicableAndStealthRatioIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UApplicableAndStealthRatioIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UApplicableAndStealthRatioIconStrategy) { return 0; }
