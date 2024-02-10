#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "EGameplayElementType.h"
#include "ETileSpawnPointType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RespawnableComponent.generated.h"

class UTileSpawnPoint;
class UActorSpawner;
class UDebugTimerLogComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API URespawnableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCosmeticNeeded);

protected:
	UPROPERTY(BlueprintAssignable)
	FOnCosmeticNeeded Cosmetic_OnRespawn;

	UPROPERTY(BlueprintAssignable)
	FOnCosmeticNeeded Cosmetic_OnDespawn;

	UPROPERTY(BlueprintAssignable)
	FOnCosmeticNeeded Cosmetic_OnFirstSpawn;

	UPROPERTY(BlueprintReadOnly)
	bool _hasStartedRespawning;

	UPROPERTY(BlueprintReadOnly)
	bool _hasExceededMinRespawnTime;

private:
	UPROPERTY(EditDefaultsOnly)
	EGameplayElementType _gameplayElementSpawnType;

	UPROPERTY(EditDefaultsOnly)
	ETileSpawnPointType _tileSpawnType;

	UPROPERTY(Transient, Export)
	UActorSpawner* _actorSpawnerInUse;

	UPROPERTY(Transient, Export)
	UTileSpawnPoint* _tileSpawnInUse;

	UPROPERTY(EditDefaultsOnly)
	bool _usesTimers;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _respawnFrequencyMin;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _respawnFrequencyMax;

	UPROPERTY(EditDefaultsOnly)
	float _disappearDuration;

	UPROPERTY(EditDefaultsOnly)
	float _minTimeBetweenRespawns;

	UPROPERTY(EditDefaultsOnly)
	float _spawnHeightOffset;

	UPROPERTY(EditDefaultsOnly)
	bool _usesGameplayElementSpawner;

	UPROPERTY(ReplicatedUsing=OnRep_OnLocationChanged)
	FVector _actorLocation;

	UPROPERTY(EditDefaultsOnly)
	float _collisionCapsuleHalfHeight;

	UPROPERTY(EditDefaultsOnly)
	float _collisionCapsuleRadius;

	UPROPERTY(Replicated, Transient, Export)
	UDebugTimerLogComponent* _debugLogTimer;

	UPROPERTY(EditDefaultsOnly)
	bool _onlyLimitDistanceBetweenSameActorType;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minDistanceFromActivatedSpawnElements;

	UPROPERTY(EditDefaultsOnly)
	TArray<TEnumAsByte<ECollisionChannel>> _collisionChannelsToCheckOnRespawn;

private:
	UFUNCTION()
	void OnRep_OnLocationChanged();

protected:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintCallable)
	void OnDespawnCosmeticsComplete();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool Authority_TryTeleport();

private:
	UFUNCTION()
	void Authority_OnTimerDone();

	UFUNCTION()
	void Authority_OnMinRespawnTimerDone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URespawnableComponent();
};

FORCEINLINE uint32 GetTypeHash(const URespawnableComponent) { return 0; }
