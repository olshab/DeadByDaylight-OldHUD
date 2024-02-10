#pragma once

#include "CoreMinimal.h"
#include "TricksterChainedThrowsAddon.h"
#include "IridescentPhotocardAddon.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UIridescentPhotocardAddon : public UTricksterChainedThrowsAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _percentageGainedOnHit;

	UPROPERTY(EditDefaultsOnly)
	int32 _maxConsecutiveHits;

public:
	UIridescentPhotocardAddon();
};

FORCEINLINE uint32 GetTypeHash(const UIridescentPhotocardAddon) { return 0; }
