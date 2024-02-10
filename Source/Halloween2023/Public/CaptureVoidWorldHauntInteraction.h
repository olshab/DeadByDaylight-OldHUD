#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "CaptureVoidWorldHauntInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCaptureVoidWorldHauntInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FText _standardInteractionString;

	UPROPERTY(EditDefaultsOnly)
	FText _contestedInteractionString;

public:
	UCaptureVoidWorldHauntInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCaptureVoidWorldHauntInteraction) { return 0; }
