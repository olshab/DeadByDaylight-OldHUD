#pragma once

#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K34PowerChargePresentationPowerFadeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK34PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{
	GENERATED_BODY()

public:
	UK34PowerChargePresentationPowerFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34PowerChargePresentationPowerFadeComponent) { return 0; }
