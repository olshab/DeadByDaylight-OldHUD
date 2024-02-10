#pragma once

#include "CoreMinimal.h"
#include "BackendCinematicsContentData.generated.h"

USTRUCT()
struct FBackendCinematicsContentData
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	bool AllowSkip;

	UPROPERTY()
	FString StartDate;

	UPROPERTY()
	FString EndDate;

public:
	DEADBYDAYLIGHT_API FBackendCinematicsContentData();
};

FORCEINLINE uint32 GetTypeHash(const FBackendCinematicsContentData) { return 0; }
