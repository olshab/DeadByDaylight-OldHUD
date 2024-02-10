#pragma once

#include "CoreMinimal.h"
#include "DynamicAccessoryAnimInstance.h"
#include "K32AssimilationAnimInstance.generated.h"

UCLASS(NonTransient)
class UK32AssimilationAnimInstance : public UDynamicAccessoryAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isMale;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingMoried;

	UPROPERTY(BlueprintReadOnly)
	bool _isDeadOrInParadise;

	UPROPERTY(BlueprintReadOnly)
	bool _isMoving;

	UPROPERTY(BlueprintReadOnly)
	bool _isRunning;

	UPROPERTY(BlueprintReadOnly)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly)
	bool _isRetrievingItem;

	UPROPERTY(BlueprintReadOnly)
	bool _isInAir;

	UPROPERTY(BlueprintReadOnly)
	bool _isHealing;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingMended;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingHooked;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingHealed;

	UPROPERTY(BlueprintReadOnly)
	bool _isCleansingTotem;

	UPROPERTY(BlueprintReadOnly)
	bool _isOwnerUsingGesture;

	UPROPERTY(BlueprintReadOnly)
	bool _isOwnerEscapingWithHatch;

	UPROPERTY(BlueprintReadOnly)
	bool _isInteractingWithLocker;

	UPROPERTY(BlueprintReadOnly)
	bool _isInteractingWithChest;

	UPROPERTY(BlueprintReadOnly)
	bool _isAssimilated;

	UPROPERTY(BlueprintReadOnly)
	bool _isDestroyedByEmp;

	UPROPERTY(BlueprintReadOnly)
	bool _isDestroyedByHook;

	UPROPERTY(BlueprintReadOnly)
	bool _isDestroyedByTeleport;

	UPROPERTY(BlueprintReadOnly)
	bool _isOwnerCrouching;

	UPROPERTY(BlueprintReadOnly)
	bool _isOwnerInjured;

	UPROPERTY(BlueprintReadOnly)
	bool _isOwnerKO;

	UPROPERTY(BlueprintReadOnly)
	bool _isOwnerInCloset;

	UPROPERTY(BlueprintReadOnly)
	bool _isOwnerExitingLocker;

	UPROPERTY(BlueprintReadOnly)
	bool _isOwnerBeingCarried;

	UPROPERTY(BlueprintReadOnly)
	bool _isOwnerVaulting;

	UPROPERTY(BlueprintReadOnly)
	bool _isOwnerBeingPulledFromCloset;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingLookedAtByKillerPod;

public:
	UFUNCTION(BlueprintCallable)
	void ResetIsDestroyedByHook();

	UFUNCTION(BlueprintCallable)
	void ResetIsDestroyedByEmp();

public:
	UK32AssimilationAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK32AssimilationAnimInstance) { return 0; }
