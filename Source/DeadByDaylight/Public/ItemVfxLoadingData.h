#pragma once

#include "CoreMinimal.h"
#include "ItemVfxLoadingData.generated.h"

class AItemVfx;

USTRUCT()
struct FItemVfxLoadingData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	AItemVfx* ItemVfx;

public:
	DEADBYDAYLIGHT_API FItemVfxLoadingData();
};

FORCEINLINE uint32 GetTypeHash(const FItemVfxLoadingData) { return 0; }
