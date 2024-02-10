#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K32PowerChargePresentationItemProgressComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK32PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

public:
	UK32PowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32PowerChargePresentationItemProgressComponent) { return 0; }
