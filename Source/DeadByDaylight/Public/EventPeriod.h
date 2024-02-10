#pragma once

#include "CoreMinimal.h"
#include "EventPeriod.generated.h"

USTRUCT()
struct FEventPeriod
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

protected:
	UPROPERTY()
	FString StartDate;

	UPROPERTY()
	FString EndDate;

public:
	DEADBYDAYLIGHT_API FEventPeriod();
};

FORCEINLINE uint32 GetTypeHash(const FEventPeriod) { return 0; }
