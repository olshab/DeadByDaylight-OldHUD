#pragma once

#include "CoreMinimal.h"
#include "BaseGroundDetectorComponent.h"
#include "K34DistractionGroundDetectorComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK34_API UK34DistractionGroundDetectorComponent : public UBaseGroundDetectorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _startPositionZOffSet;

public:
	UK34DistractionGroundDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34DistractionGroundDetectorComponent) { return 0; }
