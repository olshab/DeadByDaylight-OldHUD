#pragma once

#include "CoreMinimal.h"
#include "ObjectPlacementValidationWithRestrictionStrategy.h"
#include "K32AntiCampZoneIdentifierComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32AntiCampZoneIdentifierComponent : public UObjectPlacementValidationWithRestrictionStrategy
{
	GENERATED_BODY()

public:
	UK32AntiCampZoneIdentifierComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32AntiCampZoneIdentifierComponent) { return 0; }
