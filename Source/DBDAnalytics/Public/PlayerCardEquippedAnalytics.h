#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PlayerCardEquippedAnalytics.generated.h"

USTRUCT()
struct FPlayerCardEquippedAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Badge;

	UPROPERTY()
	FString Banner;

	UPROPERTY()
	FString FromScreen;

public:
	DBDANALYTICS_API FPlayerCardEquippedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerCardEquippedAnalytics) { return 0; }
