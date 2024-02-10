#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K31RadarAnimInstance.generated.h"

class ASlasherPlayer;
class AK31Power;

UCLASS(NonTransient)
class THEK31_API UK31RadarAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isRecallingADrone;

	UPROPERTY(BlueprintReadOnly)
	bool _isActivatingADrone;

	UPROPERTY(BlueprintReadOnly)
	bool _isAbleToPlaceDrone;

	UPROPERTY(BlueprintReadOnly)
	bool _isPowerOnCooldown;

private:
	UPROPERTY(Transient)
	AK31Power* _owningK31Power;

	UPROPERTY(Transient)
	ASlasherPlayer* _killer;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetIsRecallingADrone();

	UFUNCTION(BlueprintCallable)
	void ResetIsActivatingADrone();

private:
	UFUNCTION()
	void OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UK31RadarAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK31RadarAnimInstance) { return 0; }
