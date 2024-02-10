#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "UnstableRiftInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UUnstableRiftInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _heightOffsetForOrbsHoverPosition;

	UPROPERTY(EditDefaultsOnly)
	float _heightOffsetForOrbsFinalPosition;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxDepositableVoidEnergy;

public:
	UUnstableRiftInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UUnstableRiftInteraction) { return 0; }
