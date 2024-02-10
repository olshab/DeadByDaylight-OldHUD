#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "HangAnalytics.generated.h"

USTRUCT()
struct FHangAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool IsHang;

	UPROPERTY()
	FString HangSourcesInfo;

	UPROPERTY()
	FString HangLogs;

	UPROPERTY()
	float LastLoadingProgression;

	UPROPERTY()
	FString AdditionalLogs;

	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString HangSourcesName;

public:
	DBDANALYTICS_API FHangAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FHangAnalytics) { return 0; }
