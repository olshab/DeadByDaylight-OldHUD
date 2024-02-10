#pragma once

#include "CoreMinimal.h"
#include "Addon_TheBlight_BaseConsecutiveDashModifier.h"
#include "Addon_TheBlight_17.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_17 : public UAddon_TheBlight_BaseConsecutiveDashModifier
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _distanceToTravel;

public:
	UAddon_TheBlight_17();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_17) { return 0; }
