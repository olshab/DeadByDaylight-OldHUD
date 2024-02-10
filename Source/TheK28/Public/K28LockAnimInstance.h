#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EK28LockbarState.h"
#include "K28LockAnimInstance.generated.h"

UCLASS(NonTransient)
class UK28LockAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	EK28LockbarState _lockbarState;

public:
	UK28LockAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK28LockAnimInstance) { return 0; }
