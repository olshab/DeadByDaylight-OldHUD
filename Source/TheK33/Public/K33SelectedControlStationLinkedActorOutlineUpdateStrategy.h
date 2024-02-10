#pragma once

#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "K33SelectedControlStationLinkedActorOutlineUpdateStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33SelectedControlStationLinkedActorOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _revealedColorForSelectedLinkedControlStation;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _revealedColorForTargetedLinkedControlStation;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _exitProximityDistance;

public:
	UK33SelectedControlStationLinkedActorOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK33SelectedControlStationLinkedActorOutlineUpdateStrategy) { return 0; }
