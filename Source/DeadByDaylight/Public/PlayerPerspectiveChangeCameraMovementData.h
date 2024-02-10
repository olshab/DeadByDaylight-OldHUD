#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerPerspectiveChangeCameraMovementData.generated.h"

class UCurveFloat;

USTRUCT()
struct FPlayerPerspectiveChangeCameraMovementData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FVector InitialCameraRelativeLocation;

	UPROPERTY()
	FVector TargetCameraRelativeLocation;

	UPROPERTY()
	bool ShouldForceLockCameraBehindPlayer;

	UPROPERTY()
	UCurveFloat* TransitionCurve;

	UPROPERTY()
	float CameraMovementDuration;

public:
	DEADBYDAYLIGHT_API FPlayerPerspectiveChangeCameraMovementData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerPerspectiveChangeCameraMovementData) { return 0; }
