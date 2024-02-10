#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MotionType.h"
#include "CameraShotType.generated.h"

class USplineComponent;

UCLASS()
class DBDPROCEDURALCAMERA_API ACameraShotType : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool bIsCameraRotationFixed;

protected:
	UPROPERTY(EditAnywhere)
	float MinimumDistanceFromCamera;

	UPROPERTY(EditAnywhere)
	float MaximumDistanceFromCamera;

	UPROPERTY(EditAnywhere)
	float HorizontalAngleFreedom;

	UPROPERTY(EditAnywhere)
	float VerticalAngleFreedom;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<MotionType> CameraMotionType;

	UPROPERTY(EditAnywhere)
	int32 KeyPoseNumber;

	UPROPERTY(VisibleAnywhere, meta=(BindWidgetOptional))
	USplineComponent* CameraTrack;

public:
	ACameraShotType();
};

FORCEINLINE uint32 GetTypeHash(const ACameraShotType) { return 0; }
