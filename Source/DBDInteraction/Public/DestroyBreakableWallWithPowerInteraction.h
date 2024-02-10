#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DestroyBreakableWallWithPowerInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDestroyBreakableWallWithPowerInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void CustomizePropertiesForBlight(ADBDPlayer* killer);

public:
	UDestroyBreakableWallWithPowerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDestroyBreakableWallWithPowerInteraction) { return 0; }
