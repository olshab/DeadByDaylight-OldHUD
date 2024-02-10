#pragma once

#include "CoreMinimal.h"
#include "FirstPersonViewComponent.h"
#include "K34FirstPersonViewComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK34FirstPersonViewComponent : public UFirstPersonViewComponent
{
	GENERATED_BODY()

public:
	UK34FirstPersonViewComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34FirstPersonViewComponent) { return 0; }
