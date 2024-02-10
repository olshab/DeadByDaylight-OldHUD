#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "K31SurvivorAnimInstance.generated.h"

UCLASS(NonTransient)
class UK31SurvivorAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasBeenSpottedByDrone;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInsideAnActiveDroneZone;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isClawTrapped;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isRemovingClawTrap;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHackingDrone;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _walkAnimSpeed;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInsideCloset;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isDead;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInteracting;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInjured;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouched;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHooked;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isUsingAimItem;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInAir;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBeingHealed;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBeingCarried;

public:
	UK31SurvivorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK31SurvivorAnimInstance) { return 0; }
