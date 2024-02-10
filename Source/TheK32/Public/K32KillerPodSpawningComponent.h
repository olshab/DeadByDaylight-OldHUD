#pragma once

#include "CoreMinimal.h"
#include "K32KillerPodSpawningInputData.h"
#include "DBDTunableRowHandle.h"
#include "EK32KillerPodSpawningResult.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "K32KillerPodSpawningComponent.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerPodSpawningComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _podRemovalRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maximumRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maximumRelativeHeight;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _podSurfaceDistance;

	UPROPERTY(EditDefaultsOnly)
	float _worldDetectionTraceSphereSize;

	UPROPERTY(EditDefaultsOnly)
	float _survivorDetectionSphereSize;

	UPROPERTY(EditDefaultsOnly)
	float _lineOfSightTraceSphereSize;

	UPROPERTY(EditDefaultsOnly)
	float _podCollisionToFinalLocationTraceSphereSize;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _podInteractableRestrictionRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _podWindowRestrictionRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _podGeneratorRestrictionRange;

	UPROPERTY(EditDefaultsOnly)
	float _secondaryHitCheckDistance;

	UPROPERTY(EditDefaultsOnly)
	float _secondaryHitCheckBackDistance;

	UPROPERTY(EditDefaultsOnly)
	float _secondaryHitPitchRotationDegrees;

	UPROPERTY(EditDefaultsOnly)
	float _secondaryHitYawRotationDegrees;

	UPROPERTY(EditDefaultsOnly)
	float _floorSearchingLength;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _podSurfaceMinDegreesThreshold;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _podSurfaceMaxDegreesThreshold;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minimumSpawnDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _requiredAttachmentPoints;

	UPROPERTY(EditDefaultsOnly)
	float _attachmentPointGridHorizontalAngle;

	UPROPERTY(EditDefaultsOnly)
	float _attachmentPointGridVerticalAngle;

	UPROPERTY(EditDefaultsOnly)
	float _attachmentPointGridLength;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _distanceBetweenPods;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _addon13EffectActivationRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _addon13EffectDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealSurvivorToKillerStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _attachmentPointsRays;

	UPROPERTY(EditDefaultsOnly)
	float _validationAllowedDistanceOffset;

	UPROPERTY(EditDefaultsOnly)
	float _indicatorPointToLocationFactor;

	UPROPERTY(EditDefaultsOnly)
	FName _traceProfile;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _invalidShowDelay;

	UPROPERTY(EditDefaultsOnly)
	FVector _projectileSpawnOffset;

	UPROPERTY(EditDefaultsOnly)
	float _forwardProjectileSpawnDistance;

private:
	UFUNCTION(Server, Reliable)
	void Server_FireKillerProjectile(const FK32KillerPodSpawningInputData inputData, const EK32KillerPodSpawningResult expectedResult);

	UFUNCTION()
	void OnIntroCompleted();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_FireKillerProjectile();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInvalidPodTriggers(const FVector& invalidLocation) const;

public:
	UK32KillerPodSpawningComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerPodSpawningComponent) { return 0; }
