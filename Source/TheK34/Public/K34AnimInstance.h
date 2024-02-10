#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K34AnimInstance.generated.h"

UCLASS(NonTransient)
class THEK34_API UK34AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isDodson;

	UPROPERTY(BlueprintReadOnly)
	bool _shouldUseLookAt;

public:
	UK34AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK34AnimInstance) { return 0; }
