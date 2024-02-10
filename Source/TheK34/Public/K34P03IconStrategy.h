#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "K34P03IconStrategy.generated.h"

UCLASS()
class UK34P03IconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UK34P03IconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK34P03IconStrategy) { return 0; }
