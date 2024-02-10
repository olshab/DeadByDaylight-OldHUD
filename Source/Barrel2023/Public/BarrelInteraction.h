#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "BarrelInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class BARREL2023_API UBarrelInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _facingTolerance;

	UPROPERTY(EditDefaultsOnly)
	float _facingHeightUpOffset;

	UPROPERTY(EditDefaultsOnly)
	float _facingHeightDownOffset;

public:
	UBarrelInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBarrelInteraction) { return 0; }
