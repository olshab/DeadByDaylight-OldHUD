#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WormholeFatherDoorAnimInstance.generated.h"

UCLASS(NonTransient)
class UWormholeFatherDoorAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isOpened;

private:
	UFUNCTION()
	void OnStateChanged(bool hasBeenHacked);

public:
	UWormholeFatherDoorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UWormholeFatherDoorAnimInstance) { return 0; }
