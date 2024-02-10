#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "S38P03Interaction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class US38P03Interaction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	US38P03Interaction();
};

FORCEINLINE uint32 GetTypeHash(const US38P03Interaction) { return 0; }
