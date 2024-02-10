#pragma once

#include "CoreMinimal.h"
#include "PerkDropdown.h"
#include "PerkIdDropdown.generated.h"

USTRUCT(BlueprintType)
struct FPerkIdDropdown: public FPerkDropdown
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FPerkIdDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FPerkIdDropdown) { return 0; }
