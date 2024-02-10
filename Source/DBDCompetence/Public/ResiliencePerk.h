#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "ResiliencePerk.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UResiliencePerk : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _actionSpeed;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _actionSpeedStatusEffectClass;

public:
	UResiliencePerk();
};

FORCEINLINE uint32 GetTypeHash(const UResiliencePerk) { return 0; }
