#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "WipeAwayPhantomTrapInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UWipeAwayPhantomTrapInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void CancelInteraction(ADBDPlayer* player);

public:
	UWipeAwayPhantomTrapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UWipeAwayPhantomTrapInteraction) { return 0; }
