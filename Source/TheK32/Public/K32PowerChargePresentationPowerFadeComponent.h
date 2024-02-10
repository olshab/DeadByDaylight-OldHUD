#pragma once

#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K32PowerChargePresentationPowerFadeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK32PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{
	GENERATED_BODY()

public:
	UK32PowerChargePresentationPowerFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32PowerChargePresentationPowerFadeComponent) { return 0; }
