#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITunableParameter.h"
#include "DBDAIPassiveCameraComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIPassiveCameraComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float RotateCameraOnStationaryWaitTime;

	UPROPERTY(EditDefaultsOnly)
	float RotateCameraOnStationaryDegreePerSecond;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter CameraRotationFullRotationDelay;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter CameraRotationBetweenTargetDelay;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter CameraRotationMinimumInteractionTime;

	UPROPERTY(EditDefaultsOnly)
	int32 CameraRotationTotalRaycasts;

	UPROPERTY(EditDefaultsOnly)
	float ForwardViewHalfAngle;

	UPROPERTY(EditDefaultsOnly)
	float FocusPointCandidateRemoveOppositeHalfAngle;

	UPROPERTY(EditDefaultsOnly)
	float FocusPointCandidateForceKeepDistance;

	UPROPERTY(EditDefaultsOnly)
	float FocusPointCandidateMinDistance;

	UPROPERTY(EditDefaultsOnly)
	float InvalidKillerLocationRangeRatio;

public:
	UDBDAIPassiveCameraComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIPassiveCameraComponent) { return 0; }
