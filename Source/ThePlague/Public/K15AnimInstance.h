#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K15AnimInstance.generated.h"

UCLASS(NonTransient)
class UK15AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isChargingVomit;

	UPROPERTY(BlueprintReadOnly)
	bool _isSpewingVomit;

	UPROPERTY(BlueprintReadOnly)
	bool _isVomitCoolDownEnd;

	UPROPERTY(BlueprintReadOnly)
	float _pukeCharge;

	UPROPERTY(BlueprintReadOnly)
	bool _carryFPV;

protected:
	UFUNCTION(BlueprintCallable)
	void VomitCoolDownEnd();

public:
	UK15AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK15AnimInstance) { return 0; }
