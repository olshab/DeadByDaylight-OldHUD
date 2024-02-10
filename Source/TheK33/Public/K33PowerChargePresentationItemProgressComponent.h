#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K33PowerChargePresentationItemProgressComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

public:
	UK33PowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33PowerChargePresentationItemProgressComponent) { return 0; }
