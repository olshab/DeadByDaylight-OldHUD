#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "K33Power_Addon_15.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33Power_Addon_15 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _turretRange;

public:
	UK33Power_Addon_15();
};

FORCEINLINE uint32 GetTypeHash(const UK33Power_Addon_15) { return 0; }
