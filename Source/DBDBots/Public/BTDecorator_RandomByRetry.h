#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_RandomByRetry.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_RandomByRetry : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FAITunableParameter BaseSuccessRate;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PerRetrySuccessRate;

	UPROPERTY(EditInstanceOnly)
	bool ResetWhenValue;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ResetAfterTime;

	UPROPERTY(EditInstanceOnly)
	bool ResetOnCeaseRelevant;

public:
	UBTDecorator_RandomByRetry();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_RandomByRetry) { return 0; }
