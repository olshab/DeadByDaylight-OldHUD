#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "EK32ItemBoxState.h"
#include "K32ItemBoxAnimInstance.generated.h"

class AK32ItemBox;

UCLASS(NonTransient)
class UK32ItemBoxAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	AK32ItemBox* _owningItemBox;

	UPROPERTY(BlueprintReadOnly)
	EK32ItemBoxState _currentState;

public:
	UK32ItemBoxAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK32ItemBoxAnimInstance) { return 0; }
