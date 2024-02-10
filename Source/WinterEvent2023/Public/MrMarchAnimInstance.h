#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MrMarchAnimInstance.generated.h"

class AMrMarch;

UCLASS(NonTransient)
class WINTEREVENT2023_API UMrMarchAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isDestroyed;

	UPROPERTY(BlueprintReadOnly)
	bool _isInJumpscare;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingDestroyed;

	UPROPERTY(BlueprintReadOnly)
	bool _isSpawned;

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<AMrMarch> _mrMarch;

public:
	UMrMarchAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UMrMarchAnimInstance) { return 0; }
