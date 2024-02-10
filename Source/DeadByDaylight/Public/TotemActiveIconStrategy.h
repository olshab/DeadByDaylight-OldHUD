#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "TotemActiveIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UTotemActiveIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UTotemActiveIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTotemActiveIconStrategy) { return 0; }
