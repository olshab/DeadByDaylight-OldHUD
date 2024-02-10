#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "EGameplayElementType.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ETileSpawnPointType.h"
#include "UnstableRiftTeleportationComponent.generated.h"

class AUnstableRift;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UUnstableRiftTeleportationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _unstableRiftTeleportDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportationVisualsDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minDistanceFromOtherUnstableRifts;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _elementTag;

	UPROPERTY(EditDefaultsOnly)
	ETileSpawnPointType _spawnPointType;

	UPROPERTY(EditDefaultsOnly)
	EGameplayElementType _actorSpawnerType;

	UPROPERTY()
	TArray<AUnstableRift*> _allUnstableRifts;

	UPROPERTY(EditDefaultsOnly)
	float _capsuleRadius;

	UPROPERTY(EditDefaultsOnly)
	float _capsuleHalfHeight;

	UPROPERTY(EditDefaultsOnly)
	bool _ignoreTouches;

	UPROPERTY(ReplicatedUsing=OnRep_IsAllowedToTeleport)
	bool _isAllowedToTeleport;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<AActor>> _actorsInMapToAvoid;

	UPROPERTY(EditDefaultsOnly)
	float _minDistanceFromActorsToAvoid;

private:
	UFUNCTION()
	void OnRep_IsAllowedToTeleport();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TeleportUnstableRift(const FVector location);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PreTeleportation(const FVector& teleportLocation, const bool hadPlayerInteraction);

	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UUnstableRiftTeleportationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UUnstableRiftTeleportationComponent) { return 0; }
