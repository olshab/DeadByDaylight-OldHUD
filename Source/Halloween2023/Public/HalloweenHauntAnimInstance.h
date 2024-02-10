#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HalloweenHauntAnimInstance.generated.h"

UCLASS(NonTransient)
class UHalloweenHauntAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _hauntChangingVoidEnergy;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _hauntTrapTriggered;

private:
	UPROPERTY(EditDefaultsOnly)
	float _timeUntilAbsorbAnimationEnds;

	UPROPERTY(EditDefaultsOnly)
	float _timeUntilTrapAnimationEnds;

private:
	UFUNCTION()
	void VoidEnergyChange();

	UFUNCTION()
	void TrapAnimationEnd();

	UFUNCTION()
	void PlayerTriggeredTrap();

	UFUNCTION()
	void EndVoidEnergyChange();

public:
	UHalloweenHauntAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHalloweenHauntAnimInstance) { return 0; }
