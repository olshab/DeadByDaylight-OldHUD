#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FeatureGateAnalyticsDBDFeature.h"
#include "FeatureGateAnalytics.generated.h"

USTRUCT()
struct FFeatureGateAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool Enabled;

	UPROPERTY()
	TArray<FFeatureGateAnalyticsDBDFeature> Features;

public:
	DBDANALYTICS_API FFeatureGateAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FFeatureGateAnalytics) { return 0; }
