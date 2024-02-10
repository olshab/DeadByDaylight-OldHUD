#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnyPlayerInRangeAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UAnyPlayerInRangeAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isAnyPlayerInNearbyRange;

	UPROPERTY(EditDefaultsOnly)
	float _nearbyRangeCm;

public:
	UAnyPlayerInRangeAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UAnyPlayerInRangeAnimInstance) { return 0; }
