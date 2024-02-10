#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K33GridCellLocation.h"
#include "K33TunnelGridCellData.generated.h"

class AK33ControlStation;

USTRUCT()
struct FK33TunnelGridCellData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FVector GridWorldLocation;

	UPROPERTY()
	TWeakObjectPtr<AK33ControlStation> ControlStation;

private:
	UPROPERTY()
	FK33GridCellLocation _gridLocation;

public:
	THEK33_API FK33TunnelGridCellData();
};

FORCEINLINE uint32 GetTypeHash(const FK33TunnelGridCellData) { return 0; }
