#pragma once

#include "CoreMinimal.h"
#include "SkillCheckQEEvaluator.h"
#include "ConsecutiveSkillCheckQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UConsecutiveSkillCheckQEEvaluator : public USkillCheckQEEvaluator
{
	GENERATED_BODY()

public:
	UConsecutiveSkillCheckQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UConsecutiveSkillCheckQEEvaluator) { return 0; }
