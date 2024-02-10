#pragma once

#include "CoreMinimal.h"
#include "DBDTimer.h"
#include "DBDBidirectionalTimer.generated.h"

USTRUCT()
struct FDBDBidirectionalTimer: public FDBDTimer
{
	GENERATED_BODY()

public:
	DBDGAMEPLAY_API FDBDBidirectionalTimer();
};

FORCEINLINE uint32 GetTypeHash(const FDBDBidirectionalTimer) { return 0; }
