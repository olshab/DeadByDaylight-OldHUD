#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "TrapInteractableInteraction.generated.h"

class AInteractable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UTrapInteractableInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AInteractable* _owningInteractable;

public:
	UTrapInteractableInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UTrapInteractableInteraction) { return 0; }
