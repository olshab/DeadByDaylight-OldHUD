#pragma once

#include "CoreMinimal.h"
#include "CameraShot.generated.h"

class ACameraShotType;

USTRUCT(BlueprintType)
struct FCameraShot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	ACameraShotType* CameraShotType;

	UPROPERTY(EditAnywhere)
	float ShotDuration;

	UPROPERTY(EditAnywhere)
	float PriorityWeight;

	UPROPERTY(EditAnywhere)
	int32 TrackSamplingNumberForObstructionComputation;

	UPROPERTY(EditAnywhere)
	float ObstructionScore;

public:
	DBDPROCEDURALCAMERA_API FCameraShot();
};

FORCEINLINE uint32 GetTypeHash(const FCameraShot) { return 0; }
