#pragma once

#include "CoreMinimal.h"
#include "SpawnConditions.generated.h"

USTRUCT()
struct FSpawnConditions
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float MinProximity;

public:
	DEADBYDAYLIGHT_API FSpawnConditions();
};

FORCEINLINE uint32 GetTypeHash(const FSpawnConditions) { return 0; }
