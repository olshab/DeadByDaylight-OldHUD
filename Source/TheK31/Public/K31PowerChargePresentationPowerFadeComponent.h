#pragma once

#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K31PowerChargePresentationPowerFadeComponent.generated.h"

class AK31Power;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK31PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AK31Power* _originatingPower;

public:
	UK31PowerChargePresentationPowerFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31PowerChargePresentationPowerFadeComponent) { return 0; }
