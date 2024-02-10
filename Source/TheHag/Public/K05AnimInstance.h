#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K05AnimInstance.generated.h"

UCLASS(NonTransient)
class UK05AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

public:
	UK05AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK05AnimInstance) { return 0; }
