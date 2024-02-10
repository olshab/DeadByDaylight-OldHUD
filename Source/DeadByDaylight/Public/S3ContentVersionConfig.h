#pragma once

#include "CoreMinimal.h"
#include "S3ContentVersionConfig.generated.h"

USTRUCT()
struct FS3ContentVersionConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool dsNewContentShutdown;

	UPROPERTY()
	float dsNewContentShutdownMinMinutes;

	UPROPERTY()
	float dsNewContentShutdownMaxMinutes;

	UPROPERTY()
	bool clientNewContentForceReboot;

	UPROPERTY()
	bool dsNewContentCatalogItemValidation;

public:
	DEADBYDAYLIGHT_API FS3ContentVersionConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3ContentVersionConfig) { return 0; }
