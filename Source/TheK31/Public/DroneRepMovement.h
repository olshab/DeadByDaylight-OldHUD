#pragma once

#include "CoreMinimal.h"
#include "EDroneFlyingHeight.h"
#include "UObject/NoExportTypes.h"
#include "DroneRepMovement.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDroneRepMovement
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool IsRotating;

	UPROPERTY()
	bool IsRotationReversed;

	UPROPERTY()
	bool HasReachTarget;

	UPROPERTY()
	FVector Location;

	UPROPERTY()
	FRotator Rotation;

	UPROPERTY()
	EDroneFlyingHeight FlyingHeight;

	UPROPERTY()
	float HeightAdjustmentMovingTimeOverride;

	UPROPERTY()
	AActor* InteractingActor;

	UPROPERTY()
	FName InteractingActorAttachSocket;

	UPROPERTY()
	float SnapTime;

public:
	THEK31_API FDroneRepMovement();
};

FORCEINLINE uint32 GetTypeHash(const FDroneRepMovement) { return 0; }
