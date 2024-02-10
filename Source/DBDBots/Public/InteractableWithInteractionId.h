#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractableWithInteractionId.generated.h"

class AInteractable;

USTRUCT()
struct FInteractableWithInteractionId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	TSubclassOf<AInteractable> InteractableClass;

	UPROPERTY(EditInstanceOnly)
	FString InteractionId;

public:
	DBDBOTS_API FInteractableWithInteractionId();
};

FORCEINLINE uint32 GetTypeHash(const FInteractableWithInteractionId) { return 0; }
