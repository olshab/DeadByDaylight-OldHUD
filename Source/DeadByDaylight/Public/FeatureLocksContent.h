#pragma once

#include "CoreMinimal.h"
#include "FeatureLocksContentData.h"
#include "FeatureLocksContent.generated.h"

USTRUCT()
struct FFeatureLocksContent
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<FFeatureLocksContentData> FeatureLocks;

public:
	DEADBYDAYLIGHT_API FFeatureLocksContent();
};

FORCEINLINE uint32 GetTypeHash(const FFeatureLocksContent) { return 0; }
