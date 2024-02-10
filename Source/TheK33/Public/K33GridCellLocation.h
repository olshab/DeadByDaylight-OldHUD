#pragma once

#include "CoreMinimal.h"
#include "K33GridCellLocation.generated.h"

USTRUCT()
struct FK33GridCellLocation
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 X;

	UPROPERTY()
	int32 Y;

public:
	THEK33_API FK33GridCellLocation();
};

FORCEINLINE uint32 GetTypeHash(const FK33GridCellLocation) { return 0; }
