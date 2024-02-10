#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "PowerStruggle.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UPowerStruggle : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _wigglePercentToActivatePerk;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealPalletWhenKOEffectClass;

public:
	UPowerStruggle();
};

FORCEINLINE uint32 GetTypeHash(const UPowerStruggle) { return 0; }
