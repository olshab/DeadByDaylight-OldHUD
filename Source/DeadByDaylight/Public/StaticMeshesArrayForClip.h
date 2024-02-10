#pragma once

#include "CoreMinimal.h"
#include "StaticMeshesArrayForClip.generated.h"

USTRUCT(BlueprintType)
struct FStaticMeshesArrayForClip
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FStaticMeshesArrayForClip();
};

FORCEINLINE uint32 GetTypeHash(const FStaticMeshesArrayForClip) { return 0; }
