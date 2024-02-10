#pragma once

#include "CoreMinimal.h"
#include "EOniAttackType.h"
#include "KillerAnimInstance.h"
#include "K18AnimInstance.generated.h"

UCLASS(NonTransient)
class UK18AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isAbsorbing;

	UPROPERTY(BlueprintReadOnly)
	bool _isDemonMode;

	UPROPERTY(BlueprintReadOnly)
	bool _isCharging;

	UPROPERTY(BlueprintReadOnly)
	float _absorbCharge;

	UPROPERTY(BlueprintReadOnly)
	bool _isDashing;

	UPROPERTY(BlueprintReadOnly)
	float _chargeDuration;

	UPROPERTY(BlueprintReadOnly)
	bool _powerAttackOpen;

	UPROPERTY(BlueprintReadOnly)
	EOniAttackType _attackType;

protected:
	UFUNCTION(BlueprintCallable)
	void UpdatePowerAttackOpen();

public:
	UK18AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK18AnimInstance) { return 0; }
