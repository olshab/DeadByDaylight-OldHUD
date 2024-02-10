#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_K31Power_19.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UAddon_K31Power_19 : public UItemAddon
{
	GENERATED_BODY()

public:
	UAddon_K31Power_19();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K31Power_19) { return 0; }
