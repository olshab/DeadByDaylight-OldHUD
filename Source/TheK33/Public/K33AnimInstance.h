#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K33AnimInstance.generated.h"

UCLASS(NonTransient)
class UK33AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isQuadruped;

	UPROPERTY(BlueprintReadOnly)
	bool _isInSpecialMode;

	UPROPERTY(BlueprintReadOnly)
	bool _isTailAttacking;

	UPROPERTY(BlueprintReadOnly)
	bool _isTailAttackCharging;

	UPROPERTY(BlueprintReadOnly)
	bool _isInTunnel;

	UPROPERTY(BlueprintReadOnly)
	bool _useQuadrupedIK;

	UPROPERTY(BlueprintReadOnly)
	bool _useBipedIK;

	UPROPERTY(BlueprintReadOnly)
	bool _useLookAt;

	UPROPERTY(BlueprintReadOnly)
	bool _usePushBack;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingHitByTurret;

	UPROPERTY(BlueprintReadOnly)
	bool _pushBackQuadrupedActive;

	UPROPERTY(BlueprintReadOnly)
	bool _pushBackBipedActive;

public:
	UK33AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK33AnimInstance) { return 0; }
