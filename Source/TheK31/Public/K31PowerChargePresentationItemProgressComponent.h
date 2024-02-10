#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K31PowerChargePresentationItemProgressComponent.generated.h"

class AK31Power;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK31PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AK31Power* _originatingPower;

public:
	UK31PowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31PowerChargePresentationItemProgressComponent) { return 0; }
