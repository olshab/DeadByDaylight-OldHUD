#pragma once

#include "CoreMinimal.h"
#include "ClientConnectionBaseAnalytics.h"
#include "ClientLoginAnalytics.generated.h"

USTRUCT()
struct FClientLoginAnalytics: public FClientConnectionBaseAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString ClientOptions;

	UPROPERTY()
	FString ClientMatchId;

	UPROPERTY()
	FString ClientGameType;

	UPROPERTY()
	FString LoginResult;

public:
	DBDANALYTICS_API FClientLoginAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FClientLoginAnalytics) { return 0; }
