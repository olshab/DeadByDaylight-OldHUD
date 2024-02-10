#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ClientConnectionBaseAnalytics.generated.h"

USTRUCT()
struct FClientConnectionBaseAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString ClientRole;

	UPROPERTY()
	FString ClientSurvivorIndex;

	UPROPERTY()
	FString ClientKillerIndex;

	UPROPERTY()
	FString ClientPlatformAccountId;

	UPROPERTY()
	FString ClientMirrorsId;

	UPROPERTY()
	FString ClientPlatform;

	UPROPERTY()
	FString ClientProvider;

	UPROPERTY()
	FString ClientName;

	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString GameType;

public:
	DBDANALYTICS_API FClientConnectionBaseAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FClientConnectionBaseAnalytics) { return 0; }
