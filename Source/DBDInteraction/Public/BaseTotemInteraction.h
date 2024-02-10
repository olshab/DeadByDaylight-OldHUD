#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "BaseTotemInteraction.generated.h"

class ATotem;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBaseTotemInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	ATotem* GetTotem() const;

public:
	UBaseTotemInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBaseTotemInteraction) { return 0; }
