#pragma once

#include "CoreMinimal.h"
#include "SurvivorWeakPointScoreDatum.generated.h"

USTRUCT()
struct FSurvivorWeakPointScoreDatum
{
	GENERATED_BODY()

public:
	THEK31_API FSurvivorWeakPointScoreDatum();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorWeakPointScoreDatum) { return 0; }
