#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K34PowerChargePresentationItemProgressComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK34PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

public:
	UK34PowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34PowerChargePresentationItemProgressComponent) { return 0; }
