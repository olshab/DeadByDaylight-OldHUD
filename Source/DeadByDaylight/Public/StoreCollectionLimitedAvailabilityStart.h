#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreCollectionLimitedAvailabilityStart.generated.h"

USTRUCT()
struct FStoreCollectionLimitedAvailabilityStart
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FDateTime Date;

	UPROPERTY(EditAnywhere)
	bool VisibleBeforeStartDate;

public:
	DEADBYDAYLIGHT_API FStoreCollectionLimitedAvailabilityStart();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCollectionLimitedAvailabilityStart) { return 0; }
