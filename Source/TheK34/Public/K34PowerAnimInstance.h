#pragma once

#include "CoreMinimal.h"
#include "EAttackSubstate.h"
#include "DBDBaseAnimInstance.h"
#include "K34PowerAnimInstance.generated.h"

UCLASS(NonTransient)
class UK34PowerAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isInTipToeMode;

	UPROPERTY(BlueprintReadOnly)
	bool _isChargingScamper;

	UPROPERTY(BlueprintReadOnly)
	bool _isScampering;

	UPROPERTY(BlueprintReadOnly)
	bool _isChainScampering;

	UPROPERTY(BlueprintReadOnly)
	float _forwardVelocity;

	UPROPERTY(BlueprintReadOnly)
	float _lateralVelocity;

	UPROPERTY(BlueprintReadOnly)
	EAttackSubstate _attackState;

	UPROPERTY(BlueprintReadOnly)
	bool _shouldTriggerLookBackAnimation;

private:
	UPROPERTY(EditDefaultsOnly)
	float _minTimeToStartLookBackAnimation;

	UPROPERTY(EditDefaultsOnly)
	float _maxTimeToStartLookBackAnimation;

public:
	UK34PowerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK34PowerAnimInstance) { return 0; }
