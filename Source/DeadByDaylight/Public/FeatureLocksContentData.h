#pragma once

#include "CoreMinimal.h"
#include "FeatureLocksConditionData.h"
#include "FeatureLocksContentData.generated.h"

USTRUCT()
struct FFeatureLocksContentData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	FString Role;

	UPROPERTY(SkipSerialization)
	bool Role_IsSet;

	UPROPERTY()
	TArray<FFeatureLocksConditionData> Condition;

public:
	DEADBYDAYLIGHT_API FFeatureLocksContentData();
};

FORCEINLINE uint32 GetTypeHash(const FFeatureLocksContentData) { return 0; }
