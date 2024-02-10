#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "IterativeWeightAdjustmentStrategy.h"
#include "UObject/ScriptInterface.h"
#include "ProximityToActorsIterativeWeightAdjustmentStrategy.generated.h"

class UCurveFloat;
class IWeightedElement;
class USceneComponent;

UCLASS(Abstract)
class DEADBYDAYLIGHT_API UProximityToActorsIterativeWeightAdjustmentStrategy : public UIterativeWeightAdjustmentStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<USceneComponent*> _unmatchedActorLocations;

	UPROPERTY(Transient)
	TArray<TScriptInterface<IWeightedElement>> _selectedSpawners;

	UPROPERTY(Transient)
	int32 _currentPass;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _penaltyFromDistanceToClosestSpawnObject;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _penaltyFromDistanceToClosestSpawnObjectWhenActorHasOtherSpawnObjectNearby;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _scoreFromDistanceFromClosestActor;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _actorCloseToSpawnObjectDistanceThreshold;

	UPROPERTY(EditDefaultsOnly)
	int32 _spawnerCountPerActor;

public:
	UProximityToActorsIterativeWeightAdjustmentStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UProximityToActorsIterativeWeightAdjustmentStrategy) { return 0; }
