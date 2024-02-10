#pragma once

#include "CoreMinimal.h"
#include "BaseEscapeThroughHatch.h"
#include "EscapeThroughHatch.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEscapeThroughHatch : public UBaseEscapeThroughHatch
{
	GENERATED_BODY()

public:
	UEscapeThroughHatch();
};

FORCEINLINE uint32 GetTypeHash(const UEscapeThroughHatch) { return 0; }
