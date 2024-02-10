#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PlayerCardMenuTabAnalytics.generated.h"

USTRUCT()
struct FPlayerCardMenuTabAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Provider;

	UPROPERTY()
	int32 TabIndex;

	UPROPERTY()
	FString FromScreen;

public:
	DBDANALYTICS_API FPlayerCardMenuTabAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerCardMenuTabAnalytics) { return 0; }
