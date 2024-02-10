#pragma once

#include "CoreMinimal.h"
#include "KillerAttackSubAnimInstance.h"
#include "EAttackSubstate.h"
#include "UObject/NoExportTypes.h"
#include "K34KillerAttackSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UK34KillerAttackSubAnimInstance : public UKillerAttackSubAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _shouldTriggerSpecialAnimation;

	UPROPERTY(BlueprintReadOnly)
	bool _isDodson;

	UPROPERTY(BlueprintReadOnly, Transient)
	EAttackSubstate _anticipatedAttackSubStateAfterHitting;

	UPROPERTY(BlueprintReadOnly, Transient)
	FVector _targetWorldLocation;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _targetDistanceHorizontal;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _percentOfJumpDistance;

	UPROPERTY(EditDefaultsOnly)
	float _maxJumpDistance;

	UPROPERTY(EditDefaultsOnly)
	float _specialAnimationTriggerChance;

public:
	UK34KillerAttackSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK34KillerAttackSubAnimInstance) { return 0; }
