#pragma once

#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "DreamSnareTrapPlacementValidationStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDreamSnareTrapPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _numberOfGroundTest;

	UPROPERTY(EditDefaultsOnly)
	float _trapRadius;

	UPROPERTY(EditDefaultsOnly)
	float _maxElevationDifferentialOnTrapEdge;

public:
	UDreamSnareTrapPlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDreamSnareTrapPlacementValidationStrategy) { return 0; }
