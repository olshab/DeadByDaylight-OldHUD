#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "S38P01Interaction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class US38P01Interaction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	US38P01Interaction();
};

FORCEINLINE uint32 GetTypeHash(const US38P01Interaction) { return 0; }
