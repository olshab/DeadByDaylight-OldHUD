#pragma once

#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Footstep.h"
#include "FootstepManagerComponent.generated.h"

class UMaterial;
class UFootstepCreatorComponent;
class UDecalSpawner;

UCLASS(meta=(BlueprintSpawnableComponent))
class UFootstepManagerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FPerPlatformInt _decalPoolSize;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformFloat _recycleThresholdPercentage;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformFloat _recycleDistancePercentage;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformInt _maxOverlapping;

	UPROPERTY(EditDefaultsOnly)
	float _raycastHalfAngle;

	UPROPERTY(EditDefaultsOnly)
	float _raycastZOffset;

	UPROPERTY(EditDefaultsOnly)
	float _raycastDistance;

	UPROPERTY(EditDefaultsOnly)
	float _minimumDecalSize;

	UPROPERTY(EditDefaultsOnly)
	float _maximumDecalSize;

	UPROPERTY(EditDefaultsOnly)
	float _projectionTickness;

	UPROPERTY(EditDefaultsOnly)
	UMaterial* _footstepsMaterial;

	UPROPERTY(Transient)
	TArray<FFootstep> _currentFootSteps;

	UPROPERTY(Transient)
	UDecalSpawner* _decalSpawner;

public:
	UFUNCTION()
	void TriggerSpawnFootstep(UFootstepCreatorComponent* originatorComponent, FVector location);

	UFUNCTION()
	void OnUpdateObserverFootsteps();

	UFUNCTION()
	void OnUpdateCreatorFootsteps(UFootstepCreatorComponent* creator);

public:
	UFootstepManagerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFootstepManagerComponent) { return 0; }
