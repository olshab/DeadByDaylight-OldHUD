#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_K27Power_20.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_20 : public UItemAddon
{
	GENERATED_BODY()

public:
	UAddon_K27Power_20();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_20) { return 0; }
