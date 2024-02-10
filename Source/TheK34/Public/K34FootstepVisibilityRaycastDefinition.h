#pragma once

#include "CoreMinimal.h"
#include "K34FootstepVisibilityRaycastDefinition.generated.h"

USTRUCT(BlueprintType)
struct FK34FootstepVisibilityRaycastDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float HeightOffset;

	UPROPERTY(EditDefaultsOnly)
	float HorizontalOffset;

	UPROPERTY(EditDefaultsOnly)
	float SphereTraceRadius;

public:
	THEK34_API FK34FootstepVisibilityRaycastDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FK34FootstepVisibilityRaycastDefinition) { return 0; }
