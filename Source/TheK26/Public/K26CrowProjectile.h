#pragma once

#include "CoreMinimal.h"
#include "EK26ProjectileState.h"
#include "OnCrowProjectileStateChanged.h"
#include "GameFramework/Actor.h"
#include "PoolableActor.h"
#include "PotentialAttack.h"
#include "UObject/NoExportTypes.h"
#include "K26ProjectileStateDetails.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "Engine/EngineTypes.h"
#include "K26ProjectileStateChangeDelegate.h"
#include "OnAcquiredChanged.h"
#include "K26CrowProjectile.generated.h"

class USceneComponent;
class UCurveFloat;
class UDBDSkeletalMeshComponentBudgeted;
class UStaticMeshComponent;
class UK26PowerOutlineUpdateStrategy;
class UDBDOutlineComponent;
class UK26AmmoHandlerComponent;
class USplineComponent;
class UDBDNavModifierComponent;
class ALocker;
class UK26PowerStatusHandlerComponent;
class UK26PathHandlerComponent;
class ACamperPlayer;
class UPrimitiveComponent;

UCLASS()
class AK26CrowProjectile : public AActor, public IPoolableActor, public IPotentialAttack
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnCrowProjectileStateChanged OnCrowProjectileStateChanged;

protected:
	UPROPERTY(Transient)
	FVector _originalFireLocation;

	UPROPERTY(EditDefaultsOnly)
	TMap<EK26ProjectileState, FK26ProjectileStateDetails> _projectileStateDetails;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _summonTime;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _detectionRadiusScaleX;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _detectionRadiusScaleY;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _detectionRadiusScaleZ;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _crowFireAuraVisibilityForSurvivorsTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _crowSummonAuraVisibilityForSurvivorsTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _detectionRadiusFromAbove;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _baseSpeed;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _selfDestructTimeOnDestroyed;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _rangeToTriggerNearSurvivorSFX;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _onPathMovementSpeedModifierCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _offPathMovementSpeedModifierCurve;

	UPROPERTY(EditDefaultsOnly)
	float _projectileOffPathCurveDuration;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Path)
	TArray<FVector> _path;

	UPROPERTY(Replicated)
	int32 _pooledPathIndex;

	UPROPERTY(BlueprintReadOnly)
	EK26ProjectileState _currentProjectileState;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(BindWidgetOptional))
	UK26PowerOutlineUpdateStrategy* _crowFlockOutlineUpdateStrategy;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditDefaultsOnly, Replicated, meta=(BindWidgetOptional))
	USplineComponent* _pathSplineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _collisionStaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _killerInstinctStaticMeshComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDSkeletalMeshComponentBudgeted* _visualSkeletalMeshComponent;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	USceneComponent* _rootComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDNavModifierComponent* _dangerNavModifierComponent;

	UPROPERTY(BlueprintAssignable)
	FK26ProjectileStateChangeDelegate _k26ProjectileStateChangeDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

private:
	UPROPERTY(Transient)
	TArray<ALocker*> _lockersWithSurvivorsInitiallyOnKillerInstinctRadius;

	UPROPERTY(Replicated, Transient)
	FVector _forwardDirection;

	UPROPERTY(Transient)
	float _fireTime;

	UPROPERTY(Transient)
	float _currentDistanceAlongSpline;

	UPROPERTY(Transient)
	float _offPathTime;

	UPROPERTY(Replicated, Export)
	UK26PowerStatusHandlerComponent* _statusHandlerComponent;

	UPROPERTY(Replicated, Export)
	UK26AmmoHandlerComponent* _ammoHandlerComponent;

	UPROPERTY(Replicated, Export)
	UK26PathHandlerComponent* _pathHandlerComponent;

private:
	UFUNCTION(Server, Reliable)
	void Server_OnSurvivorHit(const EK26ProjectileState stateOnHit, ACamperPlayer* hitSurvivor);

protected:
	UFUNCTION(BlueprintNativeEvent)
	void ProjectileWentOutOfBoundsEvent();

	UFUNCTION()
	void OnSurvivorAdded(ACamperPlayer* survivorAdded);

private:
	UFUNCTION()
	void OnRep_Path();

protected:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnIsWithinSurvivorRangeChanged(AActor* survivorActor, const bool isInRange);

	UFUNCTION()
	void OnIntroCompleted();

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetState(const EK26ProjectileState newState, const int32 pooledPathIndex);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetStartingPosition(const FVector& position, const FRotator& angle);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnExpiration();

	UFUNCTION()
	void Local_OnSummonComplete();

	UFUNCTION()
	void Local_OnCollisionOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION(BlueprintPure)
	bool IsHitboxBeingShown() const;

private:
	UFUNCTION()
	void HideOutlineFromSurvivor();

protected:
	UFUNCTION(BlueprintPure)
	float GetDistanceFromFirePosition() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnExpiration();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEnteredNearAudioRangeOfSurvivor(ACamperPlayer* survivor);

private:
	UFUNCTION(Client, Reliable)
	void Client_LocalKillerStartSummonTimer(const float killerLocalSummonTime);

	UFUNCTION()
	void Authority_OnSummonComplete();

	UFUNCTION()
	void Authority_OnScoutingOverlapEnd(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnScoutingOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);

	UFUNCTION()
	void Authority_OnDestroyTimerExpired();

	UFUNCTION()
	void Authority_OnDestroyAttempt(const TArray<AActor*>& instigatorsForCompletion);

	UFUNCTION()
	void Authority_OnCollisionOverlapEnd(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnCollisionOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK26CrowProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AK26CrowProjectile) { return 0; }
