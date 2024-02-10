#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K31DroneScoutDetectionSphereRaycastStruct.h"
#include "SurvivorDroneFrameDatum.h"
#include "K31DroneScoutDetectionComponent.generated.h"

class ACamperPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneScoutDetectionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FK31DroneScoutDetectionSphereRaycastStruct> _raycastSphereData;

	UPROPERTY(Transient)
	TMap<ACamperPlayer*, FSurvivorDroneFrameDatum> _survivorLastFrameData;

	UPROPERTY(Transient)
	TMap<ACamperPlayer*, FSurvivorDroneFrameDatum> _survivorCurrentFrameData;

	UPROPERTY(Transient)
	TArray<ACamperPlayer*> _detectedSurvivors;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseDetectionConeYawHalfAngleDegrees;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseDetectionHalfHeight;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseDetectionRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _sphereTraceRadius;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _stateTagsPreventingSurvivorDetection;

private:
	UFUNCTION()
	void OnLaserDeactivate(UActorComponent* component);

	UFUNCTION()
	void OnLaserActive(UActorComponent* component, bool reset);

public:
	UK31DroneScoutDetectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneScoutDetectionComponent) { return 0; }
