#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "K33ControlStationTunnelEntranceOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33ControlStationTunnelEntranceOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _controlStationIsFlaggedForTarget;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _controlStationIsSelected;

public:
	UK33ControlStationTunnelEntranceOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK33ControlStationTunnelEntranceOutlineUpdateStrategy) { return 0; }
