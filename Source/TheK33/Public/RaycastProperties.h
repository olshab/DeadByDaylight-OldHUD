#pragma once

#include "CoreMinimal.h"
#include "RaycastProperties.generated.h"

USTRUCT()
struct FRaycastProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float HalfHeightPercentage;

	UPROPERTY(EditDefaultsOnly)
	float RadiusPercentage;

public:
	THEK33_API FRaycastProperties();
};

FORCEINLINE uint32 GetTypeHash(const FRaycastProperties) { return 0; }
