#pragma once

#include "CoreMinimal.h"
#include "ClawTrapUntrapDatum.generated.h"

USTRUCT(BlueprintType)
struct FClawTrapUntrapDatum
{
	GENERATED_BODY()

public:
	THEK31_API FClawTrapUntrapDatum();
};

FORCEINLINE uint32 GetTypeHash(const FClawTrapUntrapDatum) { return 0; }
