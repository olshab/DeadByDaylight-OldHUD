#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "GameFramework/MovementComponent.h"
#include "StatProperty.h"
#include "DroneRepMovement.h"
#include "DroneDeployDatum.h"
#include "UObject/NoExportTypes.h"
#include "EDroneFlyingHeight.h"
#include "EK31DroneMovementMode.h"
#include "K31DroneMovementComponent.generated.h"

class USceneComponent;
class UCurveFloat;
class AGameStateBase;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneMovementComponent : public UMovementComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeployLocationChangedEvent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttachToCharacterForDeployChangedEvent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAccelerationChangedEvent, const FVector&, acceleration);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovementBlueprintEvent);

public:
	UPROPERTY(BlueprintAssignable)
	FOnDeployLocationChangedEvent OnDeployLocationChangedEvent;

	UPROPERTY(BlueprintAssignable)
	FOnAttachToCharacterForDeployChangedEvent OnAttachToCharacterForDeployChangedEvent;

	UPROPERTY(BlueprintAssignable)
	FOnAccelerationChangedEvent OnAccelerationChangedEvent;

	UPROPERTY(BlueprintAssignable)
	FMovementBlueprintEvent OnFlightHeightChangedBlueprintEvent;

	UPROPERTY(BlueprintAssignable)
	FMovementBlueprintEvent OnMovementModeChangedBlueprintEvent;

private:
	UPROPERTY(EditAnywhere)
	FStatProperty _rotationRate;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _rotationRateStealthMode;

	UPROPERTY(EditAnywhere)
	float _rotationLerpTime;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _minHeightAboveGround;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _maxHeightAboveGround;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _heightAdjustmentMovingTime;

	UPROPERTY(EditAnywhere)
	float _deployMovementSpeed;

	UPROPERTY(EditAnywhere)
	float _replicationFrequency;

	UPROPERTY(EditAnywhere)
	float _smoothingTime;

	UPROPERTY(EditAnywhere)
	float _maxSmoothUpdateDistance;

	UPROPERTY(EditAnywhere)
	float _noSmoothUpdateDistance;

	UPROPERTY(EditAnywhere)
	FName _deployCharacterSocket;

	UPROPERTY(EditAnywhere)
	float _maxTravelDistance;

	UPROPERTY(EditAnywhere)
	float _maxDeployTime;

	UPROPERTY(EditAnywhere)
	float _gravity;

	UPROPERTY(EditAnywhere)
	float _velocityInterpolationAlpha;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _constantSpeedToAccelerationCurve;

	UPROPERTY(Transient)
	AGameStateBase* _gameState;

	UPROPERTY()
	FDroneDeployDatum _localDeployDatum;

	UPROPERTY()
	AActor* _interactingActor;

	UPROPERTY(Transient, Export)
	TArray<USceneComponent*> _additionalRotatingComponents;

	UPROPERTY(Transient, Export)
	USceneComponent* _updatedComponentOriginalParent;

	UPROPERTY(ReplicatedUsing=OnRep_ReplicatedMovement)
	FDroneRepMovement _replicatedMovement;

	UPROPERTY(ReplicatedUsing=OnRep_DeployDatum)
	FDroneDeployDatum _repDeployDatum;

private:
	UFUNCTION()
	void OnRep_ReplicatedMovement(const FDroneRepMovement& oldRepMovement);

	UFUNCTION()
	void OnRep_DeployDatum(const FDroneDeployDatum& oldDeployDatum);

public:
	UFUNCTION(BlueprintPure)
	bool IsMeshAttachedToCharacterForDeploy() const;

	UFUNCTION(BlueprintPure)
	bool HasReachedDeployLocation() const;

	UFUNCTION(BlueprintPure)
	EDroneFlyingHeight GetTargetFlightHeight() const;

	UFUNCTION(BlueprintPure)
	EK31DroneMovementMode GetMovementMode() const;

	UFUNCTION(BlueprintPure)
	float GetDistanceToTarget() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31DroneMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneMovementComponent) { return 0; }
