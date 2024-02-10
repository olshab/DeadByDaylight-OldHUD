#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "K33Power_Addon_14.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33Power_Addon_14 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _blindnessStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	float _blindnessDuration;

	UPROPERTY(EditDefaultsOnly)
	float _survivorRangeDistanceFromTurretToTriggerEffect;

public:
	UK33Power_Addon_14();
};

FORCEINLINE uint32 GetTypeHash(const UK33Power_Addon_14) { return 0; }
