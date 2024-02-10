#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "MatchboxAddon.generated.h"

class USpeedOverrideEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UMatchboxAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _speedModifier;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USpeedOverrideEffect> _speedOverrideEffectClass;

public:
	UMatchboxAddon();
};

FORCEINLINE uint32 GetTypeHash(const UMatchboxAddon) { return 0; }
