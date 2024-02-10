#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "K32SurvivorAnimInstance.generated.h"

UCLASS(NonTransient)
class UK32SurvivorAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isAssimilated;

	UPROPERTY(BlueprintReadOnly)
	bool _isOwnerBeingCarried;

	UPROPERTY(BlueprintReadOnly)
	bool _isSpeedingUpEmpGeneration;

	UPROPERTY(BlueprintReadOnly)
	bool _isRetrievingItem;

	UPROPERTY(BlueprintReadOnly)
	bool _isUsingEmp;

	UPROPERTY(BlueprintReadOnly)
	bool _hasBeenAssimilatedByAnotherSurvivor;

	UPROPERTY(BlueprintReadOnly)
	bool _hasBeenAssimilatedByKiller;

	UPROPERTY(BlueprintReadOnly)
	bool _hasBeenCleansedFromAssimilation;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetHasBeenCleansedFromAssimilation();

	UFUNCTION(BlueprintCallable)
	void ResetHasBeenAssimilatedByKiller();

	UFUNCTION(BlueprintCallable)
	void ResetHasBeenAssimilatedByAnotherSurvivor();

public:
	UK32SurvivorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK32SurvivorAnimInstance) { return 0; }
