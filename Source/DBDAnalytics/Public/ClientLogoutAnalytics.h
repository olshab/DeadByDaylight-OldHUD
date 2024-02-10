#pragma once

#include "CoreMinimal.h"
#include "ClientConnectionBaseAnalytics.h"
#include "ClientLogoutAnalytics.generated.h"

USTRUCT()
struct FClientLogoutAnalytics: public FClientConnectionBaseAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString GameState;

	UPROPERTY()
	FString GameFlowStep;

public:
	DBDANALYTICS_API FClientLogoutAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FClientLogoutAnalytics) { return 0; }
