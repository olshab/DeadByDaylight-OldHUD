#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DestroyPalletDefinition.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDestroyPalletDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _interactionTimePercentForDestroyEvent;

public:
	UDestroyPalletDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UDestroyPalletDefinition) { return 0; }
