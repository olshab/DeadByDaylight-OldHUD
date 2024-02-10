#pragma once

#include "CoreMinimal.h"
#include "ProximityToActorsIterativeWeightAdjustmentStrategy.h"
#include "ETileSpawnPointType.h"
#include "ProximityToSpawnPointTypeIterativeWeightAdjustmentStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UProximityToSpawnPointTypeIterativeWeightAdjustmentStrategy : public UProximityToActorsIterativeWeightAdjustmentStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	ETileSpawnPointType _spawnPointType;

public:
	UProximityToSpawnPointTypeIterativeWeightAdjustmentStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UProximityToSpawnPointTypeIterativeWeightAdjustmentStrategy) { return 0; }
