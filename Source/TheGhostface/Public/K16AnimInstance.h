#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K16AnimInstance.generated.h"

UCLASS(NonTransient)
class UK16AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInStalkMode;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isGhostStealth;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInChase;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isStalking;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _distanceFromCamera;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _leanOffset;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouched;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouchPressed;

public:
	UK16AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK16AnimInstance) { return 0; }
