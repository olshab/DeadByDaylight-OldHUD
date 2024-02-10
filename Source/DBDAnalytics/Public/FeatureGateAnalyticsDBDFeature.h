#pragma once

#include "CoreMinimal.h"
#include "FeatureGateAnalyticsDBDFeature.generated.h"

USTRUCT()
struct FFeatureGateAnalyticsDBDFeature
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName Id;

	UPROPERTY()
	FName State;

public:
	DBDANALYTICS_API FFeatureGateAnalyticsDBDFeature();
};

FORCEINLINE uint32 GetTypeHash(const FFeatureGateAnalyticsDBDFeature) { return 0; }
