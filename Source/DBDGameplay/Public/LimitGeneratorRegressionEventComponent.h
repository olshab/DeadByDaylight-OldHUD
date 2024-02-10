#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "LimitGeneratorRegressionEventComponent.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ULimitGeneratorRegressionEventComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRegressionEvent, int32, currentRegressionLevel, bool, survivorInteracting);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBlockingStatusChanged, int32, currentRegressionLevel, bool, blocked);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCosmeticEvent, int32, currentRegressionLevel);

protected:
	UPROPERTY(BlueprintAssignable)
	FOnRegressionEvent Cosmetic_OnRegressionEvent;

	UPROPERTY(BlueprintAssignable)
	FCosmeticEvent Cosmetic_OnRegressionEventZoneEntered;

	UPROPERTY(BlueprintAssignable)
	FCosmeticEvent Cosmetic_OnRegressionEventZoneExited;

	UPROPERTY(BlueprintAssignable)
	FCosmeticEvent Cosmetic_OnRepairStarted;

	UPROPERTY(BlueprintAssignable)
	FCosmeticEvent Cosmetic_OnRepairStopped;

	UPROPERTY(BlueprintAssignable)
	FOnBlockingStatusChanged Cosmetic_OnBlockingStatusChanged;

private:
	UPROPERTY(ReplicatedUsing=OnRep_RegressionEventsSuffered, Transient)
	int32 _regressionEventsSuffered;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _numberLastRegressionEventsToShow;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxNumberRegressionEventsAllowed;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _thresholdImmediateRegressionToConsiderRegressionEvent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _immediateRegressionPercentage;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _immediateRegressionPercentageLimitRegressionEvents;

	UPROPERTY(EditDefaultsOnly)
	float _killerProximityZoneRadius;

	UPROPERTY(EditDefaultsOnly)
	FCollisionProfileName _killerProximityZoneDefaultCollisionProfile;

	UPROPERTY(EditDefaultsOnly)
	FCollisionProfileName _killerProximityZoneNoCollisionProfile;

	UPROPERTY(EditDefaultsOnly)
	float _waitTimeAfterGeneratorWasInteractedUponToTriggerVfx;

	UPROPERTY(Transient, Export)
	USphereComponent* _killerProximityZoneForRegressionEvents;

private:
	UFUNCTION()
	void OnRep_RegressionEventsSuffered();

	UFUNCTION()
	void OnKillerProximityZoneForRegressionEventsOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnKillerProximityZoneForRegressionEventsOverlapBegin(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintPure)
	int32 GetMaxNumberRegressionEventsAllowed() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULimitGeneratorRegressionEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULimitGeneratorRegressionEventComponent) { return 0; }
