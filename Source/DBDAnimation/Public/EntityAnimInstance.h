#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EntityAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UEntityAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite)
	bool _isStruggling;

	UPROPERTY(BlueprintReadWrite)
	float _strugglePercent;

public:
	UEntityAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UEntityAnimInstance) { return 0; }
