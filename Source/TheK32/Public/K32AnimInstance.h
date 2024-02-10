#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K32AnimInstance.generated.h"

class UStatusEffect;

UCLASS(NonTransient)
class UK32AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isAimingPodPlacement;

	UPROPERTY(BlueprintReadOnly)
	bool _isShootingPod;

	UPROPERTY(BlueprintReadOnly)
	bool _isInOverclockMode;

	UPROPERTY(BlueprintReadOnly)
	bool _isTeleporting;

	UPROPERTY(BlueprintReadOnly)
	bool _isControllingPod;

	UPROPERTY(BlueprintReadOnly)
	bool _isTeleportingFromKillerPovWithInAntiCamp;

	UPROPERTY(BlueprintReadOnly)
	float _chargeKillerProjectileSpawnPercent;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _overclockStatusEffectClass;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetIsShootingPod();

private:
	UFUNCTION()
	void OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UK32AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK32AnimInstance) { return 0; }
