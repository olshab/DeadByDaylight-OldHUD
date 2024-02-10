#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "BarrelEventComponent.generated.h"

class ABarrel;
class ARespawnableInteractable;

UCLASS(meta=(BlueprintSpawnableComponent))
class BARREL2023_API UBarrelEventComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<ABarrel>> _spawnableBarrelClasses;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _barrelSwitchTimerMin;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _barrelSwitchTimerMax;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _redBarrelSpawnDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _numberOfGeneratorsToComplete;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _numberOfHooksToComplete;

	UPROPERTY(Transient)
	TMap<ABarrel*, FVector> _barrelLocations;

	UPROPERTY(EditDefaultsOnly)
	float _collisionCapsuleHalfHeight;

	UPROPERTY(EditDefaultsOnly)
	float _collisionCapsuleRadius;

private:
	UFUNCTION(Exec)
	void DBD_BarrelSpawnRedBarrel();

	UFUNCTION(Exec)
	void DBD_BarrelSpawnGreenBarrel();

	UFUNCTION(Exec)
	void DBD_BarrelSpawnBlueBarrel();

	UFUNCTION(Exec)
	void DBD_BarrelPauseAllTimers(bool shouldPause);

	UFUNCTION(Exec)
	void DBD_BarrelDebugBarrelSpawnPositions(float duration) const;

	UFUNCTION()
	void Authority_OnIntroComplete();

	UFUNCTION()
	void Authority_OnBarrelTimerDone(ARespawnableInteractable* respawnableInteractable);

	UFUNCTION()
	void Authority_OnBarrelInteractionChanged(ARespawnableInteractable* respawnableInteractable, bool isInteracting);

public:
	UBarrelEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBarrelEventComponent) { return 0; }
