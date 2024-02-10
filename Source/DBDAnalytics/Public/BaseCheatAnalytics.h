#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "BaseCheatAnalytics.generated.h"

USTRUCT()
struct FBaseCheatAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Location;

	UPROPERTY()
	FString NetMode;

	UPROPERTY()
	FString Requester;

	UPROPERTY()
	FString RequesterPlatform;

	UPROPERTY()
	FString RequesterRole;

	UPROPERTY()
	int32 RequesterCharacterId;

	UPROPERTY()
	FString RequesterCharacterName;

	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString MatchType;

public:
	DBDANALYTICS_API FBaseCheatAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FBaseCheatAnalytics) { return 0; }
