#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ArchiveNewTomePopupAnalytics.generated.h"

USTRUCT()
struct FArchiveNewTomePopupAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString ArchiveId;

	UPROPERTY()
	FString ButtonId;

	UPROPERTY()
	int32 VideoProgress;

	UPROPERTY()
	bool WasVideoWatchUntilEnd;

public:
	DBDANALYTICS_API FArchiveNewTomePopupAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveNewTomePopupAnalytics) { return 0; }
