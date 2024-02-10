#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "K33TurretPlacementValidationStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33TurretPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FVector _navmeshProjectionBoxExtent;

	UPROPERTY(EditDefaultsOnly)
	FVector _navmeshProjectionBoxExtentForSnapping;

public:
	UK33TurretPlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretPlacementValidationStrategy) { return 0; }
