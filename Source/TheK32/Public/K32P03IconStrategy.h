#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "K32P03IconStrategy.generated.h"

UCLASS()
class UK32P03IconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UK32P03IconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK32P03IconStrategy) { return 0; }
