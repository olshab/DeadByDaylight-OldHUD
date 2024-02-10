#pragma once

#include "CoreMinimal.h"
#include "FeatureLocksConditionData.generated.h"

USTRUCT()
struct FFeatureLocksConditionData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Left;

	UPROPERTY()
	FString Operator;

	UPROPERTY()
	FString Right;

public:
	DEADBYDAYLIGHT_API FFeatureLocksConditionData();
};

FORCEINLINE uint32 GetTypeHash(const FFeatureLocksConditionData) { return 0; }
