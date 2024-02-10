#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "ThrowStandingSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class WINTEREVENT2023_API UThrowStandingSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isThrowing;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInjured;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouching;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _pitch;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _yaw;

public:
	UThrowStandingSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UThrowStandingSurvivorSubAnimInstance) { return 0; }
