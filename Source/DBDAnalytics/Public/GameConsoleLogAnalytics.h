#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "GameConsoleLogAnalytics.generated.h"

USTRUCT()
struct FGameConsoleLogAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Verbosity;

	UPROPERTY()
	FString Category;

	UPROPERTY()
	uint64 FrameCounter;

	UPROPERTY()
	FString Message;

	UPROPERTY()
	FString StackTrace;

	UPROPERTY()
	uint32 Repeated;

public:
	DBDANALYTICS_API FGameConsoleLogAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FGameConsoleLogAnalytics) { return 0; }
