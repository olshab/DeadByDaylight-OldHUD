#pragma once

#include "CoreMinimal.h"
#include "ObjectPlacementValidationWithRestrictionStrategy.h"
#include "DBDTunableRowHandle.h"
#include "K31DronePlacementStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DronePlacementStrategy : public UObjectPlacementValidationWithRestrictionStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _sphereSweepRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minHeightAboveGround;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxHeightAboveGround;

public:
	UK31DronePlacementStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK31DronePlacementStrategy) { return 0; }
