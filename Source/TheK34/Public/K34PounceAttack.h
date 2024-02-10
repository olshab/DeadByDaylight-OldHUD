#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "K34PounceAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK34_API UK34PounceAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _sphereTraceRadiusObstruction;

	UPROPERTY(EditDefaultsOnly)
	float _maxSphereTraceDistanceObstruction;

	UPROPERTY(EditDefaultsOnly)
	float _sphereTraceRadiusMidairLeap;

	UPROPERTY(EditDefaultsOnly)
	float _sphereTraceStartForwardOffsetMidairLeap;

	UPROPERTY(EditDefaultsOnly)
	float _sphereTraceEndForwardOffsetMidairLeap;

	UPROPERTY(EditDefaultsOnly)
	float _sphereTraceVerticalOffsetMidairLeap;

public:
	UK34PounceAttack();
};

FORCEINLINE uint32 GetTypeHash(const UK34PounceAttack) { return 0; }
