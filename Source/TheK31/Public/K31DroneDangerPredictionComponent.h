#pragma once

#include "CoreMinimal.h"
#include "DBDDangerPredictionComponent.h"
#include "K31DroneDangerPredictionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneDangerPredictionComponent : public UDBDDangerPredictionComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _minimumTraverseAngle;

	UPROPERTY(EditAnywhere)
	float _maximumTraverseAngle;

	UPROPERTY(EditAnywhere)
	float _crouchRangeMargin;

	UPROPERTY(EditAnywhere)
	float _crouchingHeightDifference;

	UPROPERTY(EditAnywhere)
	float _crouchAngleNumerator;

	UPROPERTY(EditAnywhere)
	float _crouchRotatingSpeedPercentAngleMargin;

	UPROPERTY(EditAnywhere)
	float _maxCrouchRange;

	UPROPERTY(EditAnywhere)
	float _activeUnhackableWeight;

	UPROPERTY(EditAnywhere)
	float _activeHackableWeight;

	UPROPERTY(EditAnywhere)
	float _scoutingWeight;

public:
	UK31DroneDangerPredictionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneDangerPredictionComponent) { return 0; }
