#pragma once

#include "CoreMinimal.h"
#include "MaxSpeedValidate.generated.h"

USTRUCT(BlueprintType)
struct FMaxSpeedValidate
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FMaxSpeedValidate();
};

FORCEINLINE uint32 GetTypeHash(const FMaxSpeedValidate) { return 0; }
