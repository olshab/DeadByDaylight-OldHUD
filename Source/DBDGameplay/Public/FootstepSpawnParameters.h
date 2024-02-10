#pragma once

#include "CoreMinimal.h"
#include "FootstepSpawnParameters.generated.h"

class UCurveFloat;

USTRUCT()
struct FFootstepSpawnParameters
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	UCurveFloat* FadeCurve;

	UPROPERTY(Transient)
	UCurveFloat* VeinsCurve;

public:
	DBDGAMEPLAY_API FFootstepSpawnParameters();
};

FORCEINLINE uint32 GetTypeHash(const FFootstepSpawnParameters) { return 0; }
