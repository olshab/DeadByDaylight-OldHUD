#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_Wraith_TheSerpentSoot.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_Wraith_TheSerpentSoot : public UItemAddon
{
	GENERATED_BODY()

public:
	UAddon_Wraith_TheSerpentSoot();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Wraith_TheSerpentSoot) { return 0; }
